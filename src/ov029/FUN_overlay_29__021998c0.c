// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_29__021998c0 @ 0x021998c0
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219bd54[];
/* USA ROM reconstruction, 2026-11-05. Game state/geometry initialization.
 * Full behavior and ABI: notes/sessions/coverage-overlays-2026-11-05-batch379.md.
 */
extern int FUN_overlay_29__02199bb8(void *);extern void FUN_overlay_29__02199a8c(void *);extern void FUN_overlay_29__02199950(void *);
void FUN_overlay_29__021998c0(int *self) { self[26]|=D_0219bd54[2]!=-1;if(FUN_overlay_29__02199bb8(self)==1)FUN_overlay_29__02199a8c(self);else FUN_overlay_29__02199950(self); }
