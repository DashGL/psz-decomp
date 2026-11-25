// FUN_overlay_31__02197fdc @ 0x02197fdc (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_31__02197fdc @ 0x02197fdc (code 0x80, full extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch436.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_0204734c(void *);extern void *FUN_0203ffe8(void *,int,unsigned);extern void FUN_0203666c(void *);extern void FUN_0204b268(void *,void *);extern void FUN_020473e8(void *,void *,int);
void * FUN_overlay_31__02197fdc(int *self,void *position,void *vector,int *identifier) { int request[25];void *entry;FUN_0204734c(self);self[0]=0x0219cb54;*(Vec *)(self+65)=*(Vec *)vector;entry=FUN_0203ffe8(*(void **)0x02108d5c,66,2);FUN_0203666c(request);request[22]=*identifier;*(Vec *)(request+8)=*(Vec *)position;FUN_0204b268(request,entry);request[5]=25;request[7]|=0x2000;request[7]|=0x4000;request[7]|=0x8000;FUN_020473e8(self,request,0);self[43]=2;return self; }
