// FUN_overlay_24__02198d80 @ 0x02198d80 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198d80 @ 0x02198d80 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Forward both live constructor arguments, install dispatch and clear extended state.
 * Field identities remain provisional.
 */
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_24__02198d80(unsigned int *p,unsigned int a,unsigned int b) { FUN_020352dc(p,a,b); p[0]=0x219c38c; p[53]=0; return p; }
