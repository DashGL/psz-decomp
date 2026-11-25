// FUN_overlay_12__0212ca04 @ 0x0212ca04 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ca04 @ 0x0212ca04 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Hide optional secondary display and clear its hardware background buffer.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,unsigned int);
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned int,void *,unsigned int);
void FUN_overlay_12__0212ca04(void) {char *p=*(char **)0x0213f2c8;if(p){FUN_020c38f0(p+64,0);FUN_0206557c(0,FUN_0205e0c4(),2048);}}
