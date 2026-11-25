// FUN_overlay_31__02198440 @ 0x02198440 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198440 @ 0x02198440 (code 0x66, full extent 0x70, thumb)
// check: vers=2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Build complete100-byte effect request
 * from position/id and resource prefix; initialize derived game object.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch375.md.
 */
typedef struct {int x,y,z;} Vec;
extern void *FUN_0204734c(void *);
extern void *FUN_0203ffe8(void *,int,int);
extern void *FUN_0203666c(void *);
extern void FUN_0204b268(void *,void *);
extern void FUN_020473e8(void *,void *,int);
extern void FUN_overlay_31__02198528(void *,void *);
void *FUN_overlay_31__02198440(int *self,Vec *position,int *id,int value,int extra) { int request[25];void *resource;FUN_0204734c(self);self[0]=0x0219cb98;self[65]=value;self[66]=extra;self[89]=0;resource=FUN_0203ffe8(*(void **)0x02108d5c,67,3);FUN_0203666c(request);request[22]=*id;*(Vec *)(request+8)=*position;FUN_0204b268(request,resource);request[7]&=~2;FUN_overlay_31__02198528(self,request);return self; }
