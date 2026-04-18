#ifndef HEADERS_TYPES_COMMON_SAVE_H_
#define HEADERS_TYPES_COMMON_SAVE_H_

struct save_header {
    char game_mark[0x8];    // 0x0: For this game, is DSPRS
    int main_save_0_offset; // 0x8: Should be 0x1C
    int main_save_1_offset; // 0xC: Should be 0x949E
    int checksum;           // 0x10
    int newest_save_index;  // 0x14: 00 = main_save_0, 01 = main_save_1, 02+ unknown.
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
};

ASSERT_SIZE(struct save_header, 28);

struct save_data {
    struct ranger_data ranger_data_struct; // 0x0
    // Of the 30 pokemon slots, only the first 8 of each group are stored in the save file...
    struct pokemon_data party_group_0[8]; // 0x8804
    struct pokemon_data party_group_1[8]; // 0x88C4
    struct pokemon_data party_group_2[8]; // 0x8984
    struct following_npc follower_1;      // 0x8A44
    struct following_npc follower_2;      // 0x8A7C
    struct quest_body quest_body;         // 0x8AB4
    // Consists of event flags,
    struct settings_and_variables settings_and_variables; // 0x8B08
    undefined unk_field_0x8c04[96];                       // 0x8C04: Permanent home is 0x210C1C0
    struct battle_init battle_init;                       // 0x8C64: Permanent home is 0x210C228
    // 0x9464: Seems to always be 0x1F2E3D4C. If it isn't, the save file is treated as corrupt!
    int unk_field_0x9464;
    undefined unk_field_0x9468[8];      // 0x9468: Permanent home is 0x20AF5E4
    undefined unk_field_0x9470[8];      // 0x9470: Permanent home is 0x20AF5F8
    undefined unk_field_0x9478[8];      // 0x9478: Permanent home is 0x20AF60C
    int16_t ranger_net_completion_bits; // 0x9480
    undefined unk_field_0x9482;
    undefined unk_field_0x9483;
};

ASSERT_SIZE(struct save_data, 38020);

struct save_file {
    struct save_header main_save_header;  // 0x0
    struct save_data main_save_0;         // 0x1C
    struct save_data main_save_1;         // 0x94A0
    struct save_header quick_save_header; // 0x12924: Should be zeroed if quicksave not active.
    struct save_data quick_save; // 0x12940: So far, no reason to believe different from main save.
    int8_t ranger_net_mission1[0x3020]; // 0x1BDC4
    int8_t ranger_net_mission2[0x3020]; // 0x1EDE4
    int8_t ranger_net_mission3[0x3020]; // 0x21E04
    int8_t ranger_net_mission4[0x3020]; // 0x24E24
    int8_t ranger_net_mission5[0x3020]; // 0x27E44
    int8_t ranger_net_mission6[0x3020]; // 0x2AE64
};
ASSERT_SIZE(struct save_file, 188036);

#endif