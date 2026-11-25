// FUN_020ba768 @ 0x020ba768 (0x1c, thumb) - ported from FUN_020ab388 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020ba768 @ 0x020ab388, Thumb, true size 0x1c (recorded 0x1c).
 * Guarded teardown kick: v = *(int *)(p+0x14); if v != 0:
 * r = FUN_020ba4cc(); if (r != 0) FUN_02066c68(r); FUN_020ba6f8(v).
 * SEMANTIC PROOF (Ghidra caller view lies): FUN_02066c68's arg is
 * FUN_020ba4cc()'s RETURN VALUE, not v — target has NO arg setup before
 * the blx 2d1a8 (r0 passthrough), and 2d1a8's own body consumes param_1
 * (uVar1 = DAT_0202d23c * param_1 >> 6). v1 passed v there -> +2 bytes
 * (extra mov) -> v2 exact. Ghidra's ab388 decompile drops the r0 chain.
 * Callee notes: ab0b4() = *(DAT_020ab0bc + 4) getter; ab2e4(v) un-
 * conditional (spawns/init on the record, sets state 1 or 3).
 * Called by banked FUN_020ab33c (state-1 cleanup guard).
 * MATCHED: v2, dsi/1.1 family-neutral 21/24 builds (1.2/base sizes out).
 * Relocs: BL ab0b4, BLX 2d1a8 (interworking), BL ab2e4 — all verified.
 * Found via the fresh shortlist.
 */
typedef unsigned char u8;
typedef int s32;

extern s32 FUN_020ba4cc(void);
extern void FUN_02066c68(s32 v);
extern void FUN_020ba6f8(s32 v);

void FUN_020ba768(u8 *p) {
    s32 v;
    s32 r;
    v = *(s32 *)(p + 0x14);
    if (v != 0) {
        r = FUN_020ba4cc();
        if (r != 0) {
            FUN_02066c68(r);
        }
        FUN_020ba6f8(v);
    }
}
