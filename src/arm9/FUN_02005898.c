// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// Consumed return contract: notes/reference/resume2-upper-20261112/lower-return-proof.json
// FUN_02005898 @ 0x02005898 (0x14, arm) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int FUN_020057d0(void *, int, int);
int FUN_02005898(void *a0) { return FUN_020057d0(a0, 0, 10); }
