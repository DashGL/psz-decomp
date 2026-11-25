// FUN_020697a4 @ 0x020697a4 (0x4c, arm) - ported from FUN_020309ac [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_020697a4 @ 0x020309ac (0x4c, arm) — message-send dispatcher wrapper
 * (FUN_020698e8, opcode 0x0e) packed-bit composition.
 * Matched 2026-10-02 (permuter-session respell): the parked w1 shift/slot
 * binding was INVERTED — winning spelling materializes lo = p7 << 24 FIRST:
 * MWCC emits the chained-OR's SECOND shift term as the early-pinned product
 * (lsl r1,ip,#0x16 fed by the [sp+0x1c] load) and fuses the FIRST term late
 * (orr r3,r1,r3,lsl#24 fed by [sp+0x18]). Lever: shift-term-materialization
 * order in chained ORs (banked in levers.jsonl).
 * 19/24 byte-exact (all 9 dsi + all 10 2.0); 1.2 family size-differs
 * (branch-range class). Single reloc FUN_020698e8 verified.
 */
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_020697a4(u32 a0, u32 a1, u32 a2, u32 a3, u32 p5, u32 p6, u32 p7, u32 p8, u32 p9, u32 p10) {
    u32 lo = p7 << 24;
    u32 w1 = lo | (p8 << 22) | p6;
    return FUN_020698e8(14, (void *)(a0 | (p9 << 16)), (void *)a2, (int)w1,
        (int)((a3 << 26) | (a1 << 24) | (p10 << 16) | p5));
}
