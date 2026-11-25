// FUN_overlay_28__0219b09c @ 0x0219b09c (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b09c @ 0x0219b09c (code 0x52, full extent 0x52, thumb)
// check: vers=2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch406.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_overlay_28__0219b0f0(void *);extern int *FUN_02075040(void *,int);extern int FUN_02072650(void *,int,int,int);extern void FUN_02072750(void *,int,void *);
void FUN_overlay_28__0219b09c(int *self) { FUN_overlay_28__0219b0f0(self);if(((int *)self[4])[23]){int *child=FUN_02075040(self,self[54]);if(child){Vec v=*(Vec *)(child+23);self[55]=FUN_02072650(self,1,0,0);FUN_02072750(self,self[55],&v);}} }
