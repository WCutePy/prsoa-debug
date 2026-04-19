#ifndef HEADERS_TYPES_COMMON_BATTLE_INCLUDES_H_
#define HEADERS_TYPES_COMMON_BATTLE_INCLUDES_H_

// This is populated in an unknown way before starting any battle.
struct battle_init {
    undefined unk_fields[2048];
};

ASSERT_SIZE(struct battle_init, 2048);

struct battle_combatants {
    int* unk_struct_ptr_0x0;
    int8_t current_hp;
    int8_t styler_level;
    bool partner_assist_unlocked;
    undefined field4_0x7;
    int partner_gauge_current;
    int partner_gauge_max;
    int partner_gauge_fill_rate;
    int8_t num_party_pokemon;
    undefined field9_0x15;
    int16_t party_form_ids[8];
    int8_t party_slot_statuses_table[8];
    int8_t num_enemy_forms;
    undefined field13_0x2f;
    int16_t enemy_form_ids[4];
    int8_t unk_enemy_data_0x38[4];
    int8_t unk_enemy_data_0x3C[4];
    int8_t num_enemy_pokemon;      // Created by Rename Structure Field action
    int8_t unk_enemy_data_0x41[8]; // Might be related to enemy catch status?
    int8_t arena_graphic_id;
    int8_t weather_graphic_id;
    int8_t sequence_script_id; // runs "data/script/battle/sequence/s%03d.fsb" with this id.
    int8_t tutorial_script_id; // runs "data/script/battle/tutorial/s%03d.fsb" with this id.
    int8_t start_script_id;    // runs "data/script/battle/start/s%03d.fsb" with this id.
    int8_t bgm_id;
    bool can_view_party;
    bool can_flee;
    bool show_boss_health_bar;
    int8_t field28_0x52;
    undefined field29_0x53;
    int8_t field30_0x54;
    undefined field31_0x55;
    int16_t gender_and_uniform; // bit 0: ranger_gender. bit 1+ styler_type, aka uniform
    int8_t field_alloc_bits;    // bit 0: , bit 1: , bit 2: field_0x56.
    undefined field34_0x59;
    undefined field35_0x5a;
    undefined field36_0x5b;
    // May be larger than this!
};

ASSERT_SIZE(struct battle_combatants, 92);
#endif