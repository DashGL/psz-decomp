// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_16__021202f8 @ 0x021202f8 (0xc, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern void *FUN_020ba8bc(unsigned int, int);
void *FUN_overlay_16__021202f8(unsigned int size) { return FUN_020ba8bc(size, 16); }

// Caller/callee ABI evidence: Actual allocator ba8bc returns allocated pointer; ARM wrapper211f554 forwards result and movie factory tests/stores it.
