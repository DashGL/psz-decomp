// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_17__0212412c @ 0x0212412c (0x2, thumb) - auto-matched by tools/templates.py [empty] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
void FUN_overlay_17__0212412c(void *unused_receiver)
{
}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
