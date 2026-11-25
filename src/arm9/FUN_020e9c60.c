// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,s
struct Item {
    char pad[0x10];
    int f10;
    int f14;
    int f18;
    char f1c;
    char f1d;
    char pad2[0x12];
};

extern struct Item *DAT_0211e5e4;
extern int FUN_020e160c(int);
extern int FUN_020e9bf8(int);
extern unsigned int FUN_020e99a0(int);
extern void FUN_020e9d50(int, int, int);
extern void FUN_020e9dc8(int, int, int);
extern void FUN_020e9e58(int, int, int);
extern void FUN_020e056c(int, int);

void FUN_020e9c60(int a0, int r5, int r6) {
    int r4 = FUN_020e160c(a0);
    switch (FUN_020e9bf8(r4)) {
    case 0: {
        unsigned int v = FUN_020e99a0(r5);
        if (v >= 2 && v <= 4) {
            FUN_020e9d50(r4, r5, r6);
        }
        break;
    }
    case 1:
        FUN_020e9d50(r4, r5, r6);
        break;
    case 2:
        FUN_020e9dc8(r4, r5, r6);
        break;
    case 3:
        FUN_020e9e58(r4, r5, r6);
        break;
    case 4:
        DAT_0211e5e4[r4].f1d = 1;
        DAT_0211e5e4[r4].f10 = 0;
        DAT_0211e5e4[r4].f18 = 0;
        break;
    default:
        FUN_020e056c(6, -0x17d4a);
        break;
    }
}
