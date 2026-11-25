// FUN_overlay_25__021998ac @ 0x021998ac (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_25__021998ac @ 0x021998ac (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Reset dispatch table, release valid handles and destroy base.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,int);
extern void FUN_02072724(void *,int);
extern void *FUN_02035518(void *);
int *FUN_overlay_25__021998ac(int *p) {p[0]=0x0219ae34;if(p[58]!=-1)FUN_02075068(p,p[58]);if(p[57]!=-1)FUN_02072724(p,p[57]);FUN_02035518(p);return p;}
