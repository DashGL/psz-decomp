// FUN_overlay_19__0219976c @ 0x0219976c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219976c @ 0x0219976c (code 0x46, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Release two valid handles and restore optional resource sentinel.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,int);
extern void FUN_02072724(void *,int);
void FUN_overlay_19__0219976c(int *p,void *owner) {int sentinel;if(p[12]!=-1){FUN_02075068(owner,p[12]);p[12]=-1;}if(p[13]!=-1){FUN_02075068(owner,p[13]);p[13]=-1;}sentinel=*(int *)0x020ed0a0;if(p[14]!=sentinel){FUN_02072724(owner,p[14]);p[14]=sentinel;}}
