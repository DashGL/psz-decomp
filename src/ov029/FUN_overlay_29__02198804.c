// FUN_overlay_29__02198804 @ 0x02198804 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198804 @ 0x02198804 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup table, release extended handle then clean base.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int),FUN_02035518(void *);
void *FUN_overlay_29__02198804(unsigned int *p) { p[0]=0x0219bc48; FUN_02075068(p,p[53]); FUN_02035518(p); return p; }
