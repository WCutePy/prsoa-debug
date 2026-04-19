#ifndef HEADERS_TYPES_COMMON_FIELD_DATA_H_
#define HEADERS_TYPES_COMMON_FIELD_DATA_H_

struct field_target_data {
    undefined2 field0_0x0;
    undefined1 field1_0x2;
    undefined1 field2_0x3;
    struct field_move_8 field_move_id; // The type of field move, if any, required to interact with this target
    int8_t field_move_level; // The minimum level of field move, if any, required for this target
    undefined field5_0x6;
    undefined field6_0x7;
    undefined field7_0x8;
    undefined field8_0x9;
    undefined field9_0xa;
    undefined field10_0xb;
    undefined field11_0xc;
    undefined field12_0xd;
    undefined field13_0xe;
    undefined field14_0xf;
    undefined field15_0x10;
    undefined field16_0x11;
    undefined field17_0x12;
    undefined field18_0x13;
    undefined field19_0x14;
    undefined field20_0x15;
    undefined field21_0x16;
    undefined field22_0x17;
    undefined2 field23_0x18;
    undefined2 field24_0x1a;
    undefined2 field25_0x1c;
    undefined field26_0x1e;
    undefined field27_0x1f;
};
ASSERT_SIZE(struct field_target_data, 32);

// Field Sizes From ov_00 0x2135e30
struct field_enemy_data {
    undefined2 field0_0x0; 
    undefined2 field1_0x2;
    undefined2 field2_0x4;
    undefined2 field3_0x6;
    undefined2 field4_0x8;
    undefined2 field5_0xa;
    undefined4 field6_0xc;
    undefined4 field7_0x10;
    undefined2 field8_0x14;
    undefined2 field9_0x16;
    undefined2 field10_0x18;
    undefined2 field11_0x1a;
    undefined4 field12_0x1c;
    undefined4 field13_0x20;
    undefined1 field14_0x24;
    undefined1 field15_0x25;
    undefined1 field16_0x26;
    undefined1 field17_0x27;
    undefined2 field18_0x28;
    undefined2 field19_0x2a;
    undefined2 field20_0x2c;
    undefined2 field21_0x2e;
    undefined2 field22_0x30;
    undefined2 field23_0x32;
    undefined1 field24_0x34;
    undefined1 field25_0x35;
    undefined1 field26_0x36;
    struct target_object_8 disguised_target_id; // The target_object this pokemon should be disguised as in the overworld. 
    undefined1 field28_0x38;
    undefined1 field29_0x39;
    undefined1 field30_0x3a;
    undefined1 field31_0x3b;
    undefined1 field32_0x3c;
    undefined1 field33_0x3d;
    undefined1 field34_0x3e;
    undefined1 field35_0x3f;
};
ASSERT_SIZE(struct field_enemy_data, 64);

struct field_npc_data {
    undefined2 field0_0x0;
    undefined1 field1_0x2;
    undefined1 field2_0x3;
};
ASSERT_SIZE(struct field_npc_data, 4);


struct field_map_data {
    undefined1 area_id;
    undefined1 subarea_id;
    undefined1 map_file_has_c_suffix;
    undefined field3_0x3;
    struct battle_result_8 battle_result; // Apparently? Copied from ranger_data...
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined2 field8_0x8;
    undefined field9_0xa;
    undefined field10_0xb;
    undefined2 field11_0xc;
    undefined field12_0xe;
    undefined field13_0xf;
    undefined2 field14_0x10;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined2 field17_0x14;
    undefined field18_0x16;
    undefined field19_0x17;
    undefined2 field20_0x18;
    undefined field21_0x1a;
    undefined field22_0x1b;
    undefined2 field23_0x1c;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined2 field26_0x20;
    undefined field27_0x22;
    undefined field28_0x23;
    undefined2 field29_0x24;
    undefined field30_0x26;
    undefined field31_0x27;
    undefined2 field32_0x28;
    undefined field33_0x2a;
    undefined field34_0x2b;
    undefined2 field35_0x2c;
    undefined field36_0x2e;
    undefined field37_0x2f;
    undefined2 field38_0x30;
    undefined field39_0x32;
    undefined field40_0x33;
    undefined2 field41_0x34;
    undefined field42_0x36;
    undefined field43_0x37;
    undefined2 field44_0x38;
    undefined field45_0x3a;
    undefined field46_0x3b;
    undefined2 field47_0x3c;
    undefined field48_0x3e;
    undefined field49_0x3f;
    undefined2 field50_0x40;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined2 field53_0x44;
    undefined field54_0x46;
    undefined field55_0x47;
    undefined2 field56_0x48;
    undefined2 field57_0x4a;
    undefined2 field58_0x4c;
    undefined field59_0x4e;
    undefined field60_0x4f;
    undefined4 field61_0x50;
};
ASSERT_SIZE(struct field_map_data, 84);

struct field_data {
    struct file_wrapper *field_data_file_wrapper;
    struct field_npc_data *npc_data;
    struct field_enemy_data *enemy_data;
    struct field_target_data *target_data;
    struct field_map_data *map_data;
};
ASSERT_SIZE(struct field_data, 20);

struct field_data_bin {
    char field_string[4]; // "FLID"
    int enemy_data_ptr;
    int enemy_data_offset;
    int target_data_offset;
    int npc_data_offset;
    int map_data_offset;
    int file_end_offset;
    char enmy[4]; // "ENMY"
    int num_enemy_entries;
    struct field_enemy_data enemy_data_table[443];
    char target_string[4];  // "TOBJ"
    int num_target_entries;
    struct field_target_data target_data_table[369];
    char npc_string[4]; // "NPC"
    int num_npc_entries;
    struct field_npc_data field15_0x9d14[160];
    char map_string[4]; // "MAP"
    int num_map_entries;
    struct field_map_data map_data_table[441];
};

#endif