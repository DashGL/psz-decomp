// FUN_overlay_30__0219a340 @ 0x0219a340 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a340 @ 0x0219a340 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Disable actor component, release child handles and reset child descriptor.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02072724(void *,int);
extern void FUN_02075068(void *,int);
extern void FUN_overlay_30__02199edc(void *);
void FUN_overlay_30__0219a340(unsigned int *p) {int *child=(int *)p[53];FUN_02043ea4(p,3,0);FUN_02072724(p,child[8]);FUN_02075068(p,child[12]);FUN_overlay_30__02199edc(child);}
