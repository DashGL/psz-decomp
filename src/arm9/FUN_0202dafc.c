// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02053cd4(void *);
extern void FUN_0202e834(int);
extern void *DAT_02108c0c;
extern char DAT_0202ea58[];

int FUN_0202dafc(void) {
    int r4 = FUN_020683d4();
    void *r1 = DAT_02108c0c;
    if (r1 == 0) {
        FUN_020683e8(r4);
        return 1;
    }
    switch (*(int *)((char *)r1 + 0x2260)) {
    case 4:
        FUN_020683e8(r4);
        return 2;
    case 1:
        FUN_020683e8(r4);
        return 0;
    default:
        FUN_020683e8(r4);
        return 1;
    case 3:
        switch (FUN_02053cd4(DAT_0202ea58)) {
        case 2:
            FUN_0202e834(4);
            *(short *)((char *)DAT_02108c0c + 0x2280) = 2;
            break;
        case 8:
            FUN_020683e8(r4);
            return 4;
        case 3:
        default:
            FUN_0202e834(0xb);
            FUN_020683e8(r4);
            return 7;
        }
        FUN_020683e8(r4);
        return 3;
    }
}
