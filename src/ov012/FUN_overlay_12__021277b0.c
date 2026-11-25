// FUN_overlay_12__021277b0 @ 0x021277b0 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__021277b0 @ 0x021277b0 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Compare current funds with selected valid item price.
 * Field identities remain provisional.
 */
extern char *FUN_02086e3c(void);
extern int *FUN_020870c4(void *);
extern void *FUN_020b00ac(void *,int);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__021277f4(void *,void *);
int FUN_overlay_12__021277b0(int *p) {int funds=FUN_020870c4(FUN_02086e3c())[13];void *item;if(p[5]>=0){char *q=FUN_02086e3c();item=FUN_020b00ac(q+16,p[5]);if(FUN_0203a1fc(item))return 0;if(funds>=FUN_overlay_12__021277f4(p,item))return 1;}return 0;}
