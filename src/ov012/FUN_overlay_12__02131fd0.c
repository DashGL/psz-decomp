// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02131fd0 @ 0x02131fd0 (0x8, thumb) - auto-matched by tools/templates.py [tailcall] (2026-11-04), verified via tools/match.py (word compare + verify_relocs).
extern int func_02131fd8(void *,int);
int FUN_overlay_12__02131fd0(void *self,int mode) { return func_02131fd8(self,mode); }

// Caller/callee ABI evidence: Raw2131fd8 saves receiver and mode, calls c2d94(mode,2,0), explicitly returns1/0; caller explicitly supplies mode. Interior target raw body retained separately.
