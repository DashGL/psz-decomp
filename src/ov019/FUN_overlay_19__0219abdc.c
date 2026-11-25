// FUN_overlay_19__0219abdc @ 0x0219abdc (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219abdc @ 0x0219abdc (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Clear twelve-byte record then set two word sentinels.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);
int FUN_overlay_19__0219abdc(unsigned int *p) { FUN_02001540(p,0,12); p[1]=~0U; p[2]=~0U; return -1; }
