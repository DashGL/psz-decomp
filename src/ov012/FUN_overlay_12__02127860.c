// FUN_overlay_12__02127860 @ 0x02127860 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02127860 @ 0x02127860 (code 0x4c, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Deduct selected valid item price when current funds suffice.
 * Field identities remain provisional.
 */
extern char *FUN_02086e3c(void);
extern int *FUN_020870c4(void *);
extern void *FUN_020b00ac(void *,int);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__021277f4(void *,void *);
int FUN_overlay_12__02127860(int *p) {char *inventory=FUN_02086e3c()+16;int *money=FUN_020870c4(FUN_02086e3c());int available=money[13],price;void *item;if(p[5]>=0){item=FUN_020b00ac(inventory,p[5]);if(FUN_0203a1fc(item))return 0;price=FUN_overlay_12__021277f4(p,item);if(available>=price){money[13]-=price;return 1;}}return 0;}
