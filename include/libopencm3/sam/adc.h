/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Gareth McMullin <gareth@blacksphere.co.nz>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SAM3X_ADC_H
#define SAM3X_ADC_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* --- ADC registers ----------------------------------------------------- */

#define ADC_CR				MMIO32(ADC_BASE + 0x0000)
#define ADC_MR				MMIO32(ADC_BASE + 0x0004)
#define ADC_SEQR1			MMIO32(ADC_BASE + 0x0008)
#define ADC_SEQR2			MMIO32(ADC_BASE + 0x000C)
#define ADC_CHER			MMIO32(ADC_BASE + 0x0010)
#define ADC_CHDR			MMIO32(ADC_BASE + 0x0014)
#define ADC_CHSR			MMIO32(ADC_BASE + 0x0018)
/* 0x001C - Reserved */
#define ADC_LCDR			MMIO32(ADC_BASE + 0x0020)
#define ADC_IER				MMIO32(ADC_BASE + 0x0024)
#define ADC_IDR				MMIO32(ADC_BASE + 0x0028)
#define ADC_IMR				MMIO32(ADC_BASE + 0x002C)
#define ADC_ISR				MMIO32(ADC_BASE + 0x0030)
/* 0x0034-0x0038 - Reserved */
#define ADC_OVER			MMIO32(ADC_BASE + 0x003C)
#define ADC_EMR				MMIO32(ADC_BASE + 0x0040)
#define ADC_CWR				MMIO32(ADC_BASE + 0x0044)
/* 0x0048-0x004C - Undocumented */
#define ADC_CDR(ch)			MMIO32(ADC_BASE + 0x0050+(ch*4))
/* 0x0090-0x00E0 - Reserved */
#define ADC_WPMR			MMIO32(ADC_BASE + 0x00E4)
#define ADC_WPSR			MMIO32(ADC_BASE + 0x00E8)
/* 0x00E0-0x00FC - Reserved */

/* ADC Control Register (ADC_CR) */
/* Bit [31:2] - Reserved */
#define ADC_CR_START			(0x01 << 1)
#define ADC_CR_SWRST			(0x01 << 0)

/* ADC Mode Register (ADC_MR) */
#define ADC_MR_USEQ			(0x01 << 31)
/* Bit [30:28] - Reserved */
#define ADC_MR_TRACKTIM_MASK		(0x0F << 24)
/* Bit [23:20] - Reserved */
#define ADC_MR_STARTUP_MASK		(0x0F << 16)
#define ADC_MR_PRESCAL_MASK		(0xFF << 8)
#define ADC_MR_FREERUN			(0x01 << 7)
#define ADC_MR_FWUP			(0x01 << 6)
#define ADC_MR_SLEEP			(0x01 << 5)
#define ADC_MR_LOWRES			(0x01 << 4)
#define ADC_MR_TRGSEL_MASK		(0x07 << 1)
#define ADC_MR_TRGEN			(0x01 << 0)

/* ADC Interrupt Status Register (ADC_ISR) */
/* Bit [31:29] - Reserved */
#define ADC_ISR_RXBUFF			(0x01 << 28)
#define ADC_ISR_ENDRX			(0x01 << 27)
#define ADC_ISR_COMPE			(0x01 << 26)
#define ADC_ISR_GOVRE			(0x01 << 25)
#define ADC_ISR_DRDY			(0x01 << 24)
/* Bit [23:16] - Reserved */
/* Bit [15:0] - EOC<bit-number> */

#endif

