// flags: -O4,p
struct WlanCfg36 {
    void *buf;
    int unk4;
    unsigned short tgid;
    unsigned short unkA;
    unsigned char unkC[8];
    unsigned char name[8];
    unsigned char unk1C;
    unsigned char flag;
    unsigned char unk1E[2];
    unsigned char user[36];
};

struct Work {
    unsigned char pad0[0xf00];
    unsigned char buf[0x470];
    void *cb;
    struct WlanCfg36 cfg;
    unsigned short state;
    unsigned char pad1[0x7ce];
    unsigned long long tick;
    void *task;
};

extern struct Work *DAT_0213e8d4;
extern struct Work *DAT_a_0213e8d4;
extern const struct WlanCfg36 DAT_0213a6f8;
extern const unsigned char DAT_0213a6ec[];
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_overlay_15__02132af8(void *);
extern int FUN_overlay_15__02132a28(void);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *), int, int);
extern void FUN_overlay_15__02132d28(void *);
extern void FUN_overlay_15__021366dc(void *);

#pragma thumb off
extern unsigned long long FUN_02067e0c(void);
extern int FUN_02053d14(void *, void (*)(void *), int);
extern void FUN_020535e0(void *);
extern unsigned short FUN_02053980(void);
extern void FUN_02068510(void *);
extern void FUN_02065774(const void *, void *, int);
#pragma thumb on

int FUN_overlay_15__02132918(void *cb)
{
    unsigned short user[42];
    unsigned long long tick;

    DAT_0213e8d4 = (struct Work *)FUN_overlay_15__021366c4(0x1ba0, 0x20);
    DAT_0213e8d4->cb = cb;
    tick = FUN_02067e0c();
    DAT_0213e8d4->tick = tick;

    if (FUN_02053d14(*(struct Work * volatile *)&DAT_0213e8d4, FUN_overlay_15__02132af8, 3) == 2) {
        do {
            FUN_020535e0(&DAT_0213e8d4->state);
        } while (DAT_0213e8d4->state != 2);

        DAT_0213e8d4->cfg = DAT_0213a6f8;
        *(void * volatile *)&DAT_0213e8d4->cfg.buf = DAT_0213e8d4->buf;
        DAT_0213e8d4->cfg.tgid = FUN_02053980();
        FUN_02068510(user);
        FUN_02065774(DAT_0213a6ec, DAT_0213e8d4->cfg.name, 8);
        DAT_0213e8d4->cfg.flag = 1;
        FUN_02065774(&user[2], DAT_0213e8d4->cfg.user, user[13] * 2);
        if (FUN_overlay_15__02132a28()) {
            DAT_0213e8d4->task =
                FUN_overlay_15__021373d8(0, FUN_overlay_15__02132d28, 0, 0x78);
            return 1;
        }
    }
    FUN_overlay_15__021366dc(&DAT_a_0213e8d4);
    return 0;
}
