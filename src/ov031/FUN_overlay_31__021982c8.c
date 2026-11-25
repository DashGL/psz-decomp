// FUN_overlay_31__021982c8 @ 0x021982c8 (0xbc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_31__021982c8 @ 0x021982c8 (code 0xb8, full extent 0xbc, thumb)
// check: vers=2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch478.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int payload[2],upper[2],lower[2];Vec vector;} Frame;extern void FUN_020473e8(void *,void *,int);extern void FUN_020bf694(void *,void *,void *);extern void FUN_020c0488(void *);extern void *FUN_02047798(void *,void *);extern void FUN_020c0484(void *,int);extern void FUN_0200c938(void *,int);extern void *FUN_020be450(void);extern int FUN_020beccc(void *,void *,int,void *,void *);extern void FUN_020be4f8(void *,int,int);
void FUN_overlay_31__021982c8(int *self,void *request) { Frame f;FUN_020473e8(self,request,0);f.lower[0]=self[23]-8192;f.lower[1]=self[25]-8192;f.upper[0]=self[23]+8192;f.upper[1]=self[25]+8192;FUN_020bf694(self+66,f.lower,f.upper);FUN_020c0488(self+75);FUN_02047798(self+78,self+66);self[77]=4096;FUN_020c0484(self+75,8);self[88]=-1;f.vector=*(Vec *)0x0219c548;FUN_0200c938(f.payload,8);f.payload[1]=self[58];self[88]=FUN_020beccc(FUN_020be450(),self+75,1,&f.vector,f.payload);FUN_020be4f8(FUN_020be450(),self[88],0); }
