// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_overlay_26__021988f8 @ 0x021988f8 (code 0x3a, pool extent 0x3a, thumb)
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Randomize heading around current angle and start animation two.
 * Field identities remain provisional.
 */
extern int FUN_02035b60(int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_26__021988f8(void **p) {char *c=p[1];unsigned short heading=*(unsigned short *)(c+68);*(unsigned short *)(c+68)=(FUN_02035b60(24576)-12288)+heading;FUN_02040c0c(c,0,2,4096,0);p[3]=(void *)2;}
