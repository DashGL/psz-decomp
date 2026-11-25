// FUN_overlay_17__02120d48 @ 0x02120d48 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120d48 @ 0x02120d48 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Forward all four inputs to optional child action and conditionally increment script threshold.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__02121aac(void *,unsigned int,unsigned int,unsigned int);
extern void FUN_overlay_17__02123d6c(void *,int);
void FUN_overlay_17__02120d48(void **p,unsigned int a,unsigned int b,unsigned int flags) {if(p[3])FUN_overlay_17__02121aac(p[3],a,b,flags);if(!(flags&8)&&p[0])FUN_overlay_17__02123d6c(p[0],1);}
