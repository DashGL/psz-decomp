// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02120758 @ 0x02120758 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_02027fe4(int,int);
int FUN_overlay_15__02120758(int family,int type,int unused_protocol) { return FUN_02027fe4(family,type); }

// Caller/callee ABI evidence: Wireless caller explicitly supplies family2/type2/protocol0 and stores/tests returned socket; resident27fe4 consumes firsttwo and returns socket status. Third prepared position ignored.
