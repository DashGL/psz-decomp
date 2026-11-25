// FUN_overlay_29__0219a038 @ 0x0219a038 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a038 @ 0x0219a038 (code 0xa6, full extent 0xb0, thumb)
// check: vers=2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch465.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int factor,scale;Vec scaled,result,facing,difference;} Frame;extern int FUN_020370b8(void *,int,void *);extern int FUN_020370ec(void *,int,void *);extern void FUN_020bc5cc(void *,void *,void *);extern void FUN_020bbfbc(void *,int);extern void FUN_02091cc0(void *,void *,void *);extern void *FUN_02035408(void *,int,int,int);
int FUN_overlay_29__0219a038(int *self,int index,Vec *out) { Frame f;void *owner=(void *)self[1];int target=*(int *)0x0219bd5c;if(!FUN_020370b8(owner,target,&f.difference))return 0;if(!FUN_020370ec(owner,target,&f.facing))return 0;if(index<0 || index>=4)return 0;f.factor=(index/2+1)<<12;FUN_020bc5cc(&f.scale,(void *)0x0219bdc4,&f.factor);FUN_020bbfbc(&f.facing,(unsigned short)(index%2==0?0x3000:0xd000));FUN_02091cc0(&f.scaled,&f.facing,&f.scale);FUN_02035408(&f.result,f.difference.x+f.scaled.x,f.difference.y+f.scaled.y,f.difference.z+f.scaled.z);*out=f.result;return 1; }
