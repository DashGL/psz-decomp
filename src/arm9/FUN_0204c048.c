// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
extern void FUN_0201d3bc(int, int);
extern void FUN_0206564c(void *, void *);
extern void FUN_02019784(void);
extern void *FUN_0204daa8(int);
extern void FUN_02034680(void *, void *);
extern void FUN_0204260c(int, int, void *, void *);
extern void FUN_0204a8fc(void *, void *, void *, void *);
extern void FUN_020197fc(void *);
extern int DAT_021057d8[];
extern int DAT_0210579c[];

void FUN_0204c048(void *a0) {
    int sp60[3];
    int sp30[12];
    int sp0c[9];
    int sp00[3];
    void *r0;
    if (a0 == 0) {
        return;
    }
    r0 = *(void **)((char *)a0 + 0x30);
    if (r0 == 0) {
        return;
    }
    {
        int r0_v = *(int *)((char *)r0 + 0x1c);
        int r1 = *(int *)((char *)a0 + 0xa8);
        if (r1 >= 0) {
            FUN_0201d3bc(r0_v, r1);
        }
    }
    if (*(int *)((char *)a0 + 0xe4) & 0x100000) {
        FUN_0206564c((char *)a0 + 0x70, DAT_021057d8);
        DAT_0210579c[0x1f] &= ~0xa4;
        FUN_02019784();
    }
    if (*(int *)((char *)a0 + 0xe4) & 0x02000000) {
        void *r1 = FUN_0204daa8(*(int *)((char *)a0 + 0xe8));
        if (r1 != 0) {
            int r2 = *(int *)((char *)a0 + 0x98);
            if (r2 == -1) {
                FUN_02034680(sp60, (char *)r1 + 0x9c);
                sp60[0] += *(int *)((char *)a0 + 0x5c);
                sp60[1] += *(int *)((char *)a0 + 0x60);
                sp60[2] += *(int *)((char *)a0 + 0x64);
            } else if (*(int *)((char *)r1 + 0x8c) != 0) {
                FUN_0204260c(*(int *)((char *)r1 + 0x8c), r2, sp30, sp0c);
                FUN_0204a8fc(sp00, sp30, sp0c, (char *)a0 + 0x5c);
                sp60[0] = sp00[0];
                sp60[1] = sp00[1];
                sp60[2] = sp00[2];
            }
            FUN_020197fc(sp60);
            FUN_02019784();
        }
    }
}
