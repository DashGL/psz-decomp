// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_31__021996bc @ 0x021996bc (code 0x5c, full extent 0x64, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Child game positioning or per-frame
 * transition timer with reloaded threshold and original call ordering.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch388.md.
 */
extern int D_0219cd04[];
extern unsigned short D_0219c578[];
typedef struct {int x,y,z;} Vec;extern void *FUN_overlay_31__021995ec(void);extern void FUN_overlay_31__0219a844(void *,void *,void *);extern void FUN_02043ea4(void *,int,int);extern void FUN_overlay_31__0219873c(void *,void *,int);
void FUN_overlay_31__021996bc(int *self) { Vec position;FUN_overlay_31__0219a844(&position,FUN_overlay_31__021995ec(),self+55);position.y=D_0219cd04[3];*(Vec *)(self+14)=position;((unsigned short *)self)[34]=D_0219c578[self[54]];FUN_02043ea4(self,self[56],1);FUN_overlay_31__0219873c(self+60,self,self[57]); }
