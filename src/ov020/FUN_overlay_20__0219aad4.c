// FUN_overlay_20__0219aad4 @ 0x0219aad4 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219aad4 @ 0x0219aad4 (code/full extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game state entry/update with child
 * flag consumption, vector snapshot and original repeated transition calls.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch399.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_overlay_20__02198f90(void *);extern void FUN_overlay_20__02198fc0(void *,int);extern void FUN_overlay_20__02198ff0(void *,int);extern void FUN_overlay_20__02199030(void *,int);extern Vec *FUN_overlay_20__02199068(void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219aad4(int *self) { void *owner=(void *)self[1];FUN_overlay_20__02198f90(owner);FUN_overlay_20__02198fc0(owner,1);FUN_overlay_20__02198ff0(owner,1);FUN_overlay_20__02199030(owner,1);*(Vec *)(self+5)=*FUN_overlay_20__02199068(owner);FUN_02040c0c(owner,0,18,4096,0);self[4]=0; }
