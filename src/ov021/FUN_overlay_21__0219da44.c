// FUN_overlay_21__0219da44 @ 0x0219da44 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219da44 @ 0x0219da44 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Advance parent according to readiness or unsigned timeout and increment timer.
 * Field identities remain provisional.
 */
extern void FUN_02037924(void *);
void FUN_overlay_21__0219da44(unsigned int *p) {unsigned int *parent=(unsigned int *)p[2];if(parent[47]){parent[32]=16;FUN_02037924(parent);}else if(p[3]>60){parent[32]=0;FUN_02037924(parent);}p[3]++;}
