// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    int f8[3];
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
} G_d5d84;
extern G_d5d84 DAT_0211d744;
extern const char DAT_020feb44[];
extern const char DAT_020feb60[];
extern const char DAT_020feb7c[];
extern int FUN_020d5d5c(int, const char *);
int FUN_020d5d84(void) {
    if (DAT_0211d744.f28 == 0) {
        DAT_0211d744.f28 = FUN_020d5d5c(DAT_0211d744.f4, DAT_020feb44);
    }
    if (DAT_0211d744.f24 == 0) {
        DAT_0211d744.f24 = FUN_020d5d5c(DAT_0211d744.f18, DAT_020feb60);
    }
    if (DAT_0211d744.f20 == 0) {
        DAT_0211d744.f20 = FUN_020d5d5c(DAT_0211d744.f14, DAT_020feb7c);
    }
    if (DAT_0211d744.f28 == 0 || DAT_0211d744.f24 == 0 || DAT_0211d744.f20 == 0) {
        return 0;
    }
    return 1;
}
