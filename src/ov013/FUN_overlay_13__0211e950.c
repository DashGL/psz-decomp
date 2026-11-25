// FUN_overlay_13__0211e950 @ 0x0211e950 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211e950 @ 0x0211e950 (code 0x40, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Clear embedded display and draw selected resource text.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_02093c00(int);
extern void *FUN_02093b2c(void *,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_13__0211e950(char *p,int group,int index) {void *manager;FUN_020c38f0(p+260,0);manager=FUN_02093c00(0);if(manager)FUN_020c3788(p+260,FUN_02093b2c(manager,group,index),128,0,2);}
