// FUN_0200e568 @ 0x0200e568 (0x70, arm) - ported from FUN_02028b98 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e568 @ 0x02028b98 (0x70, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern u32 FUN_020683d4(void);
extern void FUN_0200e46c(void *, int);
extern void FUN_020683e8(u32);
extern void FUN_02069650(u32, int, int, int);

struct S_02028b98 {
    char pad[0x24];
    int b0 : 1;
    int b1 : 1;
    char pad2[0x10];
    int f40;
    int f44;
    int f48;
    u32 f4c;
};

void FUN_0200e568(struct S_02028b98 *a0) {
    if (!a0->b1) {
        return;
    }
    while (a0->f40 != 0) {
        u32 s = FUN_020683d4();
        FUN_0200e46c(a0, 1);
        FUN_020683e8(s);
    }
    FUN_02069650(a0->f4c, 0, 1 << a0->f48, 0);
}
