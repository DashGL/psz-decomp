// FUN_overlay_11__0211ff84 @ 0x0211ff84 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ff84 @ 0x0211ff84 (code 0x24, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Install base table, release optional embedded allocation and free enclosing receiver.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_11__0211ff84(unsigned int *p) {p[0]=0x021245b0;if(p[2809]){FUN_020ba8c4((void *)p[2809]);p[2809]=0;}FUN_020ba8ac(p);return p;}
