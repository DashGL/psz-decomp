// FUN_overlay_27__0219871c @ 0x0219871c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219871c @ 0x0219871c (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Set owner vector then apply mode.
 * Field identities remain provisional.
 */
extern void FUN_02043f30(void *,int,void *),FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_27__0219871c(void **p) {void *owner=p[1];FUN_02043f30(owner,0,(void *)0x020fc958);FUN_02040c0c(owner,0,4,0x1000,0);}
