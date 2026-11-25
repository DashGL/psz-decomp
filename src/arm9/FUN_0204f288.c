// FUN_0204f288 @ 0x0204f288 (0x10, thumb) - ported from FUN_02069c10 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0204f288 - Init 3-call sequence (Thumb, recorded size 0x10). FUN_020a8fac(); FUN_020b3e78(); FUN_020b46f8() — the third callee is the interworking-veneer thunk into FUN_02067568, spelled at the veneer address per matching-style.
 *
 * verified: FUN_0204f288 @ 0x02069c10 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_020a8fac(void);
extern void FUN_020b3e78(void);
extern void FUN_020b46f8(void);

void FUN_0204f288(void)
{
    FUN_020a8fac();
    FUN_020b3e78();
    FUN_020b46f8();
}
