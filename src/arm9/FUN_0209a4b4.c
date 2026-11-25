// FUN_0209a4b4 @ 0x0209a4b4 (0x1e, thumb) - ported from FUN_020713dc [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_0209a4b4 @ 0x020713dc, Thumb, true size 0x1e (recorded 0x20 spans
 * the 2-byte inter-function pad — the e98c/a4318 pad class; next fn
 * FUN_020713fc at +0x20).
 * Guarded entity validator with a MATERIALIZED both-arm bool select:
 * r = 0; if ent: ok = ((ent->f04 & 0x20) ? 1 : 0); if ok: r = ent.
 * The select survival spelling (0201649c/0201dbac class) is what keeps
 * the target's mov r1,#1 / add r1,r3,#0 arms + the cmp r1,#0 re-test —
 * a plain `if (flags & 0x20)` collapses the select (not the target).
 * Byte base u8* load-bearing: u32* base scales the +4 load to #0x10
 * (v1, single diff at +0x06).
 * Called by banked FUN_02072b0c (R0-CHAINED: a4318(T_021044f4, ent)
 * result feeds this directly).
 * MATCHED: v2 (byte base), family-neutral 19/24 builds (1.2 sizes out).
 * Reloc-free. Found via the fresh shortlist.
 */
typedef unsigned char u8;
typedef unsigned int u32;

u32 FUN_0209a4b4(u8 *ent) {
    u32 r;
    u32 ok;
    r = 0;
    if (ent != 0) {
        ok = (*(u32 *)(ent + 4) & 0x20) ? 1 : 0;
        if (ok != 0) {
            r = (u32)ent;
        }
    }
    return r;
}
