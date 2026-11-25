// FUN_overlay_17__0211fd40 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_17__0211fd40 @ 0x0211fd40 (code 0xa8, full extent 0xb0, thumb)
// check: vers=2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch470.md.
 */
typedef struct {char second[32],first[32];} Frame;extern int FUN_020038ec(void *,int,const char *,...);extern int FUN_overlay_17__0211e6a8(int,int,void *,void *,void *,int);extern int *FUN_overlay_17__0211e7a8(int);extern void FUN_overlay_17__0211e7bc(void *,void *,void *);extern void FUN_overlay_17__0211e998(void *,int,int,int);extern void FUN_overlay_17__0211e95c(void *,int,int,int);
void FUN_overlay_17__0211fd40(int *self,int index) { Frame f;void *first=0,*second=0;int *resource;int *table=(int *)0x02124fc0;FUN_020038ec(f.first,32,(char *)table[5],index,table[0]);FUN_020038ec(f.second,32,(char *)table[5],index,table[6]);if(index>-1){first=f.first;second=f.second;}if(self[0]==-1)self[0]=FUN_overlay_17__0211e6a8(0,0,(void *)table[4],first,second,0);else{resource=FUN_overlay_17__0211e7a8(self[0]);if(resource)FUN_overlay_17__0211e7bc(resource,first,second);}resource=FUN_overlay_17__0211e7a8(self[0]);if(resource){self[1]=0;resource[0xaea]=500;FUN_overlay_17__0211e998(resource,2,0,(unsigned)self[1]<<24);FUN_overlay_17__0211e95c(resource,2,0,1);}self[4]=0;self[5]=0;self[6]=0;self[7]=0;self[8]=0;self[9]=0; }
