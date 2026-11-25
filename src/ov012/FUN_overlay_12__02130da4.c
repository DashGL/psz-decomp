// FUN_overlay_12__02130da4 @ 0x02130da4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__02130da4 @ 0x02130da4 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Commit ready selection fields and refresh dependent receiver state.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02130928(void *);
int FUN_overlay_12__02130da4(int *p) {if(p[16]!=1)return 0;if(p[17]==0 && p[18]>0){p[31]=p[35];p[32]=p[36];FUN_overlay_12__02130928(p);return 1;}return 0;}
