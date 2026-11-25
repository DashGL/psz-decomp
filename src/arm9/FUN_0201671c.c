// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020164d8(void *);
extern void *DAT_02105718;

void FUN_0201671c(void *a0, void *a1) {
    void *r7 = DAT_02105718;
    unsigned short r8;
    for (r8 = 0; *(unsigned short *)a1 > r8; r8++) {
        unsigned short *r1;
        void (*cb)(void *, void *, int);
        *(int *)((char *)DAT_02105718 + 0x30) = 1;
        r1 = (unsigned short *)(*(int *)((char *)a1 + 4) + r8 * 6);
        *(unsigned short *)((char *)r7 + 0x38) = r1[0];
        *(unsigned short *)((char *)r7 + 0x3a) = r1[1];
        *(unsigned short *)((char *)r7 + 0x3c) = r1[2];
        cb = *(void (**)(void *, void *, int))((char *)a0 + 0x20);
        if (cb != 0) {
            cb(DAT_02105718, a1, r8);
        }
        if (*(int *)((char *)DAT_02105718 + 0x30) != 0) {
            FUN_020164d8((char *)r7 + 0x38);
        }
        cb = *(void (**)(void *, void *, int))((char *)a0 + 0x24);
        if (cb != 0) {
            cb(DAT_02105718, a1, r8);
        }
    }
}
