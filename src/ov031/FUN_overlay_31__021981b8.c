// FUN_overlay_31__021981b8 @ 0x021981b8 (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_31__021981b8 @ 0x021981b8 (code 0x8c, full extent 0x98, thumb)
// check: vers=2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch445.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec position;int request[25];} Frame;extern void FUN_0204734c(void *);extern void *FUN_0203ffe8(void *,int,int);extern void FUN_0203666c(void *);extern void FUN_0204b268(void *,void *);extern void FUN_overlay_31__021982c8(void *,void *);
void * FUN_overlay_31__021981b8(int *self,Vec *position,int *identifier,int value) { Frame f;void *entry;FUN_0204734c(self);self[0]=0x0219cbd8;self[65]=value;self[88]=0;entry=FUN_0203ffe8(*(void **)0x02108d5c,67,0);f.position=*position;f.position.y=position->y+*(int *)0x0219cb8c;FUN_0203666c(f.request);f.request[22]=*identifier;*(Vec *)(f.request+8)=f.position;FUN_0204b268(f.request,entry);f.request[7]|=0x8000;f.request[7]|=0x20000;f.request[7]|=0x10000;f.request[7]&=~2;FUN_overlay_31__021982c8(self,f.request);return self; }
