// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,p

struct ItemC7EF4 {
    unsigned char pad0[0x24];
    void (*fn24)(int, int, int, int);
    unsigned char pad28[0x10];
    int arg38;
};

struct StateC7EF4 {
    int f0;
    int f4;
    void *f8;
    int fc;
    int f10;
    void (*fn14)(int, int, int, int);
    unsigned char pad18[0x14];
    int arg2c;
};

extern void FUN_020c7ea0(void);
extern struct StateC7EF4 *FUN_020c7e54(void);
extern int FUN_020c6e0c(void *);
extern struct ItemC7EF4 *FUN_020c6e10(void *, int);
extern int FUN_020d3730(void *);
extern int FUN_020d3734(void *);
extern int FUN_020c6f30(int, void *, void (*)(void), int, int);
extern void FUN_020c6eec(int, int);

void FUN_020c7ef4(void *self, int mode) {
    struct StateC7EF4 *st = FUN_020c7e54();
    int count;
    int i;
    int sp10[3];

    if ((unsigned int)(mode - 2) <= 1) {
        mode = 2;
    } else if (mode == 4) {
        mode = 3;
    }
    count = FUN_020c6e0c(st->f8);
    for (i = 0; i < count; i++) {
        struct ItemC7EF4 *it = FUN_020c6e10(st->f8, i);
        if (it->fn24 != 0) {
            int a0 = FUN_020d3730(self);
            int a1 = FUN_020d3734(self);
            it->fn24(a0, a1, mode, it->arg38);
        }
    }
    if (st->fn14 != 0) {
        int a0 = FUN_020d3730(self);
        int a1 = FUN_020d3734(self);
        st->fn14(a0, a1, mode, st->arg2c);
    }
    sp10[2] = (int)self;
    { int res = FUN_020c6f30(st->f4, sp10, FUN_020c7ea0, 0, 0); if (res != -1) {
        FUN_020c6eec(st->f4, res);
        }
    }
}
