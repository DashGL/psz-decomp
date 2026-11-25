// FUN_overlay_29__021991dc @ 0x021991dc (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_29__021991dc @ 0x021991dc (code 0xb0, full extent 0xb4, thumb)
// check: vers=2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch473.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec position,zero;int matrix33[9],matrix43[12];} Frame;extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_29__02199538(void *);extern void FUN_02043ea4(void *,int,int);extern void FUN_02036f08(void *,int);extern int FUN_02072650(void *,int,int,int);extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_02072750(void *,int,void *);extern void FUN_02044570(void *,int,int);
void FUN_overlay_29__021991dc(int *self) { Frame f;int *owner=(int *)self[1];self[3]=*(int *)0x020ed0a0;if(owner[54]==1){void *child;FUN_02040c0c(owner,0,7,4096,0);FUN_overlay_29__02199538(owner);FUN_02043ea4(owner,0,0);FUN_02036f08(owner,1);self[3]=FUN_02072650(owner,1,0,0);child=FUN_02036c88(owner,0);if(!child)return;if(!FUN_0204260c(child,0,f.matrix43,f.matrix33))return;FUN_0200c938(&f.zero,12);FUN_0205b960(&f.zero,f.matrix43,&f.zero);f.position.x=f.zero.x;f.position.y=f.zero.y;f.position.z=f.zero.z;FUN_02072750(owner,self[3],&f.position);}else FUN_02040c0c(owner,0,6,4096,0);FUN_02044570(owner,0,0); }
