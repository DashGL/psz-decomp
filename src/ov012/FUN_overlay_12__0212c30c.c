// FUN_overlay_12__0212c30c @ 0x0212c30c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c30c @ 0x0212c30c (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install base table, restore display rectangle, run base cleanup and free receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c978(unsigned int,unsigned int,unsigned int,unsigned int);
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__0212c30c(unsigned int *p) {p[0]=0x0213e1a0;FUN_overlay_12__0212c978(40,53,177,89);FUN_overlay_12__02131dd4(p);FUN_020ba940(p);return p;}
