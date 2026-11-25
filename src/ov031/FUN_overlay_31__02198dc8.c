// FUN_overlay_31__02198dc8 @ 0x02198dc8 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198dc8 @ 0x02198dc8 (code 0x44, full extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch401.md.
 */
extern void FUN_02044570(void *,int,int);extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_31__021988b4(void *);extern void FUN_overlay_31__02199860(void *);
void FUN_overlay_31__02198dc8(int *self) { int *owner=(int *)self[1];int saved=owner[56];FUN_02044570(owner,owner[58],0);FUN_02040c0c(owner,saved,6,4096,0);FUN_overlay_31__021988b4((char *)owner+0xf0);FUN_overlay_31__02199860(owner);self[3]=0; }
