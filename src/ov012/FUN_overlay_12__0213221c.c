// FUN_overlay_12__0213221c @ 0x0213221c (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213221c @ 0x0213221c (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve matching player inventory item and return its scalar quantity.
 * Field identities remain provisional.
 */
extern int FUN_02084900(const void *);
extern char *FUN_02086e3c(void);
extern int FUN_020b04f4(void *,const void *);
extern void *FUN_020b00ac(void *,int);
extern int FUN_020849d4(const void *);
int FUN_overlay_12__0213221c(const void *item) {if(FUN_02084900(item)){void *inv=FUN_02086e3c()+16;int i=FUN_020b04f4(inv,item);if(i!=-1)return FUN_020849d4(FUN_020b00ac(inv,i));}return 0;}
