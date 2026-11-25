// FUN_overlay_12__02134074 @ 0x02134074 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134074 @ 0x02134074 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Classify descriptor through resident singleton when global mode enabled, otherwise return three.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02134000(void);
extern void *FUN_02088c7c(void);
extern int FUN_0208bb6c(void *,const void *);
int FUN_overlay_12__02134074(const void *record) {if(FUN_overlay_12__02134000())return FUN_0208bb6c(FUN_02088c7c(),record);return 3;}
