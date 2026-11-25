// FUN_overlay_12__0212764c @ 0x0212764c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212764c @ 0x0212764c (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve indexed player item into shared descriptor and return it on success.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *,int);
extern int FUN_0209ca8c(void *,const void *,int);
void *FUN_overlay_12__0212764c(int *p) {if(p[5]>=0) {void *player=FUN_02086e3c();void *item=FUN_020b00ac((char *)player+16,p[5]);if(FUN_0209ca8c((void *)0x0213ef7c,item,0))return (void *)0x0213ef7c;}return 0;}
