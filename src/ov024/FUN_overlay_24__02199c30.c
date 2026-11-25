// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_24__02199c30 @ 0x02199c30
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219c4bc[];
extern int D_0219c4b8[];
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Advance animation state, randomize speed and probabilistically select alternate mode.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02037924(void *);
extern void FUN_02086d60(int *,int *,int *);
extern void FUN_overlay_24__021997d4(void *,int);
extern int FUN_02086d8c(int);
void FUN_overlay_24__02199c30(int **p) {int *c=p[1],*q=p[2];int value;if(FUN_02040d2c(c,0)){FUN_02040c0c(c,0,1,4096,0);FUN_02037924(q);FUN_02086d60(&value,D_0219c4bc,D_0219c4b8);FUN_overlay_24__021997d4(q,value);if(FUN_02086d8c(30))q[19]=2;}}
