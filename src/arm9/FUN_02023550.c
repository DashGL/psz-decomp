// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
extern void *FUN_02022c18(void *, void *, int);
extern void FUN_02022d90(void *, int);
extern void FUN_02066a94(void *);
extern void FUN_02022da4(void *, int);
extern void FUN_02022db8(void *, void *, int, int);

void FUN_02023550(void *a0, void *a1, int a2) {
    void *r4 = FUN_02022c18(a0, a1, a2);
    if (r4 == 0) {
        return;
    }
    switch (*(unsigned char *)((char *)r4 + 8)) {
    case 7:
        *(int *)((char *)r4 + 0x24) += 1;
        FUN_02022d90(r4, 0);
        *(unsigned char *)((char *)r4 + 8) = 9;
        break;
    case 8:
        *(int *)((char *)r4 + 0x24) += 1;
        FUN_02022d90(r4, 0);
        *(unsigned char *)((char *)r4 + 8) = 0;
        if (*(int *)((char *)r4 + 4) == 2) {
            *(int *)((char *)r4 + 4) = 0;
            FUN_02066a94(*(void **)r4);
        }
        break;
    case 4:
        *(int *)((char *)r4 + 0x24) += 1;
        FUN_02022da4(r4, 0);
        *(unsigned char *)((char *)r4 + 8) = 6;
        break;
    default:
        FUN_02022db8(a0, a1, a2, 0);
        break;
    }
}
