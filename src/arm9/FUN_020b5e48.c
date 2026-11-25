// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020b5e48 @ 0x020b5e48 (0xc, thumb) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020b6568(void *, int);
int FUN_020b5e48(void *a0) { return FUN_020b6568(a0, 0); }

// Consumed-return ABI evidence: Actualov4:2120e1c stores result in stacknumericfield. Selectedcallee explicitly adds unsignedhalfword base and bytebonus, returning bounded integer.
