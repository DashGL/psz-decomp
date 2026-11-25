// FUN_02046b94 @ 0x02046b94 (0x24, thumb) - ported from FUN_02071014 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_02046b94 @ 0x02071014 (0x24, thumb) — leaf list-set-if-room:
 * guard *(obj+0x14) && idx in [0, FUN_020469d4(head)); store idx to the
 * head; return 1/0.
 * Matched 2026-10-02 (permuter-session respell): the FUN_020469d4 call
 * argument is the HEAD-POINTER VALUE *(u32 *)(obj + 0x14), NOT obj — the
 * target has no adds r0,r5 before the bl (its first field read IS the call
 * arg), which also un-hoists the idx home copy. The parked 'idx >= 0
 * tested first' hypothesis was a red herring.
 * 19/24 byte-exact (all 9 dsi + all 10 2.0); 1.2 family size-differs
 * (1.2-family branch/body class).
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_020469d4(u32 list);

u32 FUN_02046b94(u32 obj, int idx)
{
    if (*(u32 *)((u8 *)obj + 0x14) != 0) {
        int ix = idx;
        if (ix >= 0 && ix < (int)FUN_020469d4(*(u32 *)((u8 *)obj + 0x14))) {
            *(u32 *)*(u32 *)((u8 *)obj + 0x14) = (u32)ix;
            return 1;
        }
    }
    return 0;
}
