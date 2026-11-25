// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_20__0219d9b4 @ 0x0219d9b4 (code 0x36, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation six and initialize state values from parent descriptor.
 * Field identities remain provisional.
 */
extern int D_020fc988;
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219d9b4(int *p) {char *d=(char *)p[2]+48;FUN_02040c0c((void *)p[1],0,6,4096,10);p[4]=*(short *)(d+8)<<12;p[5]=D_020fc988;p[6]=D_020fc988;p[3]=0;p[7]=*(int *)(d+4);}
