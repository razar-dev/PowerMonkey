/*******************************************************************************
*  ______                            ______                 _
* (_____ \                          |  ___ \               | |
*  _____) )___   _ _ _   ____   ___ | | _ | |  ___   ____  | |  _  ____  _   _
* |  ____// _ \ | | | | / _  ) / __)| || || | / _ \ |  _ \ | | / )/ _  )| | | |
* | |    | |_| || | | |( (/ / | |   | || || || |_| || | | || |< (( (/ / | |_| |
* |_|     \___/  \____| \____)|_|   |_||_||_| \___/ |_| |_||_| \_)\____) \__  |
*                                                                       (____/
* Copyright (C) 2021 Ivan Dimkovic. All rights reserved.
*
* All trademarks, logos and brand names are the property of their respective
* owners. All company, product and service names used are for identification
* purposes only. Use of these names, trademarks and brands does not imply
* endorsement.
*
* SPDX-License-Identifier: Apache-2.0
* Full text of license (LICENSE-2.0.txt) is available in project directory
*
* WARNING: This code is a proof of concept for educative purposes. It can
* modify internal computer configuration parameters and cause malfunctions or
* even permanent damage. It has been tested on a limited range of target CPUs
* and has minimal built-in failsafe mechanisms, thus making it unsuitable for
* recommended use by users not skilled in the art. Use it at your own risk.
*
*******************************************************************************/

#pragma once

/*******************************************************************************
 * Values initialized in InitializeMMIO and available to other modules
 ******************************************************************************/

extern UINT32 gPCIeBaseAddr;
extern UINT32 gMCHBAR;

/*******************************************************************************
 * InitializeMMIO
 ******************************************************************************/

void InitializeMMIO();

/*******************************************************************************
 * pm_wrmsr64
 ******************************************************************************/

UINT32 pm_wrmsr64(const UINT32 msr_idx, const UINT64 value);

/*******************************************************************************
 * pm_rdmsr64
 ******************************************************************************/

UINT64 pm_rdmsr64(const UINT32 msr_idx);

/*******************************************************************************
 * pm_mmio_or32
 ******************************************************************************/

UINT32 pm_mmio_or32(const UINT32 addr, const UINT32 value);

/*******************************************************************************
 * pm_mmio_write32
 ******************************************************************************/

UINT32 pm_mmio_write32(const UINT32 addr, const UINT32 value);

/*******************************************************************************
 * pm_mmio_read32
 ******************************************************************************/

UINT32 pm_mmio_read32(const UINT32 addr);