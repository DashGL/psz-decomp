// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *DAT_021181a0[];
extern int FUN_020683d4(void);
extern void FUN_0206732c(void *, void *);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);

void FUN_0206719c(void *a) {
    int s = FUN_020683d4();
    void *cur = DAT_021181a0[1];
    while (1) {
        void *owner = *(void **)((char *)a + 8);
        if (owner == 0) {
            *(void **)((char *)a + 8) = cur;
            *(int *)((char *)a + 0xc) += 1;
            FUN_0206732c(cur, a);
            break;
        }
        if (owner == cur) {
            *(int *)((char *)a + 0xc) += 1;
            break;
        }
        *(void **)((char *)cur + 0x84) = a;
        FUN_020669dc(a);
        *(void **)((char *)cur + 0x84) = 0;
    }
    FUN_020683e8(s);
}
