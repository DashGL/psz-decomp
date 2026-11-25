// FUN_overlay_12__021308a8 @ 0x021308a8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__021308a8 @ 0x021308a8 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Restore receiver table, deactivate global display, clean base and release storage.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c9a0(void);
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__021308a8(unsigned int *p) {p[0]=0x0213e68c;FUN_overlay_12__0212c9a0();FUN_overlay_12__02131dd4(p);FUN_020ba940(p);return p;}
