// FUN_overlay_24__0219a664 @ 0x0219a664 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219a664 @ 0x0219a664 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Select stored value, enable owner flag, and reset handle for mode three.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_24__0219a664(unsigned int *p,signed char *record) { FUN_02037910(p,p[14]);((unsigned int *)p[1])[54]=1;if(record[12]==3)p[18]=~0U; }
