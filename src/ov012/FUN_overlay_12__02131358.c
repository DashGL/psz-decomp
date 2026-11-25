// FUN_overlay_12__02131358 @ 0x02131358 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131358 @ 0x02131358 (code 0x26, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release shared state, clear singleton slot and destroy base/allocation.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131abc(void);
extern void FUN_overlay_12__0212c9a0(void);
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__02131358(unsigned int *p) {p[0]=0x0213e714;FUN_overlay_12__02131abc();FUN_overlay_12__0212c9a0();*(unsigned int *)0x0213f2d4=0;FUN_overlay_12__02131dd4(p);FUN_020ba940(p);return p;}
