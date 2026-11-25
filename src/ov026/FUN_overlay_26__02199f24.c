// FUN_overlay_26__02199f24 @ 0x02199f24 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_26__02199f24 @ 0x02199f24 (code 0x70, full extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch423.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec first,second,direction;} Frame;extern int FUN_020370b8(void *,int,void *);extern void FUN_02037924(void *);extern void FUN_02036368(void *);extern void FUN_02091cc0(void *,void *,void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_26__02199f24(int *self) { int *data=(int *)self[2];void *owner=(void *)self[1];Frame f;if(!FUN_020370b8(owner,data[20],&f.direction)){FUN_02037924(data);return;}f.direction.y=0;FUN_02036368(&f.direction);FUN_02091cc0(&f.second,&f.direction,(void *)0x0219b68c);*(Vec *)(self+6)=f.second;FUN_02091cc0(&f.first,&f.direction,(void *)0x0219b690);*(Vec *)(self+3)=f.first;FUN_02040c0c(owner,0,4,4096,0);self[9]=0; }
