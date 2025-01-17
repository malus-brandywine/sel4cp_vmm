/*
 * Copyright 2023, UNSW
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

// @ivanv, where do these come from?
#define HSR_EXCEPTION_CLASS_SHIFT   (26)
#define HSR_EXCEPTION_CLASS_MASK    (((uint32_t)HSR_MAX_EXCEPTION) << HSR_EXCEPTION_CLASS_SHIFT)
#define HSR_EXCEPTION_CLASS(hsr)    (((hsr) & HSR_EXCEPTION_CLASS_MASK) >> HSR_EXCEPTION_CLASS_SHIFT)

#define HSR_SYNDROME_VALID         (1 << 24)
#define HSR_IS_SYNDROME_VALID(hsr) ((hsr) & HSR_SYNDROME_VALID)
#define HSR_SYNDROME_WIDTH(x)      (((x) >> 22) & 0x3)
#define HSR_SYNDROME_RT(x)         (((x) >> 16) & 0x1f)

/* HSR Exception Value */
#define HSR_UNKNOWN_EXCEPTION       (0x0)
#define HSR_WFx_EXCEPTION           (0x1)
#define HSR_CP15_32_EXCEPTION       (0x3)
#define HSR_CP15_64_EXCEPTION       (0x4)
#define HSR_CP14_32_EXCEPTION       (0x5)
#define HSR_CP14_LC_32_EXCEPTION    (0x6)
#define HSR_SIMD_EXCEPTION          (0x7)
#define HSR_CP10_EXCEPTION          (0x8)
#define HSR_CP14_EXCEPTION          (0xC)
#define HSR_ILLEGAL_EXCEPTION       (0xE)
#define HSR_SVC_32_EXCEPTION        (0x11)
#define HSR_HVC_32_EXCEPTION        (0x12)
#define HSR_SMC_32_EXCEPTION        (0x13)
#define HSR_SVC_64_EXCEPTION        (0x15)
#define HSR_HVC_64_EXCEPTION        (0x16)
#define HSR_SMC_64_EXCEPTION        (0x17)
#define HSR_SYSREG_64_EXCEPTION     (0x18)
#define HSR_IMPL_DEF_EXCEPTION      (0x1f)
#define HSR_IABT_LOW_EXCEPTION      (0x20)
#define HSR_IABT_CURR_EXCEPTION     (0x21)
#define HSR_PC_ALIGN_EXCEPTION      (0x22)
#define HSR_DABT_LOW_EXCEPTION      (0x24)
#define HSR_DABT_CUR_EXCEPTION      (0x25)
#define HSR_SP_ALIGN_EXCEPTION      (0x26)
#define HSR_FP32_EXCEPTION          (0x28)
#define HSR_FP64_EXCEPTION          (0x2C)
#define HSR_SERROR_EXCEPTION        (0x2F)
#define HSR_BRK_LOW_EXCEPTION       (0x30)
#define HSR_BRK_CUR_EXCEPTION       (0x31)
#define HSR_SWSTEP_LOW_EXCEPTION    (0x32)
#define HSR_SWSTEP_CUR_EXCEPTION    (0x33)
#define HSR_WATCHPT_LOW_EXCEPTION   (0x34)
#define HSR_WATCHPT_CUR_EXCEPTION   (0x35)
#define HSR_SWBRK_32_EXCEPTION      (0x38)
#define HSW_VECTOR_32_EXCEPTION     (0x3a)
#define HSR_SWBRK_64_EXCEPTION      (0x3c)
/* Remaining values (0x3d - 0x3f) are reserved */
#define HSR_MAX_EXCEPTION           (0x3f)
