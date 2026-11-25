// FUN_overlay_23__0219cd64 @ 0x0219cd64 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219cd64 @ 0x0219cd64 (code 0xa6, full extent 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch462.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec position;int matrix43[12];} Frame;extern int FUN_02040d2c(void *,int);extern void FUN_02037924(void *);extern int FUN_02074e9c(void *,int,int,int);extern int *FUN_02075040(void *,int);extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern int FUN_02040ce8(void *,int,int);extern void FUN_02040d0c(void *,int,int);extern void FUN_overlay_23__02199b74(void *,int);
void FUN_overlay_23__0219cd64(int *self) { Frame f;void *owner=(void *)self[1];int *effect;void *child;if(FUN_02040d2c(owner,0))FUN_02037924((void *)self[2]);if(self[3]==*(int *)0x020ed09c)self[3]=FUN_02074e9c(owner,1,0,0);effect=FUN_02075040(owner,self[3]);if(effect){child=FUN_02036c88(owner,0);if(child && FUN_0204260c(child,17,f.matrix43,0)){f.position.x=f.matrix43[9];f.position.y=f.matrix43[10];f.position.z=f.matrix43[11];*(Vec *)(effect+23)=f.position;effect[57]|=0x10000;}}if(FUN_02040ce8(owner,0,4)){FUN_02040d0c(owner,0,4);FUN_overlay_23__02199b74(owner,4);} }
