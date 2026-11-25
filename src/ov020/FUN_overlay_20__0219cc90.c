// FUN_overlay_20__0219cc90 @ 0x0219cc90 (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219cc90 @ 0x0219cc90 (code 0x52, full extent 0x52, thumb)
// check: vers=2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch403.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_02040cd4(void *,int);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_20__0219cd04(void *);
void FUN_overlay_20__0219cc90(int *self) { int *owner=(int *)self[1];int *data=(int *)(self[2]+0x30);Vec v;if(FUN_02040cd4(owner,0)!=18)FUN_02040c0c(owner,0,18,4096,10);v.x=data[9];v.y=0;v.z=data[10];*(Vec *)(self+6)=v;FUN_overlay_20__0219cd04(self);self[3]=0; }
