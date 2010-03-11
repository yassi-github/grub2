/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2010  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GRUB_LOONGSON_CPU_HEADER
#define GRUB_LOONGSON_CPU_HEADER	1

#define GRUB_CPU_LOONGSON_COP0_CACHE_CONFIG $16
#define GRUB_CPU_LOONGSON_COP0_CACHE_CONFIG_ILINESIZE 0x10
#define GRUB_CPU_LOONGSON_COP0_CACHE_CONFIG_DLINESIZE 0x8
#define GRUB_CPU_LOONGSON_COP0_CACHE_DSIZE_SHIFT 6
#define GRUB_CPU_LOONGSON_COP0_CACHE_ISIZE_SHIFT 9
#define GRUB_CPU_LOONGSON_COP0_CACHE_SIZE_MASK  0x7
#define GRUB_CPU_LOONGSON_COP0_CACHE_SIZE_OFFSET 12

#define GRUB_CPU_LOONGSON_COP0_I_INDEX_INVALIDATE 0
#define GRUB_CPU_LOONGSON_COP0_D_INDEX_TAG_STORE  9
#define GRUB_CPU_LOONGSON_COP0_S_INDEX_TAG_STORE  11

#define GRUB_CPU_LOONGSON_COP0_I_INDEX_BIT_OFFSET 5
#define GRUB_CPU_LOONGSON_COP0_D_INDEX_BIT_OFFSET 5
#define GRUB_CPU_LOONGSON_COP0_S_INDEX_BIT_OFFSET 5

#define GRUB_CPU_LOONGSON_CACHE_ACCELERATED 7
#define GRUB_CPU_LOONGSON_CACHE_UNCACHED 2
#define GRUB_CPU_LOONGSON_CACHE_CACHED 3
#define GRUB_CPU_LOONGSON_CACHE_TYPE_MASK 7
#define GRUB_CPU_LOONGSON_CACHE_LINE_SIZE_LOG_SMALL 4
#define GRUB_CPU_LOONGSON_CACHE_LINE_SIZE_LOG_BIG 5
#define GRUB_CPU_LOONGSON_CACHE_LINE_SIZE_SMALL 16
#define GRUB_CPU_LOONGSON_CACHE_LINE_SIZE_BIG 32

#define GRUB_CPU_LOONGSON_I_CACHE_LOG_WAYS 2
#define GRUB_CPU_LOONGSON_D_CACHE_LOG_WAYS 2
#define GRUB_CPU_LOONGSON_S_CACHE_LOG_WAYS 2

/* Fixme: determine dynamically.  */
#define GRUB_CPU_LOONGSON_SECONDARY_CACHE_LOG_SIZE 19

#define GRUB_CPU_LOONGSON_COP0_CACHE_TAGLO $28
#define GRUB_CPU_LOONGSON_COP0_CACHE_TAGHI $29

#endif
