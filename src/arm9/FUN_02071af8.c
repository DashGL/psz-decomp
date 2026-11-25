// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02077f3c(void);
extern void FUN_02078064(int);
extern int FUN_020780b0(int);
extern void FUN_020144f0(void);
extern void FUN_02071d18(void *, void *);
extern void FUN_02071cbc(void *, void *);
extern void FUN_02071eb0(void *, void *);
extern void FUN_02071f6c(void *, void *);
extern void FUN_02071fc8(void *, void *);
extern void FUN_02071e18(void *, void *);
extern void FUN_02072020(void *, void *);
extern void FUN_02071d68(void *, void *);
extern void FUN_02071bcc(void *, void *);
extern void FUN_02071948(void *);
extern void FUN_02014714(void);

void FUN_02071af8(void *a0) {
    int r6;
    if (*(int *)((char *)a0 + 0x280) == -1) {
        FUN_02078064(FUN_02077f3c());
        *(int *)((char *)a0 + 0x280) = FUN_020780b0(FUN_02077f3c());
        *(int *)((char *)a0 + 0x284) = 1;
    }
    FUN_020144f0();
    for (r6 = 0x13; r6 >= 0; r6--) {
        void *r4 = (char *)a0 + (r6 << 5);
        int r0 = *(int *)r4;
        if (r0 != -1) {
            switch (r0) {
            case 4:
                FUN_02071d18(a0, r4);
                break;
            case 5:
                FUN_02071cbc(a0, r4);
                break;
            case 8:
                FUN_02071eb0(a0, r4);
                break;
            case 6:
                FUN_02071f6c(a0, r4);
                break;
            case 7:
                FUN_02071fc8(a0, r4);
                break;
            case 9:
                FUN_02071e18(a0, r4);
                break;
            case 10:
                FUN_02072020(a0, r4);
                break;
            default:
                FUN_02071d68(a0, r4);
                break;
            }
            FUN_02071bcc(a0, r4);
            *(int *)((char *)r4 + 0x14) -= 1;
        }
        if (*(int *)((char *)r4 + 0x14) <= 0) {
            FUN_02071948(r4);
        }
    }
    FUN_02014714();
}
