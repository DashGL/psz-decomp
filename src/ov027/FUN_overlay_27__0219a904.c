// FUN_overlay_27__0219a904 @ 0x0219a904 (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219a904 @ 0x0219a904 (code 0x7e, full extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch438.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int scaled,duration;Vec position;} Frame;extern void FUN_020bc5cc(void *,void *,void *);extern void FUN_02043f30(void *,unsigned,void *);extern void FUN_02036f08(void *,unsigned);extern void FUN_02037568(void *);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_020445a8(void *,int,int);
void FUN_overlay_27__0219a904(int *self) { Frame f;int *owner,*state;self[7]=0;self[3]=0;owner=(int *)self[1];state=(int *)self[2];f.position=*(Vec *)0x020fc958;f.duration=0x1e000;FUN_020bc5cc(&f.scaled,(void *)0x0219c5e0,&f.duration);f.position.y=owner[15]-f.scaled;*(Vec *)(self+4)=f.position;FUN_02043f30(owner,0,self+4);FUN_02036f08(owner,1);FUN_02037568(owner);FUN_02040c0c(owner,0,3,4096,0);FUN_020445a8(owner,0,0);state[23]|=4; }
