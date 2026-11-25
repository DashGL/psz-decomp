// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x38 exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-resource-layout.json
typedef struct {int word0;int word4;unsigned handles[8];} Resource_02131b10;
extern Resource_02131b10 *DAT_0213f2d8;
extern unsigned int DAT_0213e818[8];
// FUN_overlay_12__02131b10 @ 0x02131b10 (code 0x30, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Ensure common resource availability and lazily load the requested one of eight handles.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131b48(void *);extern void FUN_overlay_12__02131c00(int *,unsigned int,int);void FUN_overlay_12__02131b10(int index) {Resource_02131b10 *p=DAT_0213f2d8;if(p&&index>=0&&index<8){FUN_overlay_12__02131b48(p);p=DAT_0213f2d8;FUN_overlay_12__02131c00((int *)(p->handles+index),DAT_0213e818[index],p->word0);}}
