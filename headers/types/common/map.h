#ifndef HEADERS_TYPES_COMMON_MAP_H_
#define HEADERS_TYPES_COMMON_MAP_H_

struct trigger_spawn_nibbles {
    enum map_nibble trigger_00 : 4;
    enum map_nibble trigger_01 : 4;
    enum map_nibble trigger_02 : 4;
    enum map_nibble trigger_03 : 4;
    enum map_nibble trigger_04 : 4;
    enum map_nibble trigger_05 : 4;
    enum map_nibble trigger_06 : 4;
    enum map_nibble trigger_07 : 4;
    enum map_nibble trigger_08 : 4;
    enum map_nibble trigger_09 : 4;
    enum map_nibble trigger_10 : 4;
    enum map_nibble trigger_11 : 4;
    enum map_nibble trigger_12 : 4;
    enum map_nibble trigger_13 : 4;
    enum map_nibble trigger_14 : 4;
    enum map_nibble trigger_15 : 4;
    enum map_nibble trigger_16 : 4;
    enum map_nibble trigger_17 : 4;
    enum map_nibble trigger_18 : 4;
    enum map_nibble trigger_19 : 4;
    enum map_nibble trigger_20 : 4;
    enum map_nibble trigger_21 : 4;
    enum map_nibble trigger_22 : 4;
    enum map_nibble trigger_23 : 4;
    enum map_nibble trigger_24 : 4;
    enum map_nibble trigger_25 : 4;
    enum map_nibble trigger_26 : 4;
    enum map_nibble trigger_27 : 4;
    enum map_nibble trigger_28 : 4;
    enum map_nibble trigger_29 : 4;
    enum map_nibble trigger_30 : 4;
    enum map_nibble trigger_31 : 4;
    enum map_nibble trigger_32 : 4;
    enum map_nibble trigger_33 : 4;
    enum map_nibble trigger_34 : 4;
    enum map_nibble trigger_35 : 4;
    enum map_nibble trigger_36 : 4;
    enum map_nibble trigger_37 : 4;
    enum map_nibble trigger_38 : 4;
    enum map_nibble trigger_39 : 4;
    enum map_nibble trigger_40 : 4;
    enum map_nibble trigger_41 : 4;
    enum map_nibble trigger_42 : 4;
    enum map_nibble trigger_43 : 4;
    enum map_nibble trigger_44 : 4;
    enum map_nibble trigger_45 : 4;
    enum map_nibble trigger_46 : 4;
    enum map_nibble trigger_47 : 4;
};

ASSERT_SIZE(struct trigger_spawn_nibbles, 24);

struct pokemon_spawn_nibbles {
    enum map_nibble pokemon_00 : 4;
    enum map_nibble pokemon_01 : 4;
    enum map_nibble pokemon_02 : 4;
    enum map_nibble pokemon_03 : 4;
    enum map_nibble pokemon_04 : 4;
    enum map_nibble pokemon_05 : 4;
    enum map_nibble pokemon_06 : 4;
    enum map_nibble pokemon_07 : 4;
    enum map_nibble pokemon_08 : 4;
    enum map_nibble pokemon_09 : 4;
    enum map_nibble pokemon_10 : 4;
    enum map_nibble pokemon_11 : 4;
    enum map_nibble pokemon_12 : 4;
    enum map_nibble pokemon_13 : 4;
    enum map_nibble pokemon_14 : 4;
    enum map_nibble pokemon_15 : 4;
    enum map_nibble pokemon_16 : 4;
    enum map_nibble pokemon_17 : 4;
    enum map_nibble pokemon_18 : 4;
    enum map_nibble pokemon_19 : 4;
    enum map_nibble pokemon_20 : 4;
    enum map_nibble pokemon_21 : 4;
    enum map_nibble pokemon_22 : 4;
    enum map_nibble pokemon_23 : 4;
    enum map_nibble pokemon_24 : 4;
    enum map_nibble pokemon_25 : 4;
    enum map_nibble pokemon_26 : 4;
    enum map_nibble pokemon_27 : 4;
    enum map_nibble pokemon_28 : 4;
    enum map_nibble pokemon_29 : 4;
    enum map_nibble pokemon_30 : 4;
    enum map_nibble pokemon_31 : 4;
};

ASSERT_SIZE(struct pokemon_spawn_nibbles, 16);

struct npc_spawn_nibbles {
    enum map_nibble npc_00 : 4;
    enum map_nibble npc_01 : 4;
    enum map_nibble npc_02 : 4;
    enum map_nibble npc_03 : 4;
    enum map_nibble npc_04 : 4;
    enum map_nibble npc_05 : 4;
    enum map_nibble npc_06 : 4;
    enum map_nibble npc_07 : 4;
    enum map_nibble npc_08 : 4;
    enum map_nibble npc_09 : 4;
    enum map_nibble npc_10 : 4;
    enum map_nibble npc_11 : 4;
    enum map_nibble npc_12 : 4;
    enum map_nibble npc_13 : 4;
    enum map_nibble npc_14 : 4;
    enum map_nibble npc_15 : 4;
    enum map_nibble npc_16 : 4;
    enum map_nibble npc_17 : 4;
    enum map_nibble npc_18 : 4;
    enum map_nibble npc_19 : 4;
    enum map_nibble npc_20 : 4;
    enum map_nibble npc_21 : 4;
    enum map_nibble npc_22 : 4;
    enum map_nibble npc_23 : 4;
    enum map_nibble npc_24 : 4;
    enum map_nibble npc_25 : 4;
    enum map_nibble npc_26 : 4;
    enum map_nibble npc_27 : 4;
    enum map_nibble npc_28 : 4;
    enum map_nibble npc_29 : 4;
    enum map_nibble npc_30 : 4;
    enum map_nibble npc_31 : 4;
};

ASSERT_SIZE(struct npc_spawn_nibbles, 16);

struct target_destroyed_nibbles {
    enum map_nibble target_00 : 4;
    enum map_nibble target_01 : 4;
    enum map_nibble target_02 : 4;
    enum map_nibble target_03 : 4;
    enum map_nibble target_04 : 4;
    enum map_nibble target_05 : 4;
    enum map_nibble target_06 : 4;
    enum map_nibble target_07 : 4;
    enum map_nibble target_08 : 4;
    enum map_nibble target_09 : 4;
    enum map_nibble target_10 : 4;
    enum map_nibble target_11 : 4;
    enum map_nibble target_12 : 4;
    enum map_nibble target_13 : 4;
    enum map_nibble target_14 : 4;
    enum map_nibble target_15 : 4;
    enum map_nibble target_16 : 4;
    enum map_nibble target_17 : 4;
    enum map_nibble target_18 : 4;
    enum map_nibble target_19 : 4;
    enum map_nibble target_20 : 4;
    enum map_nibble target_21 : 4;
    enum map_nibble target_22 : 4;
    enum map_nibble target_23 : 4;
    enum map_nibble target_24 : 4;
    enum map_nibble target_25 : 4;
    enum map_nibble target_26 : 4;
    enum map_nibble target_27 : 4;
    enum map_nibble target_28 : 4;
    enum map_nibble target_29 : 4;
    enum map_nibble target_30 : 4;
    enum map_nibble target_31 : 4;
};

ASSERT_SIZE(struct target_destroyed_nibbles, 16);


#endif