#ifndef HEADERS_TYPES_COMMON_TEXTBOX_H_
#define HEADERS_TYPES_COMMON_TEXTBOX_H_

struct textbox_subdata {
    undefined4 field0_0x0;
    undefined field1_0x4[128][10]; // Some kind of table. Maybe a table of structs?
    undefined field2_0x504[4352];
    undefined4 field4354_0x1604;
    int is_yes_no_menu_printing; // Seems to check if associated dialogue with a yes_no_menu is
                                 // active?
    int yes_no_result;           // Seems to store the result of a yes_no_menu.
    undefined4 field4357_0x1610;
    undefined4 field4358_0x1614;
    undefined4 field4359_0x1618;
    undefined4 field4360_0x161c;
    undefined4 field4361_0x1620[4];
    undefined4 field4362_0x1630;
    undefined4 field4363_0x1634;
    undefined4 field4364_0x1638;
};
ASSERT_SIZE(struct textbox_subdata, 5692);


struct textbox_data {
    void* field0_0x0;
    void* field1_0x4;
    void* field2_0x8;
    void* field3_0xc;
    undefined4 field4_0x10;
    undefined4 field5_0x14;
    undefined4 field6_0x18;
    undefined4 field7_0x1c;
    undefined4 field8_0x20;
    undefined4 field9_0x24;
    undefined4 field10_0x28;
    void* field11_0x2c;
    char unk_buffer[24];
    char* unk_string_ptr; // Certain interactions cause the string to also appear here.
    undefined4 field14_0x4c;
    // 0: Finished Printing, 1: Actively Printing, 2: Resuming From Page Transition, 3: Page
    // Transition, 5: Awaiting textbox close. 9: Yes-No Menu active
    int textbox_print_status;
    int is_custom_text_speed;
    int is_auto_advance_text_on;
    int auto_advance_text_delay;
    int auto_advance_text_timer;
    int is_auto_close_text_on;
    int auto_close_text_delay;
    int auto_close_text_timer;
    int window_setting;
    int default_text_speed;
    int text_size;        // 0 = normal, 1 = double-size, 2+ unknown
    char* current_string; // Increments to the last printed character!
    int field27_0x80;
    void* field28_0x84;
    struct controller_inputs* controller_inputs_ptr;
    struct touch_screen* touch_screen_ptr;
    void* field31_0x90;
    void* field32_0x94;
    undefined4 field33_0x98;
    int current_text_speed; // Pointer appears to be altered for varied text speeds.
    undefined4 field35_0xa0;
    int text_coordinates[2];
    int font_color; // Default is 0x4, red is 0x7, others unknown.
    int field38_0xb0;
    undefined4 field39_0xb4[16]; // Explicit Size not found, only references to start of the table
    void* field40_0xf4;
    void* field41_0xf8; // Not supported by live analysis, but see 0x200976C NA.
    undefined4 field42_0xfc;
    undefined4 field43_0x100;
    undefined4 field44_0x104;
    undefined4 field45_0x108;
    void* field46_0x10c;
    void* field47_0x110;
    void* field48_0x114;
    undefined4 field49_0x118;
    undefined4 field50_0x11c;
    void* field51_0x120; // Not supported by live analysis, but see 0x200976C NA.
    undefined4 field52_0x124;
    undefined4 field53_0x128;
    undefined4 field54_0x12c;
    undefined4 field55_0x130;
    void* field56_0x134;
    void* field57_0x138;
    void* field58_0x13c;
    undefined4 field59_0x140;
    undefined4 field60_0x144;
    undefined4 field61_0x148;
    struct textbox_subdata* textbox_subdata_ptr;
    int script_kind; // 0 = SYS, 1 = AREA, 2 = CHAP, 3 = QUE, 4 = BAT
    int message_id;
};
ASSERT_SIZE(struct textbox_data, 344);

#endif