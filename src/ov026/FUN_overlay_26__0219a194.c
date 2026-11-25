// FUN_overlay_26__0219a194 @ 0x0219a194 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a194 @ 0x0219a194 (code 0x7c, full extent 0x84, thumb)
// check: vers=2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch433.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec first,second,direction;} Frame;extern int FUN_020370b8(void *,int,void *);extern void FUN_02037924(void *);extern void FUN_0205c8cc(void *,void *);extern void FUN_02091cc0(void *,void *,void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_26__0219a194(int *self) { Frame f;int *state=(int *)self[2];void *owner=(void *)self[1];if(!FUN_020370b8(owner,state[20],&f.direction)){FUN_02037924(state);return;}if(f.direction.x || f.direction.y || f.direction.z)FUN_0205c8cc(&f.direction,&f.direction);FUN_02091cc0(&f.second,&f.direction,(void *)0x0219b6e8);*(Vec *)(self+6)=f.second;FUN_02091cc0(&f.first,&f.direction,(void *)0x0219b6ec);*(Vec *)(self+3)=f.first;FUN_02040c0c(owner,0,6,4096,0); }
