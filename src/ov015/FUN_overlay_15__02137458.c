// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02137458 @ 0x02137458 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern void FUN_overlay_15__02137460(int,void *);
void FUN_overlay_15__02137458(int bank,void *task) { FUN_overlay_15__02137460(bank,task); }

// Caller/callee ABI evidence: Target37460 consumes bank r0 and task r1, frees task payload and returns task to selected bank; caller36100 explicitly stages both.
