// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
// clang-format off
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
// util/topgen.py -t hw/top_custom_gf12/data/top_custom_gf12.hjson
// -o hw/top_custom_gf12
#include <limits.h>

#include "sw/device/lib/base/csr.h"
#include "sw/device/lib/base/mmio.h"
#include "sw/device/lib/dif/dif_alert_handler.h"
#include "sw/device/lib/dif/dif_aon_timer.h"
#include "sw/device/lib/dif/dif_edn.h"
#include "sw/device/lib/dif/dif_flash_ctrl.h"
#include "sw/device/lib/dif/dif_gpio.h"
#include "sw/device/lib/dif/dif_i2c.h"
#include "sw/device/lib/dif/dif_otbn.h"
#include "sw/device/lib/dif/dif_otp_ctrl.h"
#include "sw/device/lib/dif/dif_pattgen.h"
#include "sw/device/lib/dif/dif_pwrmgr.h"
#include "sw/device/lib/dif/dif_rv_plic.h"
#include "sw/device/lib/dif/dif_rv_timer.h"
#include "sw/device/lib/dif/dif_sensor_ctrl.h"
#include "sw/device/lib/dif/dif_spi_host.h"
#include "sw/device/lib/dif/dif_sysrst_ctrl.h"
#include "sw/device/lib/dif/dif_uart.h"
#include "sw/device/lib/runtime/ibex.h"
#include "sw/device/lib/runtime/irq.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/testing/test_framework/check.h"
#include "sw/device/lib/testing/rv_plic_testutils.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"
#include "sw/device/lib/testing/test_framework/status.h"
#include "hw/top_custom_gf12/sw/autogen/top_custom_gf12.h"

static dif_alert_handler_t alert_handler;
static dif_aon_timer_t aon_timer_aon;
static dif_edn_t edn0;
static dif_edn_t edn1;
static dif_flash_ctrl_t flash_ctrl;
static dif_gpio_t gpio;
static dif_i2c_t i2c0;
static dif_otbn_t otbn;
static dif_otp_ctrl_t otp_ctrl;
static dif_pattgen_t pattgen;
static dif_pwrmgr_t pwrmgr_aon;
static dif_rv_timer_t rv_timer;
static dif_sensor_ctrl_t sensor_ctrl;
static dif_spi_host_t spi_host0;
static dif_sysrst_ctrl_t sysrst_ctrl_aon;
static dif_uart_t uart0;
static dif_rv_plic_t plic;
static const top_custom_gf12_plic_target_t kHart = kTopCustom_gf12PlicTargetIbex0;

/**
 * Flag indicating which peripheral is under test.
 *
 * Declared volatile because it is referenced in the main program flow as well
 * as the ISR.
 */
static volatile top_custom_gf12_plic_peripheral_t peripheral_expected;

/**
 * Flags indicating the IRQ expected to have triggered and serviced within the
 * peripheral.
 *
 * Declared volatile because it is referenced in the main program flow as well
 * as the ISR.
 */
static volatile dif_alert_handler_irq_t alert_handler_irq_expected;
static volatile dif_alert_handler_irq_t alert_handler_irq_serviced;
static volatile dif_aon_timer_irq_t aon_timer_irq_expected;
static volatile dif_aon_timer_irq_t aon_timer_irq_serviced;
static volatile dif_edn_irq_t edn_irq_expected;
static volatile dif_edn_irq_t edn_irq_serviced;
static volatile dif_flash_ctrl_irq_t flash_ctrl_irq_expected;
static volatile dif_flash_ctrl_irq_t flash_ctrl_irq_serviced;
static volatile dif_gpio_irq_t gpio_irq_expected;
static volatile dif_gpio_irq_t gpio_irq_serviced;
static volatile dif_i2c_irq_t i2c_irq_expected;
static volatile dif_i2c_irq_t i2c_irq_serviced;
static volatile dif_otbn_irq_t otbn_irq_expected;
static volatile dif_otbn_irq_t otbn_irq_serviced;
static volatile dif_otp_ctrl_irq_t otp_ctrl_irq_expected;
static volatile dif_otp_ctrl_irq_t otp_ctrl_irq_serviced;
static volatile dif_pattgen_irq_t pattgen_irq_expected;
static volatile dif_pattgen_irq_t pattgen_irq_serviced;
static volatile dif_pwrmgr_irq_t pwrmgr_irq_expected;
static volatile dif_pwrmgr_irq_t pwrmgr_irq_serviced;
static volatile dif_rv_timer_irq_t rv_timer_irq_expected;
static volatile dif_rv_timer_irq_t rv_timer_irq_serviced;
static volatile dif_sensor_ctrl_irq_t sensor_ctrl_irq_expected;
static volatile dif_sensor_ctrl_irq_t sensor_ctrl_irq_serviced;
static volatile dif_spi_host_irq_t spi_host_irq_expected;
static volatile dif_spi_host_irq_t spi_host_irq_serviced;
static volatile dif_sysrst_ctrl_irq_t sysrst_ctrl_irq_expected;
static volatile dif_sysrst_ctrl_irq_t sysrst_ctrl_irq_serviced;
static volatile dif_uart_irq_t uart_irq_expected;
static volatile dif_uart_irq_t uart_irq_serviced;

