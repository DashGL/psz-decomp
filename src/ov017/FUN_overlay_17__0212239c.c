// FUN_overlay_17__0212239c @ 0x0212239c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__0212239c @ 0x0212239c (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve clamped text index and suppress entries beginning with zero digit.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern signed char *FUN_0208efa8(void *,int,int,int);
signed char *FUN_overlay_17__0212239c(int *p,int index) {void *m;signed char *text;if(index<0)index=0;m=FUN_0208f068();if(!m)return 0;text=FUN_0208efa8(m,p[68],0,index);if(*text==48)return 0;return text;}
