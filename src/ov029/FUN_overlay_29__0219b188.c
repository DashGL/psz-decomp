// FUN_overlay_29__0219b188 @ 0x0219b188 (0xcc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b188 @ 0x0219b188 (code 0xcc, full extent 0xcc, thumb)
// check: vers=2.0/sp2p3 target=0xcc candidate=0xcc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch499.md.
 */
typedef struct {int distance;int delta[3];} Frame;extern int FUN_overlay_29__0219b3e8(void *);extern int FUN_020370b8(void *,int,void *);extern void FUN_02037390(void *,void *);extern int FUN_overlay_29__0219b278(void *,void *);extern int FUN_overlay_29__0219b2ac(void *,void *);extern int FUN_overlay_29__0219b2cc(void *,void *);extern int FUN_overlay_29__0219b32c(void *,void *);extern int FUN_overlay_29__0219b394(void *,void *);extern void FUN_overlay_29__0219b254(void *);extern void FUN_02037910(void *,int);
void FUN_overlay_29__0219b188(int *self) { Frame f;if(FUN_overlay_29__0219b3e8(self)==1)return;if(FUN_020370b8((void *)self[1],self[21],f.delta)==1){FUN_02037390(&f.distance,f.delta);if(FUN_overlay_29__0219b278(self,&f.distance)==1){FUN_02037910(self,self[17]);return;}if(FUN_overlay_29__0219b2ac(self,&f.distance)==1){if(FUN_overlay_29__0219b2cc(self,f.delta)==1){FUN_02037910(self,self[18]);self[22]=1;return;}if(FUN_overlay_29__0219b32c(self,f.delta)==1){FUN_02037910(self,self[20]);self[22]=1;return;}if(self[22]==0)FUN_02037910(self,self[16]);else{FUN_02037910(self,self[15]);self[22]=0;}}else{if(FUN_overlay_29__0219b394(self,f.delta)==1){FUN_02037910(self,self[19]);return;}FUN_02037910(self,self[16]);self[22]=0;}}else{FUN_overlay_29__0219b254(self);FUN_02037910(self,self[15]);} }
