// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x158, exact bytes and relocation targets.
extern void FUN_020cb184(void *, void *, const void *);
extern void FUN_020cb1a0(void *, void *, int);
extern void FUN_020cb474(void *, int, void *, int *, int, const void *);
extern void FUN_020c7488(int, int);
extern void FUN_020c7478(int);
extern void FUN_020c7bec(void *);
extern void FUN_020ce7d0(void *, int);
extern void FUN_020cefb0(void *, void *);
extern int FUN_020cf928(void *, void (*)(void), int);
extern void FUN_020cc9c0(void);

extern const char DAT_020fda10[];
extern const char DAT_020fd8d4[];
extern const char DAT_020fda24[];

struct Node_ccaa0 {
    char pad[0x4c];
    struct Node_ccaa0 *next;
};

struct State_ccaa0 {
    char pad0[0x198];
    int f198;
    int f19c;
    int f1a0;
    char pad1[0x1f0 - 0x1a4];
    int f1f0;
    int f1f4;
    void *f1f8;
    char pad2[0x208 - 0x1fc];
    void *f208;
    char pad3[0x210 - 0x20c];
    void *f210;
    char pad4[0x5c4 - 0x214];
    int f5c4;
    char pad5[0x5d4 - 0x5c8];
    struct Node_ccaa0 *f5d4;
    char pad6[0x5e0 - 0x5d8];
    void *f5e0;
    char pad7[0x5f0 - 0x5e4];
    void *f5f0;
};

void FUN_020ccaa0(struct State_ccaa0 **p0, int p1) {
    struct State_ccaa0 *s = *p0;
    int st = s->f1f4;
    if (st == 4) {
        return;
    }
    if (st != 0) {
        int local_8;
        if (p1 != 0 && st == 3) {
            FUN_020cb184(p0, &s->f210, DAT_020fda10);
            FUN_020cb1a0(p0, &s->f210, s->f198);
            FUN_020cb184(p0, &s->f210, DAT_020fd8d4);
        }
        FUN_020cb474(p0, s->f1f0, &s->f210, &local_8, 1, DAT_020fda24);
        if (s->f1f0 != -1) {
            FUN_020c7488(s->f1f0, 2);
            FUN_020c7478(s->f1f0);
            s->f1f0 = -1;
        }
        s->f1f4 = 4;
        s->f19c = 0;
        s->f1a0 = 0;
    }
    FUN_020c7bec(s->f1f8);
    s->f1f8 = 0;
    FUN_020c7bec(s->f208);
    s->f208 = 0;
    FUN_020c7bec(s->f210);
    s->f210 = 0;
    FUN_020c7bec(s->f5e0);
    s->f5e0 = 0;
    FUN_020c7bec(s->f5f0);
    s->f5f0 = 0;
    while (s->f5c4 != 0) {
        FUN_020ce7d0(p0, s->f5c4);
    }
    s->f5c4 = 0;
    {
        struct Node_ccaa0 *curr = s->f5d4;
        while (curr != 0) {
            struct Node_ccaa0 * spot = curr;
            curr = curr->next;
            FUN_020cefb0(p0, spot);
        }
    }
    s->f5d4 = 0;
    while (!FUN_020cf928(p0, FUN_020cc9c0, 0)) {
    }
}
