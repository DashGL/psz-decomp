// FUN_overlay_22__02198a3c @ 0x02198a3c (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198a3c @ 0x02198a3c (code 0x98, full extent 0x9c, thumb)
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch472.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec scale,position;} Frame;extern void *FUN_overlay_4__02129ed4(void);extern void FUN_overlay_4__0212a294(void *,int,int,int,int);extern void FUN_overlay_4__0212a9a0(void *,int);
void FUN_overlay_22__02198a3c(int *self,int enabled) { int *effect=(int *)self[20];if(effect){if(enabled==1){Frame f;void *manager;f.position=*(Vec *)(self+4);f.position.y=410;f.scale.x=16384;f.scale.y=4096;f.scale.z=16384;*(Vec *)(effect+20)=f.scale;*(Vec *)((char *)self[20]+0x5c)=f.position;manager=FUN_overlay_4__02129ed4();FUN_overlay_4__0212a294(manager,f.position.x,f.position.z,*(int *)self[3]+1,1);}else{void *manager=FUN_overlay_4__02129ed4();FUN_overlay_4__0212a9a0(manager,*(int *)self[3]+1);}effect=(int *)self[20];if(enabled)effect[57]&=~1;else effect[57]|=1;} }
