// FUN_overlay_26__0219afa0 @ 0x0219afa0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219afa0 @ 0x0219afa0 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Count completed child animation ticks and advance parent once threshold is exceeded.
 * Field identities remain provisional.
 */
extern int FUN_02041474(void *,int);
extern void FUN_02037924(void *);
void FUN_overlay_26__0219afa0(unsigned int *p) {if(FUN_02041474((void *)p[1],0)){p[3]++;if(p[3]>p[4])FUN_02037924((void *)p[2]);}}
