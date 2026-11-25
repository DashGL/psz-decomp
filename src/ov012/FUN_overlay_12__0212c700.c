// FUN_overlay_12__0212c700 @ 0x0212c700 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c700 @ 0x0212c700 (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy singleton embedded holders, free allocation and clear global.
 * Field identities remain provisional.
 */
extern void *FUN_020c2b68(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_12__0212c700(void) {char *p=*(char **)0x0213f2c4;if(p) {if(p) {FUN_020c2b68(p+20);FUN_020c2b68(p);FUN_020ba8ac(p);}*(void **)0x0213f2c4=0;}}
