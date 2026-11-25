// FUN_overlay_21__0219f8d0 @ 0x0219f8d0 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219f8d0 @ 0x0219f8d0 (code 0x5e, full extent 0x64, thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch412.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_02040c0c(void *,int,int,int,int);extern void *FUN_020352a4(void *,int);extern int *FUN_02039200(void *);extern void FUN_02037ff0(void *,void *);
void FUN_overlay_21__0219f8d0(int *self) { int *data=(int *)self[2];int *entity;FUN_02040c0c((void *)self[1],0,20,4096,0);self[7]=data[42];*(Vec *)(self+4)=*(Vec *)(data+43);entity=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,self[7]));if(entity){entity[62]&=~2;FUN_02037ff0(entity,self+4);}self[3]=0;self[8]=0; }
