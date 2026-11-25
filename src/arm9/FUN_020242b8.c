// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0;
    int f4;
    char pad[0x38];
    int f40;
    int f44;
} Obj;
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);
int FUN_020242b8(int *a, Obj *b) {
    int r6, r7;
    r7 = FUN_020683d4();
    while ((r6 = b->f44) == 0) {
        b->f4 = 3;
        FUN_020669dc(0);
    }
    FUN_020683e8(r7);
    *a = r6;
    return b->f40;
}
