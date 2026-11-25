// FUN_overlay_28__0219af98 @ 0x0219af98 (0xc2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219af98 @ 0x0219af98 (code 0xc2, full extent 0xc2, thumb)
// check: vers=2.0/sp2p3 target=0xc2 candidate=0xc2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch491.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec scale,position;} Frame;extern void FUN_overlay_28__0219b07c(void *);extern void FUN_overlay_28__0219b05c(void *);extern int *FUN_02075040(void *,int);extern int FUN_02074e9c(void *,int,int,int);
void FUN_overlay_28__0219af98(int *self) { Frame f;int *child;FUN_overlay_28__0219b07c(self);if(((int *)self[4])[23]){child=FUN_02075040(self,self[53]);if(child){f.position=*(Vec *)(child+23);f.scale.x=4096;f.scale.y=4096;f.scale.z=4096;FUN_overlay_28__0219b05c(self);self[54]=FUN_02074e9c(self,2,0,0);child=FUN_02075040(self,self[54]);if(child){*(Vec *)(child+23)=f.position;*(Vec *)(child+20)=f.scale;((volatile int *)child)[57]|=0x4000;((volatile int *)child)[57]|=0x8000;((volatile int *)child)[57]|=0x10000;((volatile int *)child)[57]|=0x20000;}}} }
