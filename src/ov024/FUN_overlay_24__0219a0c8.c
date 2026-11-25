// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_overlay_24__0219a0c8 @ 0x0219a0c8, verified extent 0x48.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0219c568[];
// FUN_overlay_24__0219a0c8 @ 0x0219a0c8 (code 0x44, pool extent 0x48, thumb)
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Select animation and timer values from child state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_24__0219a0c8(int *p) {int *c=(int *)p[1];if(c[54]){FUN_02040c0c(c,0,2,4096,0);p[3]=*(int *)((unsigned int)DAT_0219c568 + 0u);*(short *)(p+4)=864;}else{FUN_02040c0c(c,0,1,4096,0);p[3]=*(int *)((unsigned int)DAT_0219c568 + 4u);*(short *)(p+4)=288;}}
