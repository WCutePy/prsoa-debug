#ifndef HEADERS_TYPES_COMMON_CLOCK_H_
#define HEADERS_TYPES_COMMON_CLOCK_H_

struct rtc_date {
    uint32_t year;
    uint32_t month;
    uint32_t day;
    uint32_t weekday;
};
ASSERT_SIZE(struct rtc_date, 16);


struct rtc_time {
    uint32_t hours;
    uint32_t minutes;
    uint32_t seconds;
};
ASSERT_SIZE(struct rtc_time, 12);

// Stored the time played in hours, minutes, and seconds.
struct play_time {
    int hours;
    int8_t minutes;
    int8_t seconds;
    bool has_max_play_time;
};
ASSERT_SIZE(struct play_time, 7);

#endif