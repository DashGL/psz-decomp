// FUN_overlay_20__0219a0d4 @ 0x0219a0d4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219a0d4 @ 0x0219a0d4 (code 0x36, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Accept global category or match valid current actor identifier.
 * Field identities remain provisional.
 */
extern int FUN_02084be8(void *);
int FUN_overlay_20__0219a0d4(int *p) {int id;if(FUN_02084be8((void *)0x0211a51c))return 1;id=(*(int **)0x02108d04)[63];if(id!=-1)return id==p[48];return 0;}
