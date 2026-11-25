// FUN_overlay_26__0219865c @ 0x0219865c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219865c @ 0x0219865c (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Forward receiver and both live parameters to resident constructor, install derived table, return receiver.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_26__0219865c(unsigned int *self,unsigned int a,unsigned int b) { FUN_020352dc(self,a,b); self[0]=0x0219b388; return self; }
