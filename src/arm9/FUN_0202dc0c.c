// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x178, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_0202e554(int, int, int);
extern void FUN_020673d4(int, int);
extern int FUN_020540c0(void (*)(void), void *);
extern void FUN_0202e834(int);
extern void FUN_0202ed14(void);

struct S_02108c0c {
    char pad[0x2260];
    int f2260;
    char pad2[0x2280 - 0x2264];
    unsigned short f2280;
    unsigned short pad2282;
    int f2284;
    int f2288;
    unsigned short f228c;
};
extern struct S_02108c0c *DAT_02108c0c;

int FUN_0202dc0c(int p0, int p1, int p2) {
    int r4 = FUN_020683d4();
    if (DAT_02108c0c == 0) {
        FUN_020683e8(r4);
        return 1;
    }
    switch (DAT_02108c0c->f2260) {
    case 5:
        FUN_0202e554(p0, p1, p2);
        FUN_020683e8(r4);
        return 2;
    case 6:
        FUN_0202e554(p0, p1, p2);
        FUN_020683e8(r4);
        return 0;
    default:
        FUN_020683e8(r4);
        return 1;
    case 3:
        FUN_0202e554(p0, p1, p2);
        FUN_020673d4(DAT_02108c0c->f2288, DAT_02108c0c->f228c);
        DAT_02108c0c->f2284++;
        switch (FUN_020540c0(FUN_0202ed14, &DAT_02108c0c->f2288)) {
        case 2:
            FUN_0202e834(5);
            DAT_02108c0c->f2280 = 3;
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
