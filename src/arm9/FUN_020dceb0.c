// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct {
    u32 valid;       // +0x00 (state +0x0c)
    u16 signal;      // +0x04 (state +0x10)
    u8 name1[0x20];  // +0x06 (state +0x12)
    u8 info[0x24];   // +0x26 (state +0x32)
    u8 name2[0x21];  // +0x4a (state +0x56)
    u8 tier;         // +0x6b (state +0x77)
    u8 flags;        // +0x6c (state +0x78)
    u8 pad[0x0b];    // +0x6d..0x77
} DiscRecord;        // size = 0x78

typedef struct {
    u8 *dst;             // +0x00
    u64 startTick;       // +0x04
    DiscRecord rec[16];  // +0x0c .. +0x78b
    int bestIdx;         // +0x78c
} DiscState;

typedef struct {
    DiscState *state;
    void *workspace;
    u32 phase;
} DiscMgr;

extern DiscMgr DAT_0211dbcc;
extern int FUN_020dcc44(void *, void (*)(void), int);
extern int FUN_020dccd4(void (*)(void));
extern int FUN_020dcd68(void (*)(void));
extern int FUN_020dcca4(void (*)(void));
extern void FUN_020dd118(void);
extern void FUN_020dd124(void);
extern void FUN_020dd130(void);
extern void FUN_020dd13c(void);
extern void FUN_020dd148(void);
extern u64 FUN_02067e0c(void);
extern int FUN_020dce04(void *);
extern int FUN_020dd0fc(const void *);
extern void FUN_02065774(const void *, void *, unsigned int);

int FUN_020dceb0(void) {
    int ret;
    int i;
    unsigned int strongest;

    if (DAT_0211dbcc.workspace == 0 || DAT_0211dbcc.state == 0) {
        return 3;
    }
    ret = 1;
    switch (DAT_0211dbcc.phase) {
    case 0:
        DAT_0211dbcc.phase = 1;
        if (FUN_020dcc44(DAT_0211dbcc.workspace, FUN_020dd118, 0) != 0) {
            DAT_0211dbcc.phase = 11;
        }
        break;
    case 2:
        DAT_0211dbcc.phase = 3;
        if (FUN_020dccd4(FUN_020dd124) == 0) {
            if (DAT_0211dbcc.state->startTick == 0) {
                DAT_0211dbcc.state->startTick = FUN_02067e0c();
            }
        } else {
            DAT_0211dbcc.phase = 10;
        }
        break;
    case 4:
        if (((FUN_02067e0c() - DAT_0211dbcc.state->startTick) << 6) / 0x82ea < 3000) {
            DAT_0211dbcc.phase = 2;
        } else {
            DAT_0211dbcc.phase = 5;
        }
        break;
    case 5:
        DAT_0211dbcc.phase = 6;
        if (FUN_020dcd68(FUN_020dd130) != 0) {
            DAT_0211dbcc.phase = 10;
        }
        break;
    case 7:
        if (FUN_020dce04(DAT_0211dbcc.state->rec) != 0) {
            DAT_0211dbcc.phase = 10;
        }
        i = 0;
        DAT_0211dbcc.state->bestIdx = -1;
        strongest = 0;
        for (; i < 16; ++i) {
            if (DAT_0211dbcc.state->rec[i].valid != 0
                && (DAT_0211dbcc.state->rec[i].flags & 2) != 0
                && DAT_0211dbcc.state->rec[i].tier <= 3
                && FUN_020dd0fc(DAT_0211dbcc.state->rec[i].info) != 0) {
                if (DAT_0211dbcc.state->rec[i].signal >= strongest) {
                    DAT_0211dbcc.state->bestIdx = i;
                    strongest = DAT_0211dbcc.state->rec[i].signal;
                }
            }
        }
        DAT_0211dbcc.phase = 8;
        if (FUN_020dcca4(FUN_020dd13c) != 0) {
            DAT_0211dbcc.phase = 11;
        }
        break;
    case 9:
        if (DAT_0211dbcc.state->bestIdx >= 0) {
            FUN_02065774(DAT_0211dbcc.state->rec[DAT_0211dbcc.state->bestIdx].name1, DAT_0211dbcc.state->dst, 32);
            FUN_02065774(DAT_0211dbcc.state->rec[DAT_0211dbcc.state->bestIdx].name2, DAT_0211dbcc.state->dst + 32, 32);
            *(u32 *)(DAT_0211dbcc.state->dst + 0x40) = DAT_0211dbcc.state->rec[DAT_0211dbcc.state->bestIdx].tier;
            FUN_02065774(DAT_0211dbcc.state->rec[DAT_0211dbcc.state->bestIdx].info, DAT_0211dbcc.state->dst + 0x44, 10);
            ret = 2;
        } else {
            DAT_0211dbcc.phase = 11;
        }
        break;
    case 10:
        DAT_0211dbcc.phase = 8;
        if (FUN_020dcca4(FUN_020dd148) != 0) {
            DAT_0211dbcc.phase = 11;
        }
        break;
    case 11:
        ret = 3;
        break;
    }
    return ret;
}
