// FUN_overlay_25__0219a838 @ 0x0219a838 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_25__0219a838 @ 0x0219a838 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve target position, advance parent on failure, then start child animation four.
 * Field identities remain provisional.
 */
extern int FUN_overlay_25__0219a3f0(void *,void *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_25__0219a838(unsigned int *p) {if(!FUN_overlay_25__0219a3f0((void *)p[2],p+3))FUN_02037924((void *)p[2]);FUN_02040c0c((void *)p[1],0,4,4096,0);}
