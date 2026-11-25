// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
extern const char D_021004a4[];
extern const char D_021004b0[];
extern const char D_021004b8[];
extern const char D_021004c0[];
extern const char D_021004c4[];
extern int FUN_020dedf8(char *, const char *, const char *);
extern char *FUN_02003fa8(int, const char *);
extern int FUN_02003c70(char *);
extern void FUN_020662b4(char *, int, const char *, int);
int FUN_020de820(char *a) {
    char buf[8];
    int v;
    if (FUN_020dedf8(a, D_021004a4, D_021004b0) != 0) {
        return 1;
    }
    v = FUN_02003c70(FUN_02003fa8(*(int *)(a + 0x19f8), D_021004b8) + 4);
    if (v != 0) {
        FUN_020662b4(buf, 7, D_021004c0, v);
        if (FUN_020dedf8(a, D_021004c4, buf) != 0) {
            return 1;
        }
    }
    return 0;
}
