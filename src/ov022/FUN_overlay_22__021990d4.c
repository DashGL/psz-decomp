// FUN_overlay_22__021990d4 @ 0x021990d4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__021990d4 @ 0x021990d4 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay22 ROM reconstruction, 2026-11-05.
 * Message snapshot or controller state transition.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch350.md.
 * Game field identities remain provisional.
 */
extern void FUN_overlay_22__021981cc(void *,int,int);extern int FUN_overlay_22__0219a130(void *);
void FUN_overlay_22__021990d4(signed char *self) { if(!self[0x136]){self[0x136]=1;FUN_overlay_22__021981cc(self,3,0);}else if(FUN_overlay_22__0219a130(self)){FUN_overlay_22__021981cc(self,3,0);} }
