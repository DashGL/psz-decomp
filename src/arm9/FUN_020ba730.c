// FUN_020ba730 @ 0x020ba730 (0x16, thumb) - ported from FUN_020ab33c [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020ba730 @ 0x020ab33c, Thumb, true size 0x16 (recorded 0x18 spans
 * the 2-byte inter-function pad; next fn FUN_020ba748 starts at +0x18).
 * State-1 cleanup guard: saves the state field *(int *)(p+0x20) BEFORE
 * calling FUN_020ba748(p) — that callee overwrites 0x20 to 4 at its tail
 * (str r0,[r4,#0x20] visible in its own body) — then runs FUN_020ba768(p)
 * iff the saved state == 1. Both callees unbanked, void, r0 dead at
 * return (mini-disasm proven; ab388 pushes r4 only).
 * MATCHED: first draft, dsi/1.1 (family-neutral 18/24 builds: all dsi +
 * all 2.0; 1.2 sizes out). Found via the scan-0921 queue.
 */
typedef unsigned char u8;
typedef int s32;
extern void FUN_020ba748(void *p);
extern void FUN_020ba768(void *p);

void FUN_020ba730(u8 *p) {
    s32 st;
    st = *(s32 *)(p + 0x20);
    FUN_020ba748(p);
    if (st == 1) {
        FUN_020ba768(p);
    }
}