/**
 * Provides external IRQ handling for this test.
 *
 * This function overrides the default OTTF external ISR.
 *
 * For each IRQ, it performs the following:
 * 1. Claims the IRQ fired (finds PLIC IRQ index).
 * 2. Checks that the index belongs to the expected peripheral.
 * 3. Checks that the correct and the only IRQ from the expected peripheral
 *    triggered.
 * 4. Clears the IRQ at the peripheral.
 * 5. Completes the IRQ service at PLIC.
 */
void ottf_external_isr(void) {
  dif_rv_plic_irq_id_t plic_irq_id;
  CHECK_DIF_OK(dif_rv_plic_irq_claim(&plic, kHart, &plic_irq_id));

  top_custom_gf12_plic_peripheral_t peripheral = (top_custom_gf12_plic_peripheral_t)
      top_custom_gf12_plic_interrupt_for_peripheral[plic_irq_id];
  CHECK(peripheral == peripheral_expected,
        "Interrupt from incorrect peripheral: exp = %d, obs = %d",
        peripheral_expected, peripheral);

  switch (peripheral) {
    case kTopCustomGf12PlicPeripheralAlertHandler: {
      dif_alert_handler_irq_t irq = (dif_alert_handler_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdAlertHandlerClassa);
      CHECK(irq == alert_handler_irq_expected,
            "Incorrect alert_handler IRQ triggered: exp = %d, obs = %d",
            alert_handler_irq_expected, irq);
      alert_handler_irq_serviced = irq;

      dif_alert_handler_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_alert_handler_irq_get_state(&alert_handler, &snapshot));
      CHECK(snapshot == (dif_alert_handler_irq_state_snapshot_t)(1 << irq),
            "Only alert_handler IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_alert_handler_irq_force(&alert_handler, irq, false));
      CHECK_DIF_OK(dif_alert_handler_irq_acknowledge(&alert_handler, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralAonTimerAon: {
      dif_aon_timer_irq_t irq = (dif_aon_timer_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdAonTimerAonWkupTimerExpired);
      CHECK(irq == aon_timer_irq_expected,
            "Incorrect aon_timer_aon IRQ triggered: exp = %d, obs = %d",
            aon_timer_irq_expected, irq);
      aon_timer_irq_serviced = irq;

      dif_aon_timer_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_aon_timer_irq_get_state(&aon_timer_aon, &snapshot));
      CHECK(snapshot == (dif_aon_timer_irq_state_snapshot_t)(1 << irq),
            "Only aon_timer_aon IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_aon_timer_irq_force(&aon_timer_aon, irq, false));
      CHECK_DIF_OK(dif_aon_timer_irq_acknowledge(&aon_timer_aon, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralEdn0: {
      dif_edn_irq_t irq = (dif_edn_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdEdn0EdnCmdReqDone);
      CHECK(irq == edn_irq_expected,
            "Incorrect edn0 IRQ triggered: exp = %d, obs = %d",
            edn_irq_expected, irq);
      edn_irq_serviced = irq;

      dif_edn_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_edn_irq_get_state(&edn0, &snapshot));
      CHECK(snapshot == (dif_edn_irq_state_snapshot_t)(1 << irq),
            "Only edn0 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_edn_irq_force(&edn0, irq, false));
      CHECK_DIF_OK(dif_edn_irq_acknowledge(&edn0, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralEdn1: {
      dif_edn_irq_t irq = (dif_edn_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdEdn1EdnCmdReqDone);
      CHECK(irq == edn_irq_expected,
            "Incorrect edn1 IRQ triggered: exp = %d, obs = %d",
            edn_irq_expected, irq);
      edn_irq_serviced = irq;

      dif_edn_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_edn_irq_get_state(&edn1, &snapshot));
      CHECK(snapshot == (dif_edn_irq_state_snapshot_t)(1 << irq),
            "Only edn1 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_edn_irq_force(&edn1, irq, false));
      CHECK_DIF_OK(dif_edn_irq_acknowledge(&edn1, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralFlashCtrl: {
      dif_flash_ctrl_irq_t irq = (dif_flash_ctrl_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdFlashCtrlProgEmpty);
      CHECK(irq == flash_ctrl_irq_expected,
            "Incorrect flash_ctrl IRQ triggered: exp = %d, obs = %d",
            flash_ctrl_irq_expected, irq);
      flash_ctrl_irq_serviced = irq;

      dif_flash_ctrl_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_flash_ctrl_irq_get_state(&flash_ctrl, &snapshot));
      CHECK(snapshot == (dif_flash_ctrl_irq_state_snapshot_t)(1 << irq),
            "Only flash_ctrl IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_flash_ctrl_irq_force(&flash_ctrl, irq, false));
      CHECK_DIF_OK(dif_flash_ctrl_irq_acknowledge(&flash_ctrl, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralGpio: {
      dif_gpio_irq_t irq = (dif_gpio_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdGpioGpio0);
      CHECK(irq == gpio_irq_expected,
            "Incorrect gpio IRQ triggered: exp = %d, obs = %d",
            gpio_irq_expected, irq);
      gpio_irq_serviced = irq;

      dif_gpio_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_gpio_irq_get_state(&gpio, &snapshot));
      CHECK(snapshot == (dif_gpio_irq_state_snapshot_t)(1 << irq),
            "Only gpio IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_gpio_irq_force(&gpio, irq, false));
      CHECK_DIF_OK(dif_gpio_irq_acknowledge(&gpio, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralI2c0: {
      dif_i2c_irq_t irq = (dif_i2c_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdI2c0FmtWatermark);
      CHECK(irq == i2c_irq_expected,
            "Incorrect i2c0 IRQ triggered: exp = %d, obs = %d",
            i2c_irq_expected, irq);
      i2c_irq_serviced = irq;

      dif_i2c_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_i2c_irq_get_state(&i2c0, &snapshot));
      CHECK(snapshot == (dif_i2c_irq_state_snapshot_t)(1 << irq),
            "Only i2c0 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_i2c_irq_force(&i2c0, irq, false));
      CHECK_DIF_OK(dif_i2c_irq_acknowledge(&i2c0, irq));
      break;
    }

    case kTopEarlgreyPlicPeripheralI2c1: {
      dif_i2c_irq_t irq = (dif_i2c_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopEarlgreyPlicIrqIdI2c1FmtThreshold);
      CHECK(irq == i2c_irq_expected,
            "Incorrect i2c1 IRQ triggered: exp = %d, obs = %d",
            i2c_irq_expected, irq);
      i2c_irq_serviced = irq;

      dif_i2c_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_i2c_irq_get_state(&i2c1, &snapshot));
      CHECK(snapshot == (dif_i2c_irq_state_snapshot_t)(1 << irq),
            "Only i2c1 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_i2c_irq_force(&i2c1, irq, false));
      CHECK_DIF_OK(dif_i2c_irq_acknowledge(&i2c1, irq));
      break;
    }

    case kTopEarlgreyPlicPeripheralI2c2: {
      dif_i2c_irq_t irq = (dif_i2c_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopEarlgreyPlicIrqIdI2c2FmtThreshold);
      CHECK(irq == i2c_irq_expected,
            "Incorrect i2c2 IRQ triggered: exp = %d, obs = %d",
            i2c_irq_expected, irq);
      i2c_irq_serviced = irq;

      dif_i2c_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_i2c_irq_get_state(&i2c2, &snapshot));
      CHECK(snapshot == (dif_i2c_irq_state_snapshot_t)(1 << irq),
            "Only i2c2 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_i2c_irq_force(&i2c2, irq, false));
      CHECK_DIF_OK(dif_i2c_irq_acknowledge(&i2c2, irq));
      break;
    }

    case kTopEarlgreyPlicPeripheralKeymgr: {
      dif_keymgr_irq_t irq = (dif_keymgr_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopEarlgreyPlicIrqIdKeymgrOpDone);
      CHECK(irq == keymgr_irq_expected,
            "Incorrect keymgr IRQ triggered: exp = %d, obs = %d",
            keymgr_irq_expected, irq);
      keymgr_irq_serviced = irq;

      dif_keymgr_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_keymgr_irq_get_state(&keymgr, &snapshot));
      CHECK(snapshot == (dif_keymgr_irq_state_snapshot_t)(1 << irq),
            "Only keymgr IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_keymgr_irq_force(&keymgr, irq, false));
      CHECK_DIF_OK(dif_keymgr_irq_acknowledge(&keymgr, irq));
      break;
    }

    case kTopEarlgreyPlicPeripheralKmac: {
      dif_kmac_irq_t irq = (dif_kmac_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopEarlgreyPlicIrqIdKmacKmacDone);
      CHECK(irq == kmac_irq_expected,
            "Incorrect kmac IRQ triggered: exp = %d, obs = %d",
            kmac_irq_expected, irq);
      kmac_irq_serviced = irq;

      dif_kmac_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_kmac_irq_get_state(&kmac, &snapshot));
      CHECK(snapshot == (dif_kmac_irq_state_snapshot_t)(1 << irq),
            "Only kmac IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_kmac_irq_force(&kmac, irq, false));
      CHECK_DIF_OK(dif_kmac_irq_acknowledge(&kmac, irq));
      break;
    }

    case kTopEarlgreyPlicPeripheralOtbn: {
=======
    case kTopCustomGf12PlicPeripheralOtbn: {
>>>>>>> 4df77fb63 (add generated SoC files)
      dif_otbn_irq_t irq = (dif_otbn_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdOtbnDone);
      CHECK(irq == otbn_irq_expected,
            "Incorrect otbn IRQ triggered: exp = %d, obs = %d",
            otbn_irq_expected, irq);
      otbn_irq_serviced = irq;

      dif_otbn_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_otbn_irq_get_state(&otbn, &snapshot));
      CHECK(snapshot == (dif_otbn_irq_state_snapshot_t)(1 << irq),
            "Only otbn IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_otbn_irq_force(&otbn, irq, false));
      CHECK_DIF_OK(dif_otbn_irq_acknowledge(&otbn, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralOtpCtrl: {
      dif_otp_ctrl_irq_t irq = (dif_otp_ctrl_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdOtpCtrlOtpOperationDone);
      CHECK(irq == otp_ctrl_irq_expected,
            "Incorrect otp_ctrl IRQ triggered: exp = %d, obs = %d",
            otp_ctrl_irq_expected, irq);
      otp_ctrl_irq_serviced = irq;

      dif_otp_ctrl_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_otp_ctrl_irq_get_state(&otp_ctrl, &snapshot));
      CHECK(snapshot == (dif_otp_ctrl_irq_state_snapshot_t)(1 << irq),
            "Only otp_ctrl IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_otp_ctrl_irq_force(&otp_ctrl, irq, false));
      CHECK_DIF_OK(dif_otp_ctrl_irq_acknowledge(&otp_ctrl, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralPattgen: {
      dif_pattgen_irq_t irq = (dif_pattgen_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdPattgenDoneCh0);
      CHECK(irq == pattgen_irq_expected,
            "Incorrect pattgen IRQ triggered: exp = %d, obs = %d",
            pattgen_irq_expected, irq);
      pattgen_irq_serviced = irq;

      dif_pattgen_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_pattgen_irq_get_state(&pattgen, &snapshot));
      CHECK(snapshot == (dif_pattgen_irq_state_snapshot_t)(1 << irq),
            "Only pattgen IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_pattgen_irq_force(&pattgen, irq, false));
      CHECK_DIF_OK(dif_pattgen_irq_acknowledge(&pattgen, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralPwrmgrAon: {
      dif_pwrmgr_irq_t irq = (dif_pwrmgr_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdPwrmgrAonWakeup);
      CHECK(irq == pwrmgr_irq_expected,
            "Incorrect pwrmgr_aon IRQ triggered: exp = %d, obs = %d",
            pwrmgr_irq_expected, irq);
      pwrmgr_irq_serviced = irq;

      dif_pwrmgr_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_pwrmgr_irq_get_state(&pwrmgr_aon, &snapshot));
      CHECK(snapshot == (dif_pwrmgr_irq_state_snapshot_t)(1 << irq),
            "Only pwrmgr_aon IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_pwrmgr_irq_force(&pwrmgr_aon, irq, false));
      CHECK_DIF_OK(dif_pwrmgr_irq_acknowledge(&pwrmgr_aon, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralRvTimer: {
      dif_rv_timer_irq_t irq = (dif_rv_timer_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdRvTimerTimerExpiredHart0Timer0);
      CHECK(irq == rv_timer_irq_expected,
            "Incorrect rv_timer IRQ triggered: exp = %d, obs = %d",
            rv_timer_irq_expected, irq);
      rv_timer_irq_serviced = irq;

      dif_rv_timer_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_rv_timer_irq_get_state(&rv_timer, kHart, &snapshot));
      CHECK(snapshot == (dif_rv_timer_irq_state_snapshot_t)(1 << irq),
            "Only rv_timer IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_rv_timer_irq_force(&rv_timer, irq, false));
      CHECK_DIF_OK(dif_rv_timer_irq_acknowledge(&rv_timer, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralSensorCtrl: {
      dif_sensor_ctrl_irq_t irq = (dif_sensor_ctrl_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdSensorCtrlIoStatusChange);
      CHECK(irq == sensor_ctrl_irq_expected,
            "Incorrect sensor_ctrl IRQ triggered: exp = %d, obs = %d",
            sensor_ctrl_irq_expected, irq);
      sensor_ctrl_irq_serviced = irq;

      dif_sensor_ctrl_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_sensor_ctrl_irq_get_state(&sensor_ctrl, &snapshot));
      CHECK(snapshot == (dif_sensor_ctrl_irq_state_snapshot_t)(1 << irq),
            "Only sensor_ctrl IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_sensor_ctrl_irq_force(&sensor_ctrl, irq, false));
      CHECK_DIF_OK(dif_sensor_ctrl_irq_acknowledge(&sensor_ctrl, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralSpiHost0: {
      dif_spi_host_irq_t irq = (dif_spi_host_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdSpiHost0Error);
      CHECK(irq == spi_host_irq_expected,
            "Incorrect spi_host0 IRQ triggered: exp = %d, obs = %d",
            spi_host_irq_expected, irq);
      spi_host_irq_serviced = irq;

      dif_spi_host_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_spi_host_irq_get_state(&spi_host0, &snapshot));
      CHECK(snapshot == (dif_spi_host_irq_state_snapshot_t)(1 << irq),
            "Only spi_host0 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_spi_host_irq_force(&spi_host0, irq, false));
      CHECK_DIF_OK(dif_spi_host_irq_acknowledge(&spi_host0, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralSysrstCtrlAon: {
      dif_sysrst_ctrl_irq_t irq = (dif_sysrst_ctrl_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdSysrstCtrlAonEventDetected);
      CHECK(irq == sysrst_ctrl_irq_expected,
            "Incorrect sysrst_ctrl_aon IRQ triggered: exp = %d, obs = %d",
            sysrst_ctrl_irq_expected, irq);
      sysrst_ctrl_irq_serviced = irq;

      dif_sysrst_ctrl_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_sysrst_ctrl_irq_get_state(&sysrst_ctrl_aon, &snapshot));
      CHECK(snapshot == (dif_sysrst_ctrl_irq_state_snapshot_t)(1 << irq),
            "Only sysrst_ctrl_aon IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_sysrst_ctrl_irq_force(&sysrst_ctrl_aon, irq, false));
      CHECK_DIF_OK(dif_sysrst_ctrl_irq_acknowledge(&sysrst_ctrl_aon, irq));
      break;
    }

    case kTopCustomGf12PlicPeripheralUart0: {
      dif_uart_irq_t irq = (dif_uart_irq_t)(
          plic_irq_id -
          (dif_rv_plic_irq_id_t)kTopCustomGf12PlicIrqIdUart0TxWatermark);
      CHECK(irq == uart_irq_expected,
            "Incorrect uart0 IRQ triggered: exp = %d, obs = %d",
            uart_irq_expected, irq);
      uart_irq_serviced = irq;

      dif_uart_irq_state_snapshot_t snapshot;
      CHECK_DIF_OK(dif_uart_irq_get_state(&uart0, &snapshot));
      CHECK(snapshot == (dif_uart_irq_state_snapshot_t)(1 << irq),
            "Only uart0 IRQ %d expected to fire. Actual interrupt "
            "status = %x",
            irq, snapshot);

      // TODO: Check Interrupt type then clear INTR_TEST if needed.
      CHECK_DIF_OK(dif_uart_irq_force(&uart0, irq, false));
      CHECK_DIF_OK(dif_uart_irq_acknowledge(&uart0, irq));
      break;
    }

    default:
      LOG_FATAL("ISR is not implemented!");
      test_status_set(kTestStatusFailed);
  }

  // Complete the IRQ at PLIC.
  CHECK_DIF_OK(dif_rv_plic_irq_complete(&plic, kHart, plic_irq_id));
}

/**
 * Initializes the handles to all peripherals.
 */
static void peripherals_init(void) {
  mmio_region_t base_addr;

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_ALERT_HANDLER_BASE_ADDR);
  CHECK_DIF_OK(dif_alert_handler_init(base_addr, &alert_handler));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_AON_TIMER_AON_BASE_ADDR);
  CHECK_DIF_OK(dif_aon_timer_init(base_addr, &aon_timer_aon));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_EDN0_BASE_ADDR);
  CHECK_DIF_OK(dif_edn_init(base_addr, &edn0));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_EDN1_BASE_ADDR);
  CHECK_DIF_OK(dif_edn_init(base_addr, &edn1));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_FLASH_CTRL_CORE_BASE_ADDR);
  CHECK_DIF_OK(dif_flash_ctrl_init(base_addr, &flash_ctrl));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_GPIO_BASE_ADDR);
  CHECK_DIF_OK(dif_gpio_init(base_addr, &gpio));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_I2C0_BASE_ADDR);
  CHECK_DIF_OK(dif_i2c_init(base_addr, &i2c0));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_OTBN_BASE_ADDR);
  CHECK_DIF_OK(dif_otbn_init(base_addr, &otbn));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_OTP_CTRL_CORE_BASE_ADDR);
  CHECK_DIF_OK(dif_otp_ctrl_init(base_addr, &otp_ctrl));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_PATTGEN_BASE_ADDR);
  CHECK_DIF_OK(dif_pattgen_init(base_addr, &pattgen));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_PWRMGR_AON_BASE_ADDR);
  CHECK_DIF_OK(dif_pwrmgr_init(base_addr, &pwrmgr_aon));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_RV_TIMER_BASE_ADDR);
  CHECK_DIF_OK(dif_rv_timer_init(base_addr, &rv_timer));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_SENSOR_CTRL_BASE_ADDR);
  CHECK_DIF_OK(dif_sensor_ctrl_init(base_addr, &sensor_ctrl));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_SPI_HOST0_BASE_ADDR);
  CHECK_DIF_OK(dif_spi_host_init(base_addr, &spi_host0));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_SYSRST_CTRL_AON_BASE_ADDR);
  CHECK_DIF_OK(dif_sysrst_ctrl_init(base_addr, &sysrst_ctrl_aon));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_UART0_BASE_ADDR);
  CHECK_DIF_OK(dif_uart_init(base_addr, &uart0));

  base_addr = mmio_region_from_addr(TOP_CUSTOM_GF12_RV_PLIC_BASE_ADDR);
  CHECK_DIF_OK(dif_rv_plic_init(base_addr, &plic));
}

/**
 * Clears pending IRQs in all peripherals.
 */
static void peripheral_irqs_clear(void) {
  CHECK_DIF_OK(dif_alert_handler_irq_acknowledge_all(&alert_handler));
  CHECK_DIF_OK(dif_aon_timer_irq_acknowledge_all(&aon_timer_aon));
  CHECK_DIF_OK(dif_edn_irq_acknowledge_all(&edn0));
  CHECK_DIF_OK(dif_edn_irq_acknowledge_all(&edn1));
  CHECK_DIF_OK(dif_flash_ctrl_irq_acknowledge_all(&flash_ctrl));
  CHECK_DIF_OK(dif_gpio_irq_acknowledge_all(&gpio));
  CHECK_DIF_OK(dif_i2c_irq_acknowledge_all(&i2c0));
  CHECK_DIF_OK(dif_otbn_irq_acknowledge_all(&otbn));
  CHECK_DIF_OK(dif_otp_ctrl_irq_acknowledge_all(&otp_ctrl));
  CHECK_DIF_OK(dif_pattgen_irq_acknowledge_all(&pattgen));
  CHECK_DIF_OK(dif_pwrmgr_irq_acknowledge_all(&pwrmgr_aon));
  CHECK_DIF_OK(dif_rv_timer_irq_acknowledge_all(&rv_timer, kHart));
  CHECK_DIF_OK(dif_sensor_ctrl_irq_acknowledge_all(&sensor_ctrl));
  CHECK_DIF_OK(dif_spi_host_irq_acknowledge_all(&spi_host0));
  CHECK_DIF_OK(dif_sysrst_ctrl_irq_acknowledge_all(&sysrst_ctrl_aon));
  CHECK_DIF_OK(dif_uart_irq_acknowledge_all(&uart0));
}

/**
 * Enables all IRQs in all peripherals.
 */
static void peripheral_irqs_enable(void) {
  dif_alert_handler_irq_state_snapshot_t alert_handler_irqs =
      (dif_alert_handler_irq_state_snapshot_t)UINT_MAX;
  dif_edn_irq_state_snapshot_t edn_irqs =
      (dif_edn_irq_state_snapshot_t)UINT_MAX;
  dif_flash_ctrl_irq_state_snapshot_t flash_ctrl_irqs =
      (dif_flash_ctrl_irq_state_snapshot_t)UINT_MAX;
  dif_gpio_irq_state_snapshot_t gpio_irqs =
      (dif_gpio_irq_state_snapshot_t)UINT_MAX;
  dif_i2c_irq_state_snapshot_t i2c_irqs =
      (dif_i2c_irq_state_snapshot_t)UINT_MAX;
  dif_otbn_irq_state_snapshot_t otbn_irqs =
      (dif_otbn_irq_state_snapshot_t)UINT_MAX;
  dif_otp_ctrl_irq_state_snapshot_t otp_ctrl_irqs =
      (dif_otp_ctrl_irq_state_snapshot_t)UINT_MAX;
  dif_pattgen_irq_state_snapshot_t pattgen_irqs =
      (dif_pattgen_irq_state_snapshot_t)UINT_MAX;
  dif_pwrmgr_irq_state_snapshot_t pwrmgr_irqs =
      (dif_pwrmgr_irq_state_snapshot_t)UINT_MAX;
  dif_rv_timer_irq_state_snapshot_t rv_timer_irqs =
      (dif_rv_timer_irq_state_snapshot_t)UINT_MAX;
  dif_sensor_ctrl_irq_state_snapshot_t sensor_ctrl_irqs =
      (dif_sensor_ctrl_irq_state_snapshot_t)UINT_MAX;
  dif_spi_host_irq_state_snapshot_t spi_host_irqs =
      (dif_spi_host_irq_state_snapshot_t)UINT_MAX;
  dif_sysrst_ctrl_irq_state_snapshot_t sysrst_ctrl_irqs =
      (dif_sysrst_ctrl_irq_state_snapshot_t)UINT_MAX;
  dif_uart_irq_state_snapshot_t uart_irqs =
      (dif_uart_irq_state_snapshot_t)UINT_MAX;

  CHECK_DIF_OK(
      dif_alert_handler_irq_restore_all(&alert_handler, &alert_handler_irqs));
  CHECK_DIF_OK(
      dif_edn_irq_restore_all(&edn0, &edn_irqs));
  CHECK_DIF_OK(
      dif_edn_irq_restore_all(&edn1, &edn_irqs));
  CHECK_DIF_OK(
      dif_flash_ctrl_irq_restore_all(&flash_ctrl, &flash_ctrl_irqs));
  CHECK_DIF_OK(
      dif_gpio_irq_restore_all(&gpio, &gpio_irqs));
  CHECK_DIF_OK(
      dif_i2c_irq_restore_all(&i2c0, &i2c_irqs));
  CHECK_DIF_OK(
      dif_otbn_irq_restore_all(&otbn, &otbn_irqs));
  CHECK_DIF_OK(
      dif_otp_ctrl_irq_restore_all(&otp_ctrl, &otp_ctrl_irqs));
  CHECK_DIF_OK(
      dif_pattgen_irq_restore_all(&pattgen, &pattgen_irqs));
  CHECK_DIF_OK(
      dif_pwrmgr_irq_restore_all(&pwrmgr_aon, &pwrmgr_irqs));
  CHECK_DIF_OK(
      dif_rv_timer_irq_restore_all(&rv_timer, kHart, &rv_timer_irqs));
  CHECK_DIF_OK(
      dif_sensor_ctrl_irq_restore_all(&sensor_ctrl, &sensor_ctrl_irqs));
  CHECK_DIF_OK(
      dif_spi_host_irq_restore_all(&spi_host0, &spi_host_irqs));
  CHECK_DIF_OK(
      dif_sysrst_ctrl_irq_restore_all(&sysrst_ctrl_aon, &sysrst_ctrl_irqs));
  // lowrisc/opentitan#8656: Skip UART0 in non-DV setups due to interference
  // from the logging facility.
  if (kDeviceType == kDeviceSimDV) {
    CHECK_DIF_OK(
        dif_uart_irq_restore_all(&uart0, &uart_irqs));
  }
}

/**
 * Triggers all IRQs in all peripherals one by one.
 *
 * Walks through all instances of all peripherals and triggers an interrupt one
 * by one, by forcing with the `intr_test` CSR. On trigger, the CPU instantly
 * jumps into the ISR. The main flow of execution thus proceeds to check that
 * the correct IRQ was serviced immediately. The ISR, in turn checks if the
 * expected IRQ from the expected peripheral triggered.
 */
static void peripheral_irqs_trigger(void) {
  peripheral_expected = kTopCustomGf12PlicPeripheralAlertHandler;
  for (dif_alert_handler_irq_t irq = kDifAlertHandlerIrqClassa;
       irq <= kDifAlertHandlerIrqClassd; ++irq) {
    alert_handler_irq_expected = irq;
    LOG_INFO("Triggering alert_handler IRQ %d.", irq);
    CHECK_DIF_OK(dif_alert_handler_irq_force(&alert_handler, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(alert_handler_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from alert_handler is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralAonTimerAon;
  for (dif_aon_timer_irq_t irq = kDifAonTimerIrqWkupTimerExpired;
       irq <= kDifAonTimerIrqWdogTimerBark; ++irq) {
    aon_timer_irq_expected = irq;
    LOG_INFO("Triggering aon_timer_aon IRQ %d.", irq);
    CHECK_DIF_OK(dif_aon_timer_irq_force(&aon_timer_aon, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(aon_timer_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from aon_timer_aon is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralEdn0;
  for (dif_edn_irq_t irq = kDifEdnIrqEdnCmdReqDone;
       irq <= kDifEdnIrqEdnFatalErr; ++irq) {
    edn_irq_expected = irq;
    LOG_INFO("Triggering edn0 IRQ %d.", irq);
    CHECK_DIF_OK(dif_edn_irq_force(&edn0, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(edn_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from edn0 is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralEdn1;
  for (dif_edn_irq_t irq = kDifEdnIrqEdnCmdReqDone;
       irq <= kDifEdnIrqEdnFatalErr; ++irq) {
    edn_irq_expected = irq;
    LOG_INFO("Triggering edn1 IRQ %d.", irq);
    CHECK_DIF_OK(dif_edn_irq_force(&edn1, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(edn_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from edn1 is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralFlashCtrl;
  for (dif_flash_ctrl_irq_t irq = kDifFlashCtrlIrqProgEmpty;
       irq <= kDifFlashCtrlIrqCorrErr; ++irq) {
    flash_ctrl_irq_expected = irq;
    LOG_INFO("Triggering flash_ctrl IRQ %d.", irq);
    CHECK_DIF_OK(dif_flash_ctrl_irq_force(&flash_ctrl, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(flash_ctrl_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from flash_ctrl is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralGpio;
  for (dif_gpio_irq_t irq = kDifGpioIrqGpio0;
       irq <= kDifGpioIrqGpio31; ++irq) {
    gpio_irq_expected = irq;
    LOG_INFO("Triggering gpio IRQ %d.", irq);
    CHECK_DIF_OK(dif_gpio_irq_force(&gpio, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(gpio_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from gpio is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralI2c0;
  for (dif_i2c_irq_t irq = kDifI2cIrqFmtWatermark;
       irq <= kDifI2cIrqHostTimeout; ++irq) {
    i2c_irq_expected = irq;
    LOG_INFO("Triggering i2c0 IRQ %d.", irq);
    CHECK_DIF_OK(dif_i2c_irq_force(&i2c0, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(i2c_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from i2c0 is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralOtbn;
  for (dif_otbn_irq_t irq = kDifOtbnIrqDone;
       irq <= kDifOtbnIrqDone; ++irq) {
    otbn_irq_expected = irq;
    LOG_INFO("Triggering otbn IRQ %d.", irq);
    CHECK_DIF_OK(dif_otbn_irq_force(&otbn, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(otbn_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from otbn is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralOtpCtrl;
  for (dif_otp_ctrl_irq_t irq = kDifOtpCtrlIrqOtpOperationDone;
       irq <= kDifOtpCtrlIrqOtpError; ++irq) {
    otp_ctrl_irq_expected = irq;
    LOG_INFO("Triggering otp_ctrl IRQ %d.", irq);
    CHECK_DIF_OK(dif_otp_ctrl_irq_force(&otp_ctrl, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(otp_ctrl_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from otp_ctrl is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralPattgen;
  for (dif_pattgen_irq_t irq = kDifPattgenIrqDoneCh0;
       irq <= kDifPattgenIrqDoneCh1; ++irq) {
    pattgen_irq_expected = irq;
    LOG_INFO("Triggering pattgen IRQ %d.", irq);
    CHECK_DIF_OK(dif_pattgen_irq_force(&pattgen, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(pattgen_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from pattgen is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralPwrmgrAon;
  for (dif_pwrmgr_irq_t irq = kDifPwrmgrIrqWakeup;
       irq <= kDifPwrmgrIrqWakeup; ++irq) {
    pwrmgr_irq_expected = irq;
    LOG_INFO("Triggering pwrmgr_aon IRQ %d.", irq);
    CHECK_DIF_OK(dif_pwrmgr_irq_force(&pwrmgr_aon, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(pwrmgr_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from pwrmgr_aon is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralRvTimer;
  for (dif_rv_timer_irq_t irq = kDifRvTimerIrqTimerExpiredHart0Timer0;
       irq <= kDifRvTimerIrqTimerExpiredHart0Timer0; ++irq) {
    rv_timer_irq_expected = irq;
    LOG_INFO("Triggering rv_timer IRQ %d.", irq);
    CHECK_DIF_OK(dif_rv_timer_irq_force(&rv_timer, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(rv_timer_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from rv_timer is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralSensorCtrl;
  for (dif_sensor_ctrl_irq_t irq = kDifSensorCtrlIrqIoStatusChange;
       irq <= kDifSensorCtrlIrqInitStatusChange; ++irq) {
    sensor_ctrl_irq_expected = irq;
    LOG_INFO("Triggering sensor_ctrl IRQ %d.", irq);
    CHECK_DIF_OK(dif_sensor_ctrl_irq_force(&sensor_ctrl, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(sensor_ctrl_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from sensor_ctrl is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralSpiHost0;
  for (dif_spi_host_irq_t irq = kDifSpiHostIrqError;
       irq <= kDifSpiHostIrqSpiEvent; ++irq) {
    spi_host_irq_expected = irq;
    LOG_INFO("Triggering spi_host0 IRQ %d.", irq);
    CHECK_DIF_OK(dif_spi_host_irq_force(&spi_host0, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(spi_host_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from spi_host0 is serviced.", irq);
  }

  peripheral_expected = kTopCustomGf12PlicPeripheralSysrstCtrlAon;
  for (dif_sysrst_ctrl_irq_t irq = kDifSysrstCtrlIrqEventDetected;
       irq <= kDifSysrstCtrlIrqEventDetected; ++irq) {
    sysrst_ctrl_irq_expected = irq;
    LOG_INFO("Triggering sysrst_ctrl_aon IRQ %d.", irq);
    CHECK_DIF_OK(dif_sysrst_ctrl_irq_force(&sysrst_ctrl_aon, irq, true));

    // This avoids a race where *irq_serviced is read before
    // entering the ISR.
    IBEX_SPIN_FOR(sysrst_ctrl_irq_serviced == irq, 1);
    LOG_INFO("IRQ %d from sysrst_ctrl_aon is serviced.", irq);
  }

  // lowrisc/opentitan#8656: Skip UART0 in non-DV setups due to interference
  // from the logging facility.
  if (kDeviceType == kDeviceSimDV) {
    peripheral_expected = kTopCustomGf12PlicPeripheralUart0;
    for (dif_uart_irq_t irq = kDifUartIrqTxWatermark;
         irq <= kDifUartIrqRxParityErr; ++irq) {
      uart_irq_expected = irq;
      LOG_INFO("Triggering uart0 IRQ %d.", irq);
      CHECK_DIF_OK(dif_uart_irq_force(&uart0, irq, true));

      // This avoids a race where *irq_serviced is read before
      // entering the ISR.
      IBEX_SPIN_FOR(uart_irq_serviced == irq, 1);
      LOG_INFO("IRQ %d from uart0 is serviced.", irq);
    }
  }
}

/**
 * Checks that the target ID corresponds to the ID of the hart on which
 * this test is executed on. This check is meant to be used in a
 * single-hart system only.
 */
static void check_hart_id(uint32_t exp_hart_id) {
  uint32_t act_hart_id;
  CSR_READ(CSR_REG_MHARTID, &act_hart_id);
  CHECK(act_hart_id == exp_hart_id, "Processor has unexpected HART ID.");
}

OTTF_DEFINE_TEST_CONFIG();

bool test_main(void) {
  irq_global_ctrl(true);
  irq_external_ctrl(true);
  peripherals_init();
  check_hart_id((uint32_t)kHart);
  rv_plic_testutils_irq_range_enable(
      &plic, kHart, kTopCustom_gf12PlicIrqIdNone + 1, kTopCustom_gf12PlicIrqIdLast);
  peripheral_irqs_clear();
  peripheral_irqs_enable();
  peripheral_irqs_trigger();
  return true;
}

// clang-format on
