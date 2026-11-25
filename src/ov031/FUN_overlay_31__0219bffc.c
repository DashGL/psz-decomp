// FUN_overlay_31__0219bffc @ 0x0219bffc (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219bffc @ 0x0219bffc (code 0x96, full extent 0xa0, thumb)
// check: vers=2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch464.md.
 */
typedef struct {int x,y,z;} Vec;extern unsigned FUN_02009c84(int);extern unsigned FUN_0200923c(unsigned,unsigned);extern unsigned FUN_02009f00(unsigned,unsigned);extern int FUN_02009c50(unsigned);extern void FUN_0204734c(void *);extern void *FUN_0203ffe8(void *,int,int);extern void FUN_0203666c(void *);extern void FUN_0204b268(void *,void *);extern void FUN_overlay_31__0219c0bc(void *,void *);
void * FUN_overlay_31__0219bffc(int *self,int value,void *position,int *identifier,int *extra,int rate) { int request[25];unsigned bits;int negative;void *entry;FUN_0204734c(self);self[0]=0x0219d078;self[65]=value;self[66]=*extra;self[67]=0;negative=(int)(0u-(unsigned)rate);if(negative>0)bits=FUN_0200923c(0x3f000000,FUN_02009c84((unsigned)negative<<12));else bits=FUN_02009f00(FUN_02009c84((unsigned)negative<<12),0x3f000000);self[37]=FUN_02009c50(bits);entry=FUN_0203ffe8(*(void **)0x02108d5c,66,3);FUN_0203666c(request);request[22]=*identifier;*(Vec *)(request+8)=*(Vec *)position;FUN_0204b268(request,entry);request[5]=80;FUN_overlay_31__0219c0bc(self,request);return self; }
