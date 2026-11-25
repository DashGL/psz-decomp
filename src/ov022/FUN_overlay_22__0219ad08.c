// FUN_overlay_22__0219ad08 @ 0x0219ad08 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ad08 @ 0x0219ad08 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Update two slot fields if owner slot is not default; report whether update requested.
 * Field identities remain provisional.
 */
extern void FUN_02072760(void *,unsigned int,unsigned int,unsigned int);
int FUN_overlay_22__0219ad08(unsigned int *p,unsigned int a,unsigned int b) { if(p[21]!=*(unsigned int *)0x020ed0a0) { FUN_02072760((void *)p[1],p[21],a,b); return 1; } return 0; }
