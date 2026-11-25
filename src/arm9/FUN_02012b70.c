// FUN_02012b70 @ 0x02012b70 (0x48, arm) - ported from FUN_0201788c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02012b70 @ 0x0201788c (TRUE size 0x48 — recorded 0x90 spans a second,
 * Ghidra-unrecorded function at 020178d4 (now banked); batch-11 span rule).
 * Keyed search over a variable-stride record chain. CANONICAL for-loop —
 * CW4 peels the pre-test (i<count at i=0 -> cmp count,#0; bls door
 * [PEELED-LOOP-DOOR]) and the back edge re-enters at the body, bypassing
 * the door. Decl order follows the target's value-load order (p, count,
 * i=0); counter colors r3 (no push, returns via bx/bxeq). count preloaded:
 * no stores in the loop -> the u16 field read hoists legally. Match 19/24
 * (dsi/1.1 + all 2.0/*).
 */
typedef unsigned int u32;
typedef unsigned short u16;

int *FUN_02012b70(int *h, int key) {
    int *p = (int *)((int)h + *(u16 *)((int)h + 0xc));
    u16 count = *(u16 *)((int)h + 0xe);
    u16 i = 0;
    for (; i < count; i++) {
        if (*p == key)
            return p;
        p = (int *)((int)p + p[1]);
    }
    return 0;
}
