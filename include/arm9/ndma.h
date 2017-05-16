/**
 * 2017
 * profi200
 */

#pragma once

#include <tgmath.h>
#include "mem_map.h"
#include "types.h"


#define NDMA_REGS_BASE           (IO_MEM_ARM9_ONLY + 0x2000)
#define REG_NDMA_GLOBAL_CNT      *((vu32*)(NDMA_REGS_BASE + 0x00))

#define REG_NDMA0_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x04))
#define REG_NDMA0_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x08))
#define REG_NDMA0_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x0C))
#define REG_NDMA0_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x10))
#define REG_NDMA0_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0x14))
#define REG_NDMA0_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0x18))
#define REG_NDMA0_CNT            *((vu32*)(NDMA_REGS_BASE + 0x1C))

#define REG_NDMA1_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x20))
#define REG_NDMA1_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x24))
#define REG_NDMA1_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x28))
#define REG_NDMA1_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x2C))
#define REG_NDMA1_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0x30))
#define REG_NDMA1_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0x34))
#define REG_NDMA1_CNT            *((vu32*)(NDMA_REGS_BASE + 0x38))

#define REG_NDMA2_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x3C))
#define REG_NDMA2_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x40))
#define REG_NDMA2_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x44))
#define REG_NDMA2_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x48))
#define REG_NDMA2_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0x4C))
#define REG_NDMA2_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0x50))
#define REG_NDMA2_CNT            *((vu32*)(NDMA_REGS_BASE + 0x54))

#define REG_NDMA3_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x58))
#define REG_NDMA3_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x5C))
#define REG_NDMA3_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x60))
#define REG_NDMA3_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x64))
#define REG_NDMA3_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0x68))
#define REG_NDMA3_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0x6C))
#define REG_NDMA3_CNT            *((vu32*)(NDMA_REGS_BASE + 0x70))

#define REG_NDMA4_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x74))
#define REG_NDMA4_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x78))
#define REG_NDMA4_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x7C))
#define REG_NDMA4_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x80))
#define REG_NDMA4_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0x84))
#define REG_NDMA4_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0x88))
#define REG_NDMA4_CNT            *((vu32*)(NDMA_REGS_BASE + 0x8C))

#define REG_NDMA5_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x90))
#define REG_NDMA5_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0x94))
#define REG_NDMA5_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0x98))
#define REG_NDMA5_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0x9C))
#define REG_NDMA5_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0xA0))
#define REG_NDMA5_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0xA4))
#define REG_NDMA5_CNT            *((vu32*)(NDMA_REGS_BASE + 0xA8))

#define REG_NDMA6_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0xAC))
#define REG_NDMA6_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0xB0))
#define REG_NDMA6_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0xB4))
#define REG_NDMA6_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0xB8))
#define REG_NDMA6_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0xBC))
#define REG_NDMA6_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0xC0))
#define REG_NDMA6_CNT            *((vu32*)(NDMA_REGS_BASE + 0xC4))

#define REG_NDMA7_SRC_ADDR       *((vu32*)(NDMA_REGS_BASE + 0xC8))
#define REG_NDMA7_DST_ADDR       *((vu32*)(NDMA_REGS_BASE + 0xCC))
#define REG_NDMA7_TRANSFER_CNT   *((vu32*)(NDMA_REGS_BASE + 0xD0))
#define REG_NDMA7_WRITE_CNT      *((vu32*)(NDMA_REGS_BASE + 0xD4))
#define REG_NDMA7_BLOCK_CNT      *((vu32*)(NDMA_REGS_BASE + 0xD8))
#define REG_NDMA7_FILL_DATA      *((vu32*)(NDMA_REGS_BASE + 0xDC))
#define REG_NDMA7_CNT            *((vu32*)(NDMA_REGS_BASE + 0xE0))

#define REG_NDMA_SRC_ADDR(n)     *((vu32*)(NDMA_REGS_BASE + 0x04 + (n * 28)))
#define REG_NDMA_DST_ADDR(n)     *((vu32*)(NDMA_REGS_BASE + 0x08 + (n * 28)))
#define REG_NDMA_TRANSFER_CNT(n) *((vu32*)(NDMA_REGS_BASE + 0x0C + (n * 28)))
#define REG_NDMA_WRITE_CNT(n)    *((vu32*)(NDMA_REGS_BASE + 0x10 + (n * 28)))
#define REG_NDMA_BLOCK_CNT(n)    *((vu32*)(NDMA_REGS_BASE + 0x14 + (n * 28)))
#define REG_NDMA_FILL_DATA(n)    *((vu32*)(NDMA_REGS_BASE + 0x18 + (n * 28)))
#define REG_NDMA_CNT(n)          *((vu32*)(NDMA_REGS_BASE + 0x1C + (n * 28)))


