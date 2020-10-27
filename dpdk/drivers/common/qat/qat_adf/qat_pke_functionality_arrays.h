/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2019 Intel Corporation
 */

#ifndef _QAT_PKE_FUNCTIONALITY_ARRAYS_H_
#define _QAT_PKE_FUNCTIONALITY_ARRAYS_H_

#include "icp_qat_fw_mmp_ids.h"

/*
 * Modular exponentiation functionality IDs
 */
static const uint32_t MOD_EXP_SIZE[][2] = {
		{ 512,	MATHS_MODEXP_L512 },
		{ 1024, MATHS_MODEXP_L1024 },
		{ 1536,	MATHS_MODEXP_L1536 },
		{ 2048, MATHS_MODEXP_L2048 },
		{ 2560, MATHS_MODEXP_L2560 },
		{ 3072, MATHS_MODEXP_L3072 },
		{ 3584, MATHS_MODEXP_L3584 },
		{ 4096, MATHS_MODEXP_L4096 }
};

static const uint32_t MOD_INV_IDS_ODD[][2] = {
		{ 128,	MATHS_MODINV_ODD_L128 },
		{ 192,	MATHS_MODINV_ODD_L192 },
		{ 256,  MATHS_MODINV_ODD_L256 },
		{ 384,	MATHS_MODINV_ODD_L384 },
		{ 512,	MATHS_MODINV_ODD_L512 },
		{ 768,	MATHS_MODINV_ODD_L768 },
		{ 1024, MATHS_MODINV_ODD_L1024 },
		{ 1536, MATHS_MODINV_ODD_L1536 },
		{ 2048, MATHS_MODINV_ODD_L2048 },
		{ 3072, MATHS_MODINV_ODD_L3072 },
		{ 4096, MATHS_MODINV_ODD_L4096 },
};

static const uint32_t MOD_INV_IDS_EVEN[][2] = {
		{ 128,	MATHS_MODINV_EVEN_L128 },
		{ 192,	MATHS_MODINV_EVEN_L192 },
		{ 256,	MATHS_MODINV_EVEN_L256 },
		{ 384,	MATHS_MODINV_EVEN_L384 },
		{ 512,	MATHS_MODINV_EVEN_L512 },
		{ 768,	MATHS_MODINV_EVEN_L768 },
		{ 1024, MATHS_MODINV_EVEN_L1024 },
		{ 1536, MATHS_MODINV_EVEN_L1536 },
		{ 2048, MATHS_MODINV_EVEN_L2048 },
		{ 3072, MATHS_MODINV_EVEN_L3072 },
		{ 4096, MATHS_MODINV_EVEN_L4096 },
};

static const uint32_t RSA_ENC_IDS[][2] = {
		{ 512,	PKE_RSA_EP_512 },
		{ 1024,	PKE_RSA_EP_1024 },
		{ 1536,	PKE_RSA_EP_1536 },
		{ 2048,	PKE_RSA_EP_2048 },
		{ 3072,	PKE_RSA_EP_3072 },
		{ 4096,	PKE_RSA_EP_4096 },
};

static const uint32_t RSA_DEC_IDS[][2] = {
		{ 512,	PKE_RSA_DP1_512 },
		{ 1024,	PKE_RSA_DP1_1024 },
		{ 1536,	PKE_RSA_DP1_1536 },
		{ 2048,	PKE_RSA_DP1_2048 },
		{ 3072,	PKE_RSA_DP1_3072 },
		{ 4096,	PKE_RSA_DP1_4096 },
};

static const uint32_t RSA_DEC_CRT_IDS[][2] = {
		{ 512,	PKE_RSA_DP2_512 },
		{ 1024,	PKE_RSA_DP2_1024 },
		{ 1536,	PKE_RSA_DP2_1536 },
		{ 2048,	PKE_RSA_DP2_2048 },
		{ 3072,	PKE_RSA_DP2_3072 },
		{ 4096,	PKE_RSA_DP2_4096 },
};

#endif