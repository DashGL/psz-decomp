// FUN_overlay_22__0219ace0 @ 0x0219ace0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ace0 @ 0x0219ace0 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate owner slot if absent using incoming values and report attempt.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02072650(void *,unsigned int,unsigned int,unsigned int);
int FUN_overlay_22__0219ace0(unsigned int *p,unsigned int a,unsigned int b) { if(p[21]==*(unsigned int *)0x020ed0a0) { p[21]=FUN_02072650((void *)p[1],a,0,b); return 1; } return 0; }
