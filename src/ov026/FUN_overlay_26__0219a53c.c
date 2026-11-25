// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x4, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_26__0219a53c @ 0x0219a53c (0x4, thumb) - auto-matched by tools/templates.py [ret_const] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
int FUN_overlay_26__0219a53c(void *unused_receiver)
{
    return 0;
}

// Caller/callee ABI evidence: Caller219ae48 explicitly MOV r0,r4 at219ae80 beforecall; predicate returns constant0 and ignores prepared receiver.
