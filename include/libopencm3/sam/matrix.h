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

#ifndef SAM3X_MATRIX_H
#define SAM3X_MATRIX_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* --- Bus Matrix (MATRIX) registers ---------------------------- */
#define MATRIX_MCFG0			MMIO32(MATRIX_BASE + 0x0000)
#define MATRIX_MCFG1			MMIO32(MATRIX_BASE + 0x0004)
#define MATRIX_MCFG2			MMIO32(MATRIX_BASE + 0x0008)
/* 0x000C:0x003C - Reserved */
#define MATRIX_SCFG0			MMIO32(MATRIX_BASE + 0x0040)
#define MATRIX_SCFG1			MMIO32(MATRIX_BASE + 0x0044)
#define MATRIX_SCFG2			MMIO32(MATRIX_BASE + 0x0048)
#define MATRIX_SCFG3			MMIO32(MATRIX_BASE + 0x004C)
/* 0x0050:0x007C - Reserved */
#define MATRIX_PRAS0			MMIO32(MATRIX_BASE + 0x0080)
/* 0x0084 - Reserved */
#define MATRIX_PRAS1			MMIO32(MATRIX_BASE + 0x0088)
/* 0x008C - Reserved */
#define MATRIX_PRAS2			MMIO32(MATRIX_BASE + 0x0090)
/* 0x0094 - Reserved */
#define MATRIX_PRAS3			MMIO32(MATRIX_BASE + 0x0098)
/* 0x009C:0x0110 - Reserved */
#define CCFG_SYSIO			MMIO32(MATRIX_BASE + 0x0114)
/* 0x0118:0x011C - Reserved */
/* 0x0120:0x01E0 - Reserved */
#define MATRIX_WPMR			MMIO32(MATRIX_BASE + 0x01E4)
#define MATRIX_WPSR			MMIO32(MATRIX_BASE + 0x01E8)
/* 0x01EC:0x01FC - Reserved */

#endif
