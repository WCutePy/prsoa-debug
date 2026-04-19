#ifndef HEADERS_TYPES_COMMON_GLOSSARY_H_
#define HEADERS_TYPES_COMMON_GLOSSARY_H_

// Start of the "Field" glossary bitfield
struct glossary_fields_table {
    enum glossary_table_entry friend_pokemon_entry : 2;
    enum glossary_table_entry partner_pokemon_entry : 2;
    enum glossary_table_entry partner_energy_entry : 2;
    enum glossary_table_entry happy_mood_entry : 2;
    enum glossary_table_entry release_entry : 2;
    enum glossary_table_entry partner_farm_entry : 2;
    enum glossary_table_entry field_moves_and_targets_entry : 2;
    enum glossary_table_entry target_clear_entry : 2;
    enum glossary_table_entry map_moves_entry : 2;
    enum glossary_table_entry recharge_entry : 2;
    enum glossary_table_entry agility_entry : 2;
    enum glossary_table_entry fly_entry : 2;
    enum glossary_table_entry teleport_entry : 2;
    enum glossary_table_entry area_moves_entry : 2;
    enum glossary_table_entry missions_entry : 2;
    enum glossary_table_entry quests_entry : 2;
    enum glossary_table_entry field_damage_entry : 2;
    enum glossary_table_entry change_screen_button_entry : 2;
    enum glossary_table_entry unk_entry_0 : 2;
    enum glossary_table_entry unk_entry_1 : 2;
    // Presumed to be padding.
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
};
ASSERT_SIZE(struct glossary_fields_table,8);

// Start of the "Capture" glossary bitfield
struct glossary_capture_table {
    enum glossary_table_entry capture_disc_entry : 2;
    enum glossary_table_entry capture_line_entry : 2;
    enum glossary_table_entry capture_entry : 2;
    enum glossary_table_entry capture_results_entry : 2;
    enum glossary_table_entry styler_energy_entry : 2;
    enum glossary_table_entry styler_damage_entry : 2;
    enum glossary_table_entry styler_level_entry : 2;
    enum glossary_table_entry flee_entry : 2;
    enum glossary_table_entry power_charge_entry : 2;
    enum glossary_table_entry styler_status_entry : 2;
    enum glossary_table_entry power_up_data_entry : 2;
    enum glossary_table_entry poke_assists_entry : 2;
    enum glossary_table_entry poke_assist_matchups_entry : 2;
    enum glossary_table_entry poke_assist_grass_entry : 2;
    enum glossary_table_entry poke_assist_flying_entry : 2;
    enum glossary_table_entry poke_assist_normal_entry : 2;
    enum glossary_table_entry poke_assist_recharge_entry : 2;
    enum glossary_table_entry poke_assist_water_entry : 2;
    enum glossary_table_entry poke_assist_rock_entry : 2;
    enum glossary_table_entry poke_assist_electric_entry : 2;
    enum glossary_table_entry poke_assist_bug_entry : 2;
    enum glossary_table_entry poke_assist_fire_entry : 2;
    enum glossary_table_entry poke_assist_fighting_entry : 2;
    enum glossary_table_entry poke_assist_ground_entry : 2;
    enum glossary_table_entry poke_assist_steel_entry : 2;
    enum glossary_table_entry poke_assist_poison_entry : 2;
    enum glossary_table_entry poke_assist_ghost_entry : 2;
    enum glossary_table_entry poke_assist_psychic_entry : 2;
    enum glossary_table_entry poke_assist_dark_entry : 2;
    enum glossary_table_entry poke_assist_ice_entry : 2;
    enum glossary_table_entry poke_assist_dragon_entry : 2;
    enum glossary_table_entry poke_assist_special_effects_entry : 2;
};
ASSERT_SIZE(struct glossary_capture_table,8);

// Start of the "Terms" header glossary bitfield
struct glossary_terms_table {
    enum glossary_table_entry pokemon_rangers_entry : 2;
    enum glossary_table_entry student_rangers_entry : 2;
    enum glossary_table_entry top_rangers_entry : 2;
    enum glossary_table_entry ranger_union_entry : 2;
    enum glossary_table_entry ranger_base_entry : 2;
    enum glossary_table_entry ranger_depot_entry : 2;
    enum glossary_table_entry ranger_rank_entry : 2;
    enum glossary_table_entry school_styler_entry : 2;
    enum glossary_table_entry capture_styler_entry : 2;
    enum glossary_table_entry fine_styler_entry : 2;
    enum glossary_table_entry vatonage_styler_entry : 2;
    enum glossary_table_entry ranger_record_entry : 2;
    enum glossary_table_entry capture_arena_entry : 2;
    enum glossary_table_entry ranger_school_entry : 2;
    enum glossary_table_entry chicole_village_entry : 2;
    enum glossary_table_entry vientown_entry : 2;
    enum glossary_table_entry vien_forest_entry : 2;
    enum glossary_table_entry pueltown_entry : 2;
    enum glossary_table_entry puel_sea_entry : 2;
    enum glossary_table_entry altru_park_entry : 2;
    enum glossary_table_entry altru_inc_entry : 2;
    enum glossary_table_entry peril_cliffs_entry : 2;
    enum glossary_table_entry boyleland_entry : 2;
    enum glossary_table_entry boyle_volcano_entry : 2;
    enum glossary_table_entry cargo_ship_entry : 2;
    enum glossary_table_entry chroma_highlands_entry : 2;
    enum glossary_table_entry chroma_ruins_entry : 2;
    enum glossary_table_entry altru_ruins_entry : 2;
    enum glossary_table_entry hia_valley_entry : 2;
    enum glossary_table_entry shiver_camp_entry : 2;
    enum glossary_table_entry ice_lake_entry : 2;
    enum glossary_table_entry almia_castle_entry : 2;
    enum glossary_table_entry sea_of_wailord_entry : 2;
    enum glossary_table_entry oil_field_hideout_entry : 2;
    enum glossary_table_entry haruba_village_entry : 2;
    enum glossary_table_entry hippowdon_temple_entry : 2;
    enum glossary_table_entry altru_tower_entry : 2;
    enum glossary_table_entry unk_entry_02 : 2;
    enum glossary_table_entry unk_entry_03 : 2;
    enum glossary_table_entry unk_entry_04 : 2;
    // Presumed to be padding.
    undefined field_0x2a;
    undefined field_0x2b;
};

ASSERT_SIZE(struct glossary_terms_table, 12);

struct ranger_glossary {
    struct glossary_fields_table fields_entries;
    // Presumed to be padding.
    undefined field_0x8;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct glossary_capture_table capture_entries;
    // Presumed to be padding.
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    struct glossary_terms_table terms_entries;
    // Presumed to be padding.
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
};

ASSERT_SIZE(struct ranger_glossary, 48);
#endif