// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef void (*RTCCallback)(s32 result, void *arg);
typedef void (*RTCInterrupt)(void);

typedef struct {
    u32 lock;
    RTCCallback callback;
    void *buffer[2];
    void *callbackArg;
    u32 sequence;
    u32 index;
    RTCInterrupt interrupt;
} RTCWork_bad;

typedef struct {
    u32 init;
    u32 pad4;
    u32 pad8;
    u32 lock;
    RTCCallback callback;
    void *buffer[2];
    void *callbackArg;
    u32 sequence;
    u32 index;
    RTCInterrupt interrupt;
} RTCWork;

typedef struct {
    u32 year : 8;
    u32 month : 5;
    u32 dummy0 : 3;
    u32 day : 6;
    u32 dummy1 : 2;
    u32 week : 3;
    u32 dummy2 : 5;
} RTCRawDate;

typedef struct {
    u32 hour : 6;
    u32 dummy0 : 2;
    u32 minute : 7;
    u32 dummy1 : 1;
    u32 second : 7;
    u32 dummy2 : 9;
} RTCRawTime;

typedef struct {
    u16 int1_mode : 4;
    u16 dummy0 : 2;
    u16 int2_mode : 1;
    u16 test : 1;
    u16 dummy1 : 8;
} RTCRawStatus2;

typedef struct {
    u32 week : 3;
    u32 dummy0 : 4;
    u32 we : 1;
    u32 hour : 6;
    u32 dummy1 : 1;
    u32 he : 1;
    u32 minute : 7;
    u32 me : 1;
    u32 dummy2 : 8;
} RTCRawAlarm;

typedef union {
    struct {
        RTCRawDate date;
        RTCRawTime time;
    } a;
    struct {
        u16 status1;
        RTCRawStatus2 status2;
        RTCRawAlarm alarm;
    } b;
} RTCRawData;

typedef struct {
    u32 year;
    u32 month;
    u32 day;
    u32 week;
} RTCDate;

typedef struct {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;

typedef struct {
    u32 week;
    u32 hour;
    u32 minute;
    u32 enable;
} RTCAlarmParam;

extern RTCWork UNK_021185a4;
extern u32 FUN_02069224(u32);
extern u32 FUN_02069434(RTCDate *);
extern int FUN_020692ec(void);

#define RAW ((RTCRawData *)0x027ffde8)

void FUN_02068cd4(int tag, u32 data, int err) {
    s32 result;
    u32 command;
    u32 pxiResult;
    RTCCallback cb;

    (void)tag;

    if (err) {
        if (UNK_021185a4.index != 0) {
            UNK_021185a4.index = 0;
        }
        if (UNK_021185a4.lock != 0) {
            UNK_021185a4.lock = 0;
        }
        if (UNK_021185a4.callback) {
            cb = UNK_021185a4.callback;
            UNK_021185a4.callback = 0;
            cb(6, UNK_021185a4.callbackArg);
        }
        return;
    }

    command = (u8)((data & 0x7f00) >> 8);
    pxiResult = (u8)(data & 0xff);

    if (command == 0x30) {
        if (UNK_021185a4.interrupt) {
            UNK_021185a4.interrupt();
        }
        return;
    }

    if (pxiResult == 0) {
        result = 0;
        switch (UNK_021185a4.sequence) {
        case 0: {
            RTCDate *pDst = (RTCDate *)UNK_021185a4.buffer[0];
            pDst->year = FUN_02069224(RAW->a.date.year);
            pDst->month = FUN_02069224(RAW->a.date.month);
            pDst->day = FUN_02069224(RAW->a.date.day);
            pDst->week = FUN_02069434(pDst);
            break;
        }
        case 1: {
            RTCTime *pDst = (RTCTime *)UNK_021185a4.buffer[0];
            pDst->hour = FUN_02069224(RAW->a.time.hour);
            pDst->minute = FUN_02069224(RAW->a.time.minute);
            pDst->second = FUN_02069224(RAW->a.time.second);
            break;
        }
        case 2: {
            RTCDate *pDate = (RTCDate *)UNK_021185a4.buffer[0];
            RTCTime *pTime;
            pDate->year = FUN_02069224((*(u32 *)&RAW->a.date) & 0xff);
            pDate->month = FUN_02069224(RAW->a.date.month);
            pDate->day = FUN_02069224(RAW->a.date.day);
            pDate->week = FUN_02069434(pDate);
            pTime = (RTCTime *)UNK_021185a4.buffer[1];
            pTime->hour = FUN_02069224(RAW->a.time.hour);
            pTime->minute = FUN_02069224(RAW->a.time.minute);
            pTime->second = FUN_02069224(RAW->a.time.second);
            break;
        }
        case 6: {
            u32 *pDst = (u32 *)UNK_021185a4.buffer[0];
            switch (RAW->b.status2.int1_mode) {
            case 4:
                *pDst = 1;
                break;
            default:
                *pDst = 0;
                break;
            }
            break;
        }
        case 7: {
            u32 *pDst = (u32 *)UNK_021185a4.buffer[0];
            if (RAW->b.status2.int2_mode) {
                *pDst = 1;
            } else {
                *pDst = 0;
            }
            break;
        }
        case 8: {
            RTCAlarmParam *pDst = (RTCAlarmParam *)UNK_021185a4.buffer[0];
            pDst->week = RAW->b.alarm.week;
            pDst->hour = FUN_02069224(RAW->b.alarm.hour);
            pDst->minute = FUN_02069224(RAW->b.alarm.minute);
            pDst->enable = 0;
            if (RAW->b.alarm.we) {
                pDst->enable += 1;
            }
            if (RAW->b.alarm.he) {
                pDst->enable += 2;
            }
            if (RAW->b.alarm.me) {
                pDst->enable += 4;
            }
            break;
        }
        case 9:
            if (UNK_021185a4.index == 0) {
                if (*(u32 *)UNK_021185a4.buffer[0] == 1) {
                    if (RAW->b.status2.int1_mode != 4) {
                        UNK_021185a4.index++;
                        RAW->b.status2.int1_mode = 4;
                        if (!FUN_020692ec()) {
                            UNK_021185a4.index = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (RAW->b.status2.int1_mode != 0) {
                        UNK_021185a4.index++;
                        RAW->b.status2.int1_mode = 0;
                        if (!FUN_020692ec()) {
                            UNK_021185a4.index = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                UNK_021185a4.index = 0;
            }
            break;
        case 10:
            if (UNK_021185a4.index == 0) {
                if (*(u32 *)UNK_021185a4.buffer[0] == 1) {
                    if (RAW->b.status2.int2_mode == 0) {
                        UNK_021185a4.index++;
                        RAW->b.status2.int2_mode = 1;
                        if (!FUN_020692ec()) {
                            UNK_021185a4.index = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (RAW->b.status2.int2_mode != 0) {
                        UNK_021185a4.index++;
                        RAW->b.status2.int2_mode = 0;
                        if (!FUN_020692ec()) {
                            UNK_021185a4.index = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                UNK_021185a4.index = 0;
            }
            break;
        case 3:
        case 4:
        case 5:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        default:
            UNK_021185a4.index = 0;
            result = 4;
            break;
        }
    } else {
        UNK_021185a4.index = 0;
        switch (pxiResult) {
        case 1:
            result = 4;
            break;
        case 2:
            result = 5;
            break;
        case 3:
            result = 1;
            break;
        case 4:
        default:
            result = 6;
            break;
        }
    }

    if (UNK_021185a4.index != 0) {
        return;
    }
    if (UNK_021185a4.lock != 0) {
        UNK_021185a4.lock = 0;
    }
    if (UNK_021185a4.callback) {
        cb = UNK_021185a4.callback;
        UNK_021185a4.callback = 0;
        cb(result, UNK_021185a4.callbackArg);
    }
}
