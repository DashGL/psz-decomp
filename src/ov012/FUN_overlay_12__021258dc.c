// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_12__021258dc @ 0x021258dc
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Test player inventory for bounded receiver item descriptor.
 * Field identities remain provisional.
 */
extern char data_02137e74[];
extern void *FUN_02086e3c(void);
extern int FUN_020b025c(void *,const void *);
int FUN_overlay_12__021258dc(int *p) {if(p[16]>=0&&p[16]<20) {void *player=FUN_02086e3c();if(FUN_020b025c((char *)player+16,data_02137e74+p[16]*16))return 1;}return 0;}