// REG_NDMA_GLOBAL_CNT
#define NDMA_ROUND_ROBIN(n)    (1u<<31 | ((u32)log2(n) + 1)<<16 | 1u) // n = number of CPU cycles
#define NDMA_HIGHEST_PRIO      (1u)

// REG_NDMA_BLOCK_CNT
#define NDMA_BLOCK_SYS_FREQ    (0u)

// REG_NDMA_CNT
#define NDMA_DST_UPDATE_INC    (0u)
#define NDMA_DST_UPDATE_DEC    (1u<<10)
#define NDMA_DST_UPDATE_FIXED  (2u<<10)
#define NDMA_DST_ADDR_RELOAD   (1u<<12)
#define NDMA_SRC_UPDATE_INC    (0u)
#define NDMA_SRC_UPDATE_DEC    (1u<<13)
#define NDMA_SRC_UPDATE_FIXED  (2u<<13)
#define NDMA_SRC_UPDATE_FILL   (3u<<13)
#define NDMA_SRC_ADDR_RELOAD   (1u<<15)
#define NDMA_STARTUP_MODE(n)   (n<<24)
// The block length is 2^n words (Example: 2^15 = 32768 words = 0x20000 bytes)
#define NDMA_BURST_SIZE(n)     ((u32)log2(n)<<16)
#define NDMA_REPEATING_MODE    (1u<<29)
#define NDMA_IRQ_ENABLE        (1u<<30)
#define NDMA_ENABLE            (1u<<31)


 enum
 {
 	NDMA_STARTUP_UNK_0     = (0<<24),
 	NDMA_STARTUP_UNK_1     = (1<<24),
 	NDMA_STARTUP_UNK_2     = (2<<24),
 	NDMA_STARTUP_UNK_3     = (3<<24),
 	NDMA_STARTUP_UNK_4     = (4<<24),
 	NDMA_STARTUP_UNK_5     = (5<<24),
 	NDMA_STARTUP_UNK_6     = (6<<24),
 	NDMA_STARTUP_UNK_7     = (7<<24),
 	NDMA_STARTUP_AES_IN    = (8<<24),  // AES write fifo
 	NDMA_STARTUP_AES_OUT   = (9<<24),  // AES read fifo
 	NDMA_STARTUP_UNK_10    = (10<<24),
 	NDMA_STARTUP_UNK_11    = (11<<24),
 	NDMA_STARTUP_UNK_12    = (12<<24),
 	NDMA_STARTUP_UNK_13    = (13<<24),
 	NDMA_STARTUP_UNK_14    = (14<<24),
 	NDMA_STARTUP_UNK_15    = (15<<24),
 	NDMA_STARTUP_IMMEDIATE = (16<<24)
 };



/**
 * @brief      Initializes all NDMA channels.
 */
void NDMA_init(void);

/**
 * @brief      Asynchronous copying of data using the NDMA engine.
 *
 * @param      dest    Pointer to destination memory. Must be 4 bytes aligned.
 * @param      source  Pointer to source data. Must be 4 bytes aligned.
 * @param[in]  num     The size of the data. Must be a multiple of 4.
 */
void NDMA_copyAsync(u32 *dest, const u32 *source, u32 num);

/**
 * @brief      Copies data using the NDMA engine.
 *
 * @param      dest    Pointer to destination memory. Must be 4 bytes aligned.
 * @param      source  Pointer to source data. Must be 4 bytes aligned.
 * @param[in]  num     The size of the data. Must be a multiple of 4.
 */
void NDMA_copy(u32 *dest, const u32 *source, u32 num);

/**
 * @brief      Asynchronous memory fill with the given value using the NDMA engine.
 *
 * @param      dest   Pointer to destination memory. Must be 4 bytes aligned.
 * @param[in]  value  The value each 32-bit word will be set to.
 * @param[in]  num    The size of the memory to fill. Must be a multiple of 4.
 */
void NDMA_fillAsync(u32 *dest, u32 value, u32 num);

/**
 * @brief      Fills memory with the given value using the NDMA engine.
 *
 * @param      dest   Pointer to destination memory. Must be 4 bytes aligned.
 * @param[in]  value  The value each 32-bit word will be set to.
 * @param[in]  num    The size of the memory to fill. Must be a multiple of 4.
 */
void NDMA_fill(u32 *dest, u32 value, u32 num);
