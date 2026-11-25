// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// FUN_overlay_23__0219c3e4 @ 0x0219c3e4 (code 0x7e, full extent 0x8c, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch439.md.
 */
extern char G_020ED83C[]; extern char G_0219DAE8[]; extern char G_0219DAEC[];
typedef struct {int x,y,z;} Vec;typedef struct {Vec trial,direction;} Frame;extern void FUN_02092654(void *,void *);extern void *FUN_02036848(void *,void *);extern unsigned FUN_020375d8(void *);extern void *FUN_02034b8c(void *,unsigned);extern unsigned FUN_02035b60(unsigned);
void FUN_overlay_23__0219c3e4(int *self) { Frame f;char *state=(char *)self+140;void *owner=(void *)self[1];unsigned offset=(*(unsigned short *)(state+84)>>4)*2;f.direction.x=((short *)G_020ED83C)[offset];f.direction.y=0;f.direction.z=((short *)G_020ED83C)[offset+1];f.trial=f.direction;FUN_02092654(&f.trial,(void *)G_0219DAEC);FUN_02036848(&f.trial,state+72);if(!FUN_02034b8c(&f.trial,FUN_020375d8(owner)))*(unsigned short *)(state+84)=FUN_02035b60(65536);else{FUN_02092654(&f.direction,(void *)G_0219DAE8);FUN_02036848(state+72,&f.direction);} }
