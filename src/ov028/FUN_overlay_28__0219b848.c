// FUN_overlay_28__0219b848 @ 0x0219b848 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b848 @ 0x0219b848 (code 0x84, full extent 0x8c, thumb)
// check: vers=2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch440.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec first,second,direction;} Frame;extern int FUN_020370b8(void *,int,void *);extern void FUN_02037924(void *);extern void FUN_0205c8cc(void *,void *);extern void FUN_02091cc0(void *,void *,void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__0219b848(int *self) { Frame f;int *state=(int *)self[2];if(!FUN_020370b8((void *)self[1],state[20],&f.direction)){FUN_02037924(state);return;}if(f.direction.x || f.direction.y || f.direction.z)FUN_0205c8cc(&f.direction,&f.direction);FUN_02091cc0(&f.second,&f.direction,(void *)0x0219c430);*(Vec *)(self+3)=f.second;FUN_02091cc0(&f.first,&f.direction,(void *)0x0219c42c);*(Vec *)(self+6)=f.first;FUN_02040c0c((void *)self[1],0,7,4096,0);self[9]=0;state[23]=1; }
