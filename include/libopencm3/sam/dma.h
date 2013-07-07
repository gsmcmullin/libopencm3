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

#ifndef SAM3X_DMA_H
#define SAM3X_DMA_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* --- DMA registers ----------------------------------------------------- */

#define DMA_RPR(PERIPH)			MMIO32((PERIPH) + 0x0100)
#define DMA_RCR(PERIPH)			MMIO32((PERIPH) + 0x0104)
#define DMA_TPR(PERIPH)			MMIO32((PERIPH) + 0x0108)
#define DMA_TCR(PERIPH)			MMIO32((PERIPH) + 0x010C)
#define DMA_RNPR(PERIPH)		MMIO32((PERIPH) + 0x0110)
#define DMA_RNCR(PERIPH)		MMIO32((PERIPH) + 0x0114)
#define DMA_TNPR(PERIPH)		MMIO32((PERIPH) + 0x0118)
#define DMA_TNCR(PERIPH)		MMIO32((PERIPH) + 0x011C)
#define DMA_PTCR(PERIPH)		MMIO32((PERIPH) + 0x0120)
#define DMA_PTSR(PERIPH)		MMIO32((PERIPH) + 0x0124)

/* Peripheral Transfer Control Register (DMA_PTCR) */
/* Bits [31:10] - Reserved */
#define DMA_PTCR_TXTDIS			(0x01 << 9)
#define DMA_PTCR_TXTEN			(0x01 << 8)
/* Bits [7:2] - Reserved */
#define DMA_PTCR_RXTDIS			(0x01 << 1)
#define DMA_PTCR_RXTEN			(0x01 << 0)


#endif

