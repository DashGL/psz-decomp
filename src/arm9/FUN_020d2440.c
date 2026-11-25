// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020fe74c[];
extern const char DAT_020fe758[];
extern const char DAT_020fe764[];
extern const char DAT_020fe770[];
extern int FUN_02003f38(char *, const char *, int);
extern void FUN_020d2264(char *, int);
extern void FUN_020d22d4(char *, int);
extern void FUN_020d2334(char *, int);
extern void FUN_020d23d4(char *, int);

void FUN_020d2440(char *a, int b) {
    a[b] = 0;
    if (FUN_02003f38(a, DAT_020fe74c, 8) == 0) {
        FUN_020d2264(a, b);
    } else if (FUN_02003f38(a, DAT_020fe758, 9) == 0) {
        FUN_020d22d4(a, b);
    } else if (FUN_02003f38(a, DAT_020fe758, 9) == 0) {
        FUN_020d22d4(a, b);
    } else if (FUN_02003f38(a, DAT_020fe764, 8) == 0) {
        FUN_020d2334(a, b);
    } else if (FUN_02003f38(a, DAT_020fe770, 8) == 0) {
        FUN_020d23d4(a, b);
    }
}
