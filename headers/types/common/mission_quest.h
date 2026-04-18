#ifndef HEADERS_TYPES_COMMON_MISSION_QUEST_H_
#define HEADERS_TYPES_COMMON_MISSION_QUEST_H_

// Individual entry in the quest table
struct quest_table_entry {
    int8_t is_available : 1; // bit 0
    int8_t is_cleared : 1;   // bit 1
    int8_t unk_bit_2 : 1;
    int8_t unk_bit_3 : 1;
    int8_t name_visible : 1; // bit 4
    int8_t unk_bit_5 : 1;
    int8_t unk_bit_6 : 1;
    int8_t unk_bit_7 : 1;
};

ASSERT_SIZE(struct quest_table_entry, 1);

// Tracks relevant mission and quest data
struct mission_quest_header {
    bool has_active_mission;
    bool has_active_quest;
    int8_t active_mission_id; // Eventually make this an enum
    int8_t active_quest_id;   // Eventually make this an enum
    int last_cleared_mission;
    int chapter_num;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    struct quest_table_entry quest_table[62]; // bitfield by quest id
    undefined field_0x52;
    undefined field_0x53;
};
ASSERT_SIZE(struct mission_quest_header, 84);

// Pointers to other relevant structs to mission and quest management
struct mission_quest_footer {
    struct textbox_data* textbox_data_ptr;
    struct script_manager* script_manager_ptr;
};
ASSERT_SIZE(struct mission_quest_footer, 8);

// Tracks relevant mission and quest data
struct mission_quest_data {
    struct mission_quest_header header;
    struct mission_quest_footer footer;
};

ASSERT_SIZE(struct mission_quest_data, 92);


#endif