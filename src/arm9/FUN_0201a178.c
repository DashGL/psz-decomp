// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065510(int, void *, int);
extern void FUN_0201a110(void *, int);
extern void FUN_02019f74(void *, void *);
extern void *DAT_02105980;

void FUN_0201a178(int *a0) {
    char sp00[0x17c];
    if ((*a0 & 0x10) == 0x10) {
        FUN_02065510(0, (char *)a0 + 0x3c, 4);
        FUN_02065510(0, (char *)a0 + 0x40, 4);
        FUN_02065510(0, (char *)a0 + 0x44, 4);
        if (a0[2] != 0) {
            FUN_0201a110((char *)a0 + 0x3c, a0[2]);
        }
        if (a0[4] != 0) {
            FUN_0201a110((char *)a0 + 0x40, a0[4]);
        }
        if (a0[6] != 0) {
            FUN_0201a110((char *)a0 + 0x44, a0[6]);
        }
        *a0 &= ~0x10;
    }
    if (DAT_02105980 != 0) {
        FUN_02019f74(DAT_02105980, a0);
        return;
    }
    DAT_02105980 = sp00;
    FUN_02019f74(sp00, a0);
    DAT_02105980 = 0;
}
