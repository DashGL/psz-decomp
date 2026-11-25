// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0205dfa0 @ 0x0205dfa0 (0x14, arm) - ported from FUN_02012754 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0205dfa0 @ 0x205dfa0 (0x14, ARM) — one-argument forwarding tail call:
 * FUN_0205de00(0x211259c).
 *
 * Bytes: 04 c0 9f e5 / 04 00 9f e5 / 1c ff 2f e1 / b4 25 01 02 80 e6 0e 02
 *   ldr ip, [pc, #4] ; ldr r0, [pc, #4] ; bx ip ; pool FUN_0205de00 0x211259c
 *
 * Exact pure-C byte match across all 15 non-dsi builds (1.2/* and 2.0/*) with
 * clean relocation on the +0x0c pool slot.
 */
typedef unsigned int u32;

extern unsigned int FUN_0205de00(u32 a0);

unsigned int FUN_0205dfa0(void) { return FUN_0205de00(0x211259c);
}

// Consumed-return ABI evidence: Actualov15:21370c4 stores returnedmask immediately; helper205de00 capturesLDRH originalmask, clears flags, and explicitly MOVr0,r4 before return.
