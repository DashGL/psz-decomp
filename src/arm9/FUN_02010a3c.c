// FUN_02010a3c @ 0x02010a3c (0x70, arm) - ported from FUN_0202b100 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02010a3c @ 0x0202b100 (0x70, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern u32 FUN_020683d4(void);
extern int FUN_02011b20(u32, int);
extern void FUN_02011ac0(u32, int);
extern void FUN_02010b3c(int);
extern void FUN_020683e8(u32);

void FUN_02010a3c(u32 a0, int a1) {
    u32 s = FUN_020683d4();
    int p = FUN_02011b20(a0, 0);
    while (p != 0) {
        int next = FUN_02011b20(a0, p);
        if (*(int *)(p + 8) == a1) {
            FUN_02011ac0(a0, p);
            FUN_02010b3c(p);
        }
        p = next;
    }
    FUN_020683e8(s);
}
