// FUN_overlay_25__02198b90 @ 0x02198b90 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198b90 @ 0x02198b90 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Forward all three constructor inputs, install derived table and store adjusted type.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,unsigned int,int);
void *FUN_overlay_25__02198b90(unsigned int *p,unsigned int id,int kind) {FUN_020352dc(p,id,kind);p[0]=0x0219acdc;p[54]=-1u;p[53]=kind-11;return p;}
