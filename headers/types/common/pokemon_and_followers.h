#ifndef HEADERS_TYPES_COMMON_POKEMON_AND_FOLLOWERS_H_
#define HEADERS_TYPES_COMMON_POKEMON_AND_FOLLOWERS_H_

// Data type for befriended pokemon
struct pokemon_data {
    struct form_id_16 form;        // NOT natdex number!
    struct room_id_16 room_caught; // Used to determine if a pokemon was already caught here.
    int16_t room_caught_index;     // Index of this pokemon in room_caught's available pokemon.
    undefined field5_0x6;          // Seems to be padding
    undefined field6_0x7;
    // slot_status_bitfield
    uint32_t is_valid : 1;
    uint32_t is_partner : 1;      // Also prevents release
    uint32_t is_unreleasable : 1; // Also affects poke-assist use.
    uint32_t unknown_bits : 29;
    // These last 12 bytes change rapidly, and are likely related to pokemon motion.
    int x_coordinate;
    int y_coordinate;
    int16_t face_angle;
    int16_t collision_data; // This is copied from the field of the same name in ranger_core_data.
                            // It seems to mess with pathing and collision when edited.
};

ASSERT_SIZE(struct pokemon_data, 24);

struct following_npc {
    int is_valid; // 0x0: If true, an NPC is following the player.
    undefined4 unk_field0_0x4;
    int16_t sprite_id; // 0x8: Determines which sprite the following NPC will have.
    int16_t
        face_angle;   // 0xA: Continuous, Right = 0x0000, Down = 0x4000, Left = 0x8000, Up = 0xC000.
    int x_coordinate; // 0xC
    int y_coordinate; // 0x10
    char talk_script_func_name[32]; // 0x14: Unknown how long this actually is. Name of the script
                                    // function called when NPC is tapped.
    int16_t unk_field1_0x34;        // 0x34
    undefined unk_field1_0x36;      // 0x36
    undefined unk_field1_0x37;      // 0x37
};

ASSERT_SIZE(struct following_npc, 56);

#endif