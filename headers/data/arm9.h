#ifndef HEADERS_DATA_ARM9_H_
#define HEADERS_DATA_ARM9_H_

extern void* DISPLAY_ENGINE_BG_CONTROL_PTRS[2][4];
extern int16_t SINE_COSINE_TABLE[4096][2];
extern int16_t ARCTAN32_TABLE[130];
extern int16_t ARCTAN16_TABLE[130];
extern uint8_t S_VOLUME_TABLE[724];
extern void* SYSCALL_PAGE_2[378];
extern void* SYSCALL_PAGE_0[128];
extern struct megastruct* MEGASTRUCT_PTR_ARM9;
#endif
