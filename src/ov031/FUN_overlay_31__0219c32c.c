// FUN_overlay_31__0219c32c @ 0x0219c32c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c32c @ 0x0219c32c (code 0x62, full extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch418.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_0204734c(void *);extern void *FUN_0203ffe8(void *,int,unsigned);extern void FUN_0203666c(void *);extern void FUN_0204b268(void *,void *);extern void FUN_overlay_31__0219c410(void *,void *);
void * FUN_overlay_31__0219c32c(int *self,void *position,int *identifier) { int request[25];void *entry;FUN_0204734c(self);self[0]=0x0219d038;self[87]=0;entry=FUN_0203ffe8(*(void **)0x02108d5c,66,5);FUN_0203666c(request);request[22]=*identifier;*(Vec *)(request+8)=*(Vec *)position;FUN_0204b268(request,entry);request[7]&=~2;request[7]|=0x4000;FUN_overlay_31__0219c410(self,request);return self; }
