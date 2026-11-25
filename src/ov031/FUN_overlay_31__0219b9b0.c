// FUN_overlay_31__0219b9b0 @ 0x0219b9b0 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219b9b0 @ 0x0219b9b0 (code 0x48, full extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch401.md.
 */
extern int FUN_02074f94(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_31__0219c25c(void *,void *,void *,int,int *);extern int FUN_02074fc4(void *,void *,int,int);
void FUN_overlay_31__0219b9b0(int *self,void *position,void *vector,int value) { int slot=FUN_02074f94(self);if(slot!=-1){void *p=FUN_020ba894(272);if(p){int id=self[3];p=FUN_overlay_31__0219c25c(p,position,vector,value,&id);}FUN_02074fc4(self,p,slot,0);} }
