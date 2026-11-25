// FUN_020128a8 @ 0x020128a8 (0x20, arm) - ported from FUN_020175c4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_020128a8 @ 0x020175c4 (recorded 0x20, ARM) — live stride helper over
 * a u16-header object. p[1] (u16 at +2) is a flag word: bit0 selects the
 * element stride (16 vs 8 bytes); the base pointer is the SIGNED int word
 * at byte offset +4 (Ghidra's *(int*)(param_1+2) ushort-arithmetic view of
 * the same byte offset). Return base + p[0] * stride.
 *
 * Key spelling lever (proven, this file): the base word MUST be read
 * through a volatile-qualified access at EACH arm, i.e.
 * *(volatile int *)((u8 *)p + 4). A plain read is CSEd by MWCC into ONE
 * unconditional ldr [r0,#4] shared by both arms (7-word body, 0x1c), while the target
 * fuses the load into each conditional arm (ldrne/ldreq ... two loads,
 * 8-word body, 0x20). The volatile access-site spelling (levers.jsonl
 * volatile-access-site-pin family) suppresses the CSE and reproduces the
 * target exactly. Equivalent form ((volatile int *)p)[1] works too.
 *
 * Build sweep: MATCHES 19/24 — all nine dsi/* and all ten 2.0/* builds,
 * zero word mismatches, no relocations. The five 1.2-family builds
 * (1.2/base..sp4) emit their known structurally-different 0x24 per-arm
 * reload shape regardless of spelling — the same 999-size-sentinel class
 * documented on the banked FUN_0202d468 (their codegen differs from both
 * dsi and 2.0; not reachable by any spelling). -O4,s variant is
 * word-identical on the same 19 builds (kept at default -O4,p here).
 */
typedef unsigned short u16;
typedef unsigned char u8;

int FUN_020128a8(u16 *p)
{
    if (p[1] & 1)
        return *(volatile int *)((u8 *)p + 4) + (int)p[0] * 16;
    return *(volatile int *)((u8 *)p + 4) + (int)p[0] * 8;
}
