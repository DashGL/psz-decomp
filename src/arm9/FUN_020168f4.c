// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02013464(void *, int);
extern int FUN_0201345c(void *, int);
extern int FUN_020134b4(void *, int);
extern int FUN_020134a8(void *, int);
extern int *DAT_02105718;

static inline void set_vec(int x, int y, int z) {
    *(volatile int *)0x04000470 = x;
    *(volatile int *)0x04000470 = y;
    *(volatile int *)0x04000470 = z;
}

void FUN_020168f4(int *arg0) {
    int v5;
    DAT_02105718 = arg0;
    v5 = ((int *)arg0[0])[5];
    if (v5 == 0) {
        int *sub;
        void *p8;
        void *pc;
        *(volatile int *)0x04000440 = 0;
        *(volatile int *)0x04000444 = 0;
        sub = (int *)arg0[0];
        set_vec(-sub[0], -sub[1], 0);
        *(volatile int *)0x04000440 = 1;
        p8 = (void *)DAT_02105718[2];
        arg0[5] = FUN_02013464(p8, 0) ? FUN_0201345c(p8, 0) : 0;
        pc = (void *)DAT_02105718[3];
        arg0[6] = FUN_020134b4(pc, 0) ? FUN_020134a8(pc, 0) : 0;
    } else {
        int *p8 = (int *)arg0[2];
        unsigned int r;
        if (FUN_02013464(p8, v5) == 0) {
            r = 0;
        } else {
            unsigned int v = FUN_0201345c(p8, v5);
            r = v >> (((p8[8] & 0x700000) >> 20) + 5);
        }
        DAT_02105718[4] = r;
    }
}
