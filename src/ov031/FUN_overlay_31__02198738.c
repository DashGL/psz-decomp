// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_31__02198738 @ 0x02198738 (0x2, thumb) - auto-matched by tools/templates.py [empty] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
void FUN_overlay_31__02198738(void *receiver)
{
}

// Caller/callee ABI evidence: Destructor callers explicitly form receiver+240 before call; empty body ignores it. Return discarded, no pointer return invented.
