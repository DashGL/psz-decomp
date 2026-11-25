// FUN_overlay_28__02198c44 @ 0x02198c44 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198c44 @ 0x02198c44 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation one and advance parent when child has no active animation.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02037924(void *);
void FUN_overlay_28__02198c44(void **p) {if(FUN_02040d2c(p[1],0)) {FUN_02040c0c(p[1],0,1,4096,0);FUN_02037924(p[2]);}}
