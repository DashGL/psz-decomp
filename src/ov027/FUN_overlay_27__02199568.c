// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// FUN_overlay_27__02199568 @ 0x02199568 (code 0x42, pool extent 0x42, thumb)
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Set completed child animation, translate its model and advance state.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02043f30(void *,int,void *);
extern void FUN_02037924(void *);
void FUN_overlay_27__02199568(int *p) {void *c=(void *)p[1];int v[3];if(FUN_02040d2c(c,0)){FUN_02040c0c(c,0,6,4096,0);v[1]=5120;v[0]=0;v[2]=0;FUN_02043f30(c,0,v);FUN_02037924((void *)p[2]);}}
