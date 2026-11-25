// FUN_overlay_17__02121d68 @ 0x02121d68 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121d68 @ 0x02121d68 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Select actor mode one and apply default timing when notification flag is clear.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_overlay_17__0211e7a8(unsigned int);
extern void FUN_overlay_17__0211e928(void *,int,int);
void FUN_overlay_17__02121d68(unsigned int *p,int flag) {unsigned int *actor=FUN_overlay_17__0211e7a8(p[61]);if(actor) {FUN_overlay_17__0211e928(actor,1,0);if(flag==0)actor[230]=40960;}}
