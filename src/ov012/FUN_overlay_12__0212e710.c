// FUN_overlay_12__0212e710 @ 0x0212e710 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e710 @ 0x0212e710 (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy embedded resource state, base and aligned allocation.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c9a0(void);
extern void *FUN_overlay_12__0212ec70(void *);
extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void *FUN_overlay_12__0212e710(unsigned int *p) {p[0]=0x0213e344;FUN_overlay_12__0212c9a0();FUN_overlay_12__0212ec70((char *)p+0x220);FUN_overlay_12__02131dd4(p);FUN_020ba940(p);return p;}
