// FUN_overlay_19__0219b6a4 @ 0x0219b6a4 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b6a4 @ 0x0219b6a4 (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Reject state seven and failed random selection, otherwise test directional threshold zero.
 * Field identities remain provisional.
 */
extern int FUN_02037208(void *,int);
extern int FUN_overlay_19__0219b6fc(void *,const int *);
int FUN_overlay_19__0219b6a4(unsigned int *p) {int threshold;if(((signed char *)p)[100]==7)return 0;if(FUN_02037208((void *)p[1],3))return 0;threshold=0;return FUN_overlay_19__0219b6fc(p,&threshold);}
