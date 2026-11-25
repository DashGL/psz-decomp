// FUN_overlay_28__0219a74c @ 0x0219a74c (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a74c @ 0x0219a74c (code 0xbc, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch482.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec scaled,direction;} Frame;extern int FUN_020370b8(void *,int,void *);extern void FUN_0205c8cc(void *,void *);extern void FUN_02037924(void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__0219a74c(int *self) { Frame f;int *state=(int *)self[2];void *owner=(void *)self[1];int speed;if(!FUN_020370b8(owner,state[18],&f.direction)){FUN_02037924(state);return;}if(f.direction.x || f.direction.y || f.direction.z)FUN_0205c8cc(&f.direction,&f.direction);speed=*(int *)0x0219c274;f.scaled.x=(int)(((long long)f.direction.x*speed+2048)>>12);f.scaled.y=(int)(((long long)f.direction.y*speed+2048)>>12);f.scaled.z=(int)(((long long)f.direction.z*speed+2048)>>12);*(Vec *)(self+3)=f.scaled;FUN_02040c0c(owner,0,5,4096,0); }
