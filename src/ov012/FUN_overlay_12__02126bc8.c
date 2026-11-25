// FUN_overlay_12__02126bc8 @ 0x02126bc8 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02126bc8 @ 0x02126bc8 (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve valid inventory selection into shared output record.
 * Field identities remain provisional.
 */
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *,int);
extern int FUN_0203a1fc(void *);
extern int FUN_0209ca8c(void *,void *,int);
void *FUN_overlay_12__02126bc8(int *p) {void *item;if(p[5]>=0){char *player=FUN_02086e3c();item=FUN_020b00ac(player+16,p[5]);if(FUN_0203a1fc(item))return 0;if(FUN_0209ca8c((void *)0x0213ed50,item,0))return (void *)0x0213ed50;}return 0;}
