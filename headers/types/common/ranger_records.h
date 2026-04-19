#ifndef HEADERS_TYPES_COMMON_RANGER_RECORDS_H_
#define HEADERS_TYPES_COMMON_RANGER_RECORDS_H_

struct partner_unlock_flag_table {
    enum partner_unlock_flag munchlax_met : 1;
    enum partner_unlock_flag chimchar_met : 1;
    enum partner_unlock_flag piplup_met : 1;
    enum partner_unlock_flag turtwig_met : 1;
    enum partner_unlock_flag pachirisu_met : 1;
    enum partner_unlock_flag snorunt_met : 1;
    enum partner_unlock_flag machop_met : 1;
    enum partner_unlock_flag croagunk_met : 1;
    enum partner_unlock_flag hippopotas_met : 1;
    enum partner_unlock_flag starly_met : 1;
    enum partner_unlock_flag mime_jr_met : 1;
    enum partner_unlock_flag kricketot_met : 1;
    enum partner_unlock_flag cranidos_met : 1;
    enum partner_unlock_flag misdreavus_met : 1;
    enum partner_unlock_flag gible_met : 1;
    enum partner_unlock_flag sneasel_met : 1;
    enum partner_unlock_flag shieldon_met : 1;
    enum partner_unlock_flag unused_flags : 15;
};
ASSERT_SIZE(struct partner_unlock_flag_table, 4);

// Records for various things the player can do.
struct ranger_records {
    int32_t max_steps_record;
    int32_t conversations_record;
    int32_t targets_checked_record;
    int32_t game_saves_record;
    int32_t pokemon_rides_record;
    // This seems to determine the obscure "Best Partner" Ranger Record in-game. It increments by
    // one at the end of each battle where the partner used a poke-assist. Cannot exceed 9,999,999.
    int32_t best_partner_record_table[17];
    int32_t capture_line_len_record;
    int32_t num_loops_record;
    int16_t pokemon_captured_record;
    int16_t pokemon_fled_record;
    int16_t poke_assists_used_record;
    undefined field78_0x66;
    int8_t timer_type_active; // 0 = no timer, 1 = timer counting down, 2 = unknown
    int32_t timer_1_frames_left;
    int32_t timer_2_frames_left; // May count upwards. More clarification needed.
    // This seems to be the internal order used by the partners.
    struct partner_unlock_flag_table partner_unlock_flags;
    struct play_time last_play_time;
    int8_t styler_level;
    struct play_time current_play_time;
    int8_t unk_field_0x83;
};
ASSERT_SIZE(struct ranger_records, 132);

#endif