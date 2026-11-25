// FUN_overlay_12__021323d0 @ 0x021323d0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021323d0 @ 0x021323d0 (code 0x3c, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Select item category bucket and insert item and auxiliary record.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02134074(void *);
extern void FUN_overlay_12__0213302c(void *,void *,void *);
int FUN_overlay_12__021323d0(int *p,void *item,void *data) {int index;if(p[20])index=FUN_overlay_12__02134074(item);else index=0;if(index>=0&&index<4){FUN_overlay_12__0213302c((char *)p+196+index*4012,item,data);p[30]=1;return 1;}return 0;}
