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

#ifndef SAM3X_TWI_H
#define SAM3X_TWI_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

#define TWI0		TWI0_BASE
#define TWI1		TWI1_BASE

/* --- Two-wire Interface (TWI) registers ---------------------------- */
#define TWI_CR(x)			MMIO32((x) + 0x00)
#define TWI_MMR(x)			MMIO32((x) + 0x04)
#define TWI_SMR(x)			MMIO32((x) + 0x08)
#define TWI_IADR(x)			MMIO32((x) + 0x0C)
#define TWI_CWGR(x)			MMIO32((x) + 0x10)
/* 0x14:0x1C - Reserved */
#define TWI_SR(x)			MMIO32((x) + 0x20)
#define TWI_IER(x)			MMIO32((x) + 0x24)
#define TWI_IDR(x)			MMIO32((x) + 0x28)
#define TWI_IMR(x)			MMIO32((x) + 0x2C)
#define TWI_RHR(x)			MMIO32((x) + 0x30)
#define TWI_THR(x)			MMIO32((x) + 0x34)

/* TWI Control Register (TWI_CR) */
/* Bits [31:8] - Reserved */
#define TWI_CR_SWRST			(0x01 << 7)
#define TWI_CR_QUICK			(0x01 << 6)
#define TWI_CR_SVDIS			(0x01 << 5)
#define TWI_CR_SVEN			(0x01 << 4)
#define TWI_CR_MSDIS			(0x01 << 3)
#define TWI_CR_MSEN			(0x01 << 2)
#define TWI_CR_STOP			(0x01 << 1)
#define TWI_CR_START			(0x01 << 0)

/* TWI Master Mode Register (TWI_MMR) */
/* Bits [31:23] - Reserved */
#define TWI_MMR_DADR_MASK		(0x7F << 16)
/* Bits [15:13] - Reserved */
#define TWI_MMR_MREAD			(0x01 << 12)
/* Bits [11:10] - Reserved */
#define TWI_MMR_IADRSZ_NONE		(0x00 << 8)
#define TWI_MMR_IADRSZ_1_BYTE		(0x01 << 8)
#define TWI_MMR_IADRSZ_2_BYTE		(0x02 << 8)
#define TWI_MMR_IADRSZ_3_BYTE		(0x03 << 8)
#define TWI_MMR_IADRSZ_MASK		(0x03 << 8)
/* Bits [7:0] - Reserved */

/* TWI Slave Mode Register (TWI_SMR) */
/* Bits [31:23] - Reserved */
#define TWI_SMR_SADR_MASK		(0x7F << 16)
/* Bits [15:0] - Reserved */

/* TWI Status Register (TWI_SR) */
/* Bits [31:16] - Reserved */
#define TWI_SR_TXBUFE			(0x01 << 15)
#define TWI_SR_RXBUFF			(0x01 << 14)
#define TWI_SR_ENDTX			(0x01 << 13)
#define TWI_SR_ENDRX			(0x01 << 12)
#define TWI_SR_EOSACC			(0x01 << 11)
#define TWI_SR_SCLWS			(0x01 << 10)
#define TWI_SR_ARBLST			(0x01 << 9)
#define TWI_SR_NACK			(0x01 << 8)
/* Bit [7] - Reserved */
#define TWI_SR_OVRE			(0x01 << 6)
#define TWI_SR_GACC			(0x01 << 5)
#define TWI_SR_SVACC			(0x01 << 4)
#define TWI_SR_SVREAD			(0x01 << 3)
#define TWI_SR_TXRDY			(0x01 << 2)
#define TWI_SR_RXRDY			(0x01 << 1)
#define TWI_SR_TXCOMP			(0x01 << 0)

#endif
