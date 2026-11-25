// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_17__0211ff2c @ 0x0211ff2c (code 0x38, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Select axis, store destination and compute signed rounded-away step with positive duration.
 * Field identities remain provisional.
 */
void FUN_overlay_17__0211ff2c(int *p,int axis,int delta,int duration) {int base;if(duration<=0)duration=1;base=axis==0?p[6]:p[7];p[5]=axis;p[8]=base+delta;if(delta<0)p[9]=(delta+1)/duration-1;else p[9]=(delta-1)/duration+1;}
