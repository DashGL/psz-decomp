// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02129fd0 @ 0x02129fd0 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern void *FUN_02086e3c(void);
void *FUN_overlay_12__02129fd0(void) { return FUN_02086e3c(); }

// Caller/callee ABI evidence: No-input singleton getter86e3c loads211a530 pointer; caller212b9dc saves wrapper result then uses returned object fields.
