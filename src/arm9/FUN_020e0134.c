// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x174, exact bytes and relocation targets.
extern unsigned int FUN_02003c70(const char *);
extern int FUN_02068c9c(void *, void *);
extern long long FUN_020693d0(void *, void *);
extern char *FUN_02003c8c(char *, const char *);
extern int FUN_02005898(const char *);
extern int FUN_02003e24(const char *, const char *);

extern const char DAT_021008e4[];
extern int DAT_02101db0;
extern const char *DAT_021008b4[];

struct S_0211dc78 {
    int f0;
    long long f4;
    long long fc;
};
extern struct S_0211dc78 DAT_0211dc78;

struct RTCDate_e0134 {
    int f0;
    unsigned int f4;
    int f8;
    int fc;
};

struct RTCTime_e0134 {
    int f0;
    unsigned int f4;
    int f8;
};

int FUN_020e0134(const char *p0) {
    struct RTCDate_e0134 sp34;
    struct RTCTime_e0134 sp28;
    char sp8[0x20];
    long long t1;
    long long t2;
    int i;

    if (FUN_02003c70(p0) == FUN_02003c70(DAT_021008e4) &&
        p0[7] == ' ' && p0[11] == ' ' && p0[16] == ' ' &&
        p0[19] == ':' && p0[22] == ':' && p0[25] == ' ' &&
        FUN_02068c9c(&sp34, &sp28) == 0) {
        t1 = FUN_020693d0(&sp34, &sp28);
        if (t1 != -1LL) {
            FUN_02003c8c(sp8, p0);
            sp8[7] = 0;
            sp8[11] = 0;
            sp8[16] = 0;
            sp8[19] = 0;
            sp8[22] = 0;
            sp8[25] = 0;
            DAT_02101db0 = 0;
            sp34.f0 = FUN_02005898(&sp8[12]);
            if (DAT_02101db0 != 0x22) {
                sp34.f0 -= 2000;
                sp34.f4 = 13;
                for (i = 0; i < 12; i++) {
                    if (FUN_02003e24(DAT_021008b4[i], &sp8[8]) == 0) {
                        sp34.f4 = i + 1;
                        break;
                    }
                }
                if (sp34.f4 <= 12) {
                    DAT_02101db0 = 0;
                    sp34.f8 = FUN_02005898(&sp8[5]);
                    if (DAT_02101db0 != 0x22) {
                        DAT_02101db0 = 0;
                        sp28.f0 = FUN_02005898(&sp8[17]);
                        if (DAT_02101db0 != 0x22) {
                            DAT_02101db0 = 0;
                            sp28.f4 = FUN_02005898(&sp8[20]);
                            if (DAT_02101db0 != 0x22) {
                                DAT_02101db0 = 0;
                                sp28.f8 = FUN_02005898(&sp8[23]);
                                if (DAT_02101db0 != 0x22) {
                                    t2 = FUN_020693d0(&sp34, &sp28);
                                    if (t2 != -1LL) {
                                        DAT_0211dc78.fc = t1 - t2;
                                        DAT_0211dc78.f4 = t1;
                                        DAT_0211dc78.f0 = 1;
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
