// Shared types used throughout the game

#ifndef HEADERS_TYPES_COMMON_H_
#define HEADERS_TYPES_COMMON_H_

#include "util.h"

// Parameters used by the NitroSDK to read the ROM.
struct start_module_params {
    void* autoload_list;
    void* autoload_list_end;
    void* autoload_start;
    void* static_bss_start;
    void* static_bss_end;
    uint32_t compressed_static_end;
    uint32_t version_id;
    uint32_t nitrocode_be;
    uint32_t nitrocode_le;
};

#endif
