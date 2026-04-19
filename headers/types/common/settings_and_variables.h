#ifndef HEADERS_TYPES_COMMON_SETTINGS_AND_VARIABLES_H_
#define HEADERS_TYPES_COMMON_SETTINGS_AND_VARIABLES_H_

// These are primarily used for gamestate progression within a mission or chapter.
struct named_event_variables {
    int32_t subchapter_progression; // 0x00: Seems to increase linearly, or to the nearest multiple
                                    // of 10. Sub-sub-chapters perhaps?
    int32_t scrach_paper[20];       // 0x04: Varies wildly by subchapter.
};

ASSERT_SIZE(struct named_event_variables, 84);

// Seems to be used for settings-adjacent things, like the actual in-game settings, and a few other
// things...
struct named_settings_variables {
    int32_t unk_setting_0x0;
    int32_t window_border; // 0x4: Determines what color the textbox border will be.
    int32_t text_speed; // 0x8: 0x03 for slow, 0x02 for medium, 0x01 for fast. No other values seem
                        // to have an impact. :(
    // If non-zero, opening the styler upgrade menu will unlock a new styler upgrade.
    enum styler_unlock_upgrade_type styler_upgrade_interrupt; // 0xC
    // Incremented by the cutscene produced by the above field!
    int32_t num_styler_upgrades; // 0x10
    int32_t unk_settings[26];    // 0x14
};

ASSERT_SIZE(struct named_settings_variables, 124);

// Seems to be used for quest-adjacent things. Reset before each quest.
struct named_quest_variables {
    // 0x0: Enabled when the Breeze Hill sign is repaired, disabled when starting a quest?
    // Either this is a bitflag of some kind, or it's actually used as a subquest progression
    // marker, and only starting a quest resets it?
    int32_t maybe_quest_progression;
    int32_t unk_quest_vars[10]; // 0x4: So far no use observed, but likely scratch paper to be used
                                // individually by quest.
};

ASSERT_SIZE(struct named_quest_variables, 44);

union event_variables {
    struct named_event_variables named_event_variables;
    int32_t event_variable_table[21];
};
ASSERT_SIZE(union event_variables, 84);

union settings_variables {
    struct named_settings_variables named_settings_variables;
    int32_t settings_variable_table[31];
};
ASSERT_SIZE(union settings_variables, 124);

union quest_variables {
    struct named_quest_variables named_quest_variables;
    int32_t quest_variable_table[11];
};
ASSERT_SIZE(union quest_variables, 44);

// Many interactions with these values seem to treat them as tables of ints, rather than individual
// fields. For ghidra analysis, these fields should be unions, at least in the short term.
struct settings_and_variables {
    union event_variables event_variables;
    union settings_variables settings_variables;
    union quest_variables quest_variables;
};
ASSERT_SIZE(struct settings_and_variables, 252);

#endif