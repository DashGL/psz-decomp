// FUN_overlay_19__02199cdc @ 0x02199cdc (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__02199cdc @ 0x02199cdc (code 0x3e, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Decrease effect lifetime and release handle and emit event when expired.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
extern void FUN_02037214(void *,int,int,void *,int);
void FUN_overlay_19__02199cdc(int *p,void *owner,int delta) {p[24]-=delta;if(p[24]<=0){int sentinel;p[9]=3;sentinel=*(int *)0x020ed0a0;if(p[14]!=sentinel){FUN_02072724(owner,p[14]);p[14]=sentinel;}FUN_02037214(owner,29,15,p+3,1);}}
