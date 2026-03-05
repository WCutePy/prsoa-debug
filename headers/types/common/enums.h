// Shared enums used throughout the game

#ifndef HEADERS_TYPES_COMMON_ENUMS_H_
#define HEADERS_TYPES_COMMON_ENUMS_H_

enum os_thread_state {
    OS_THREAD_STATE_WAITING = 0,
    OS_THREAD_STATE_READY = 1,
    OS_THREAD_STATE_TERMINATED = 2
};

enum pxi_fifo_tag {
    PXI_FIFO_TAG_EX = 0,     // Extension format
    PXI_FIFO_TAG_USER_0,     // for application programmer, use it in free
    PXI_FIFO_TAG_USER_1,     // for application programmer, use it in free
    PXI_FIFO_TAG_SYSTEM,     // SDK inner usage
    PXI_FIFO_TAG_NVRAM,      // NVRAM
    PXI_FIFO_TAG_RTC,        // RTC
    PXI_FIFO_TAG_TOUCHPANEL, // Touch Panel
    PXI_FIFO_TAG_SOUND,      // Sound
    PXI_FIFO_TAG_PM,         // Power Management
    PXI_FIFO_TAG_MIC,        // Microphone
    PXI_FIFO_TAG_WM,         // Wireless Manager
    PXI_FIFO_TAG_FS,         // File System
    PXI_FIFO_TAG_OS,         // OS
    PXI_FIFO_TAG_CTRDG,      // Cartridge
    PXI_FIFO_TAG_CARD,       // Card
    PXI_FIFO_TAG_WVR,        // Control driving wireless library
    PXI_FIFO_TAG_CTRDG_Ex,   // Cartridge Ex
    PXI_MAX_FIFO_TAG = 32    // MAX FIFO TAG
};

enum mi_cartridge_rom_cycle_1st {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8 = 1,
    MI_CTRDG_ROMCYCLE1_6 = 2,
    MI_CTRDG_ROMCYCLE1_18 = 3
};

enum mi_cartridge_rom_cycle_2nd { MI_CTRDG_ROMCYCLE2_6 = 0, MI_CTRDG_ROMCYCLE2_4 = 1 };

enum os_intr_mode {
    OS_INTRMODE_ENABLE = 0,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_DISABLE_IRQ = 0x80
};

#endif
