// FUN_overlay_21__0219909c @ 0x0219909c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219909c @ 0x0219909c (code 0x3c, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Release completed handles in ten-entry array and restore sentinel.
 * Field identities remain provisional.
 */
extern int FUN_02075054(void *,int);
extern void FUN_02075068(void *,int);
void FUN_overlay_21__0219909c(int *p) {int sentinel=*(int *)0x020ed09c,i;for(i=0;i<10;i++){if(p[70+i]!=sentinel&&FUN_02075054(p,p[70+i])){FUN_02075068(p,p[70+i]);p[70+i]=sentinel;}}}
