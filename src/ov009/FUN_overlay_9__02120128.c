// FUN_overlay_9__02120128 @ 0x02120128 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__02120128 @ 0x02120128 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Clear display and draw resource text if text manager is available.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_02093c00(int);
extern void *FUN_02093b2c(void *,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_9__02120128(char *p,int group,int index) {void *manager;FUN_020c38f0(p+16,0);manager=FUN_02093c00(0);if(manager)FUN_020c3788(p+16,FUN_02093b2c(manager,group,index),128,0,2);}
