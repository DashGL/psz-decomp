// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02134888 @ 0x02134888 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_overlay_12__02134874(void);
int FUN_overlay_12__02134888(void) { return FUN_overlay_12__02134874(); }

// Caller/callee ABI evidence: Actual callee34874 explicitly returns boolean73434!=0; menu212a8d0 tests return immediately. No input prepared or consumed.
