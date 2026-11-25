// FUN_overlay_29__02198afc @ 0x02198afc (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198afc @ 0x02198afc (code 0x8e, full extent 0x94, thumb)
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch446.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_02074f94(void *);extern void *FUN_0203ffe8(void *,int,int);extern void FUN_0203666c(void *);extern void *FUN_02046d94(void *,int,int);extern int FUN_02074fc4(void *,void *,int,int);
void FUN_overlay_29__02198afc(int *self) { int request[25];int slot=FUN_02074f94(self);if(slot!=-1){unsigned short *entry=FUN_0203ffe8(*(void **)0x02108d5c,**(signed char **)self[5],0);int i;void *child;FUN_0203666c(request);((unsigned short *)request)[0]=entry[0];((unsigned short *)request)[1]=entry[1];for(i=0;i<5;i++)((unsigned short *)request)[i+2]=entry[i+2];request[22]=self[3];*(Vec *)(request+8)=*(Vec *)(self+14);request[7]|=0x20000;request[7]|=0x10000;request[7]&=~2;child=FUN_02046d94(request,0,0);if(child)FUN_02074fc4(self,child,slot,0);} }
