// FUN_02068114 @ 0x02068114 (0x6c, arm) - ported from FUN_0202e668 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02068114 @ 0x0202e668 (0x6c, ARM), verified 2.0/base. */
typedef unsigned int u32;
typedef long long s64;
extern void FUN_02068728(void);
extern u32 FUN_020683d4(void);
extern s64 FUN_02067e0c(void);
extern void FUN_02067fe8(int *, s64);
extern void FUN_020683e8(u32);

void FUN_02068114(int *a0, s64 a1, int a3, int a4) {
    if (a0 == 0 || a0[0] != 0) {
        FUN_02068728();
    }
    u32 s = FUN_020683d4();
    a0[7] = 0;
    a0[8] = 0;
    a0[0] = a3;
    a0[1] = a4;
    FUN_02067fe8(a0, a1 + FUN_02067e0c());
    FUN_020683e8(s);
}
