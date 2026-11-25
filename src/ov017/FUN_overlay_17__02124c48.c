// FUN_overlay_17__02124c48 @ 0x02124c48 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124c48 @ 0x02124c48 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Push signed global descriptor byte onto receiver stack.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern signed char *FUN_020870c4(void *);
extern void FUN_overlay_17__02123df4(void *,unsigned int);
void FUN_overlay_17__02124c48(void *p) {signed char *record=FUN_020870c4(FUN_02086e3c());FUN_overlay_17__02123df4(p,record[34]);}
