// FUN_overlay_17__02120f68 @ 0x02120f68 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120f68 @ 0x02120f68 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Query state, notify optional child when ready and record ready flag.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern void FUN_overlay_17__02123d6c(void *,int);
int FUN_overlay_17__02120f68(unsigned int *p) {int result=FUN_02087254(FUN_02086e3c());if(result==1) {if(p[0])FUN_overlay_17__02123d6c((void *)p[0],1);p[15]=1;}return result;}
