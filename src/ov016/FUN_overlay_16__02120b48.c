// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_16__02120b48 @ 0x02120b48 (0x2, thumb) - auto-matched by tools/templates.py [empty] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
void FUN_overlay_16__02120b48(void *unused_receiver)
{
}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
