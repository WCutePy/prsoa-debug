#ifndef HEADERS_TYPES_DISPLAY_H_
#define HEADERS_TYPES_DISPLAY_H_

struct screen_fade {
    uint16_t unk_bitfield_0x0;
    int8_t maybe_engine_id; // Is consistently 1 or 2 depending on the engine during init. Takes on
                            // other values sometimes, like 0x5.
    undefined field2_0x3;
    undefined2 usually_60_0x4;
    undefined2 usually_60_0x6;
    int iris_default_diameter; // In testing, is consistently 0x140.
    int iris_center_x;
    int iris_center_y;
    fx32_12 maybe_iris_next_diameter; // unclear precisely what this is
    fx32_12 unk_fixed_point_0x18;     // Seems to be involved with division by 60...
    bool unk_bool_0x1c;               // May be related to screen being faded?
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    void* window_data; // Points to 0x4000040 for engine A. Messing with this makes iris fade
                       // square...
    int8_t field15_0x24;
    int8_t field16_0x25;
    bool unk_bool_0x26;                      // Seem to always be enabled?
    bool unk_bool_0x27;                      // Seem to always be enabled?
    int8_t screen_stripe_table_1[263][2][4]; // Only the first 192 rows seem to be used? Corresponds
                                             // with horizontal rows of pixels.
    int16_t screen_stripe_table_2[263][2];   // May be incorrect, Ghidra isn't liking this choice of
                                             // data type...
};

#endif