#ifndef HEADERS_TYPES_COMMON_STYLER_H_
#define HEADERS_TYPES_COMMON_STYLER_H_

#pragma pack(push, 1) // This is usually stored as a 1 byte struct.
struct styler_rank_and_type {
    int8_t styler_rank : 4;
    enum styler_type styler_type : 4;
};
#pragma pack(pop) // Restore alignment
ASSERT_SIZE(struct styler_rank_and_type, 1);

#pragma pack(push, 1) // This is usually stored as a 6 byte struct.
struct styler_upgrades {
    enum styler_upgrade_level grass_defense : 2;
    enum styler_upgrade_level water_defense : 2;
    enum styler_upgrade_level electric_defense : 2;
    enum styler_upgrade_level fire_defense : 2;
    enum styler_upgrade_level fighting_defense : 2;
    enum styler_upgrade_level poison_defense : 2;
    enum styler_upgrade_level psychic_defense : 2;
    enum styler_upgrade_level bug_defense : 2;
    enum styler_upgrade_level ground_defense : 2;
    enum styler_upgrade_level flying_defense : 2;
    enum styler_upgrade_level dark_defense : 2;
    enum styler_upgrade_level rock_defense : 2;
    enum styler_upgrade_level ghost_defense : 2;
    enum styler_upgrade_level ice_defense : 2;
    enum styler_upgrade_level normal_defense : 2;
    enum styler_upgrade_level steel_defense : 2;
    enum styler_upgrade_level dragon_defense : 2;
    enum styler_upgrade_level time_assist : 2;
    enum styler_upgrade_level latent_power : 2;
    enum styler_upgrade_level combo_bonus : 2;
    enum styler_upgrade_level recovery : 2;
    enum styler_upgrade_level energy_plus : 2;
    enum styler_upgrade_level power_plus : 2;
    enum styler_upgrade_level long_line : 2;
};
#pragma pack(pop) // Restore alignment
ASSERT_SIZE(struct styler_upgrades, 6);

#endif