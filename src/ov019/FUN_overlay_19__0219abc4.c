// FUN_overlay_19__0219abc4 @ 0x0219abc4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219abc4 @ 0x0219abc4 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Clear record, set two word sentinels and return receiver.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);
void *FUN_overlay_19__0219abc4(unsigned int *p) { FUN_02001540(p,0,12); p[1]=~0U; p[2]=~0U; return p; }
