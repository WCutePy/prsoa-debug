#ifndef HEADERS_TYPES_COMMON_STYLER_H_
#define HEADERS_TYPES_COMMON_STYLER_H_

struct styler_rank_and_type {
    int8_t styler_rank : 4;
    enum styler_type styler_type : 4;
};
ASSERT_SIZE(struct styler_rank_and_type, 1);

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

ASSERT_SIZE(struct styler_upgrades, 6);



#endif