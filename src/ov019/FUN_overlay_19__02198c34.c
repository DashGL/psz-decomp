// FUN_overlay_19__02198c34 @ 0x02198c34 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198c34 @ 0x02198c34 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Check resident state record is enabled and currently selected.
 * Field identities remain provisional.
 */
extern int FUN_02084bd4(void *),FUN_02084d00(void *);
int FUN_overlay_19__02198c34(void) { if(FUN_02084bd4((void *)0x0211a51c)!=1)return 0; return FUN_02084d00((void *)0x0211a51c)!=0; }
