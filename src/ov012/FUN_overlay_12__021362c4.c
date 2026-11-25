// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_12__021362c4 @ 0x021362c4
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve shared manager handle with two caller-supplied indices.
 * Field identities remain provisional.
 */
extern int data_0213eb74[];
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
void *FUN_overlay_12__021362c4(int a,int b) {if(data_0213eb74[1]!=-1) {void *manager=FUN_0208f068();if(manager)return FUN_0208efa8(manager,data_0213eb74[1],a,b);}return 0;}
