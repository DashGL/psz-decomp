// FUN_overlay_12__02126ea8 @ 0x02126ea8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02126ea8 @ 0x02126ea8 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reject empty descriptor, otherwise test resident descriptor eligibility.
 * Field identities remain provisional.
 */
extern int FUN_0203a1fc(void *);
extern int FUN_0204dd04(void *);
int FUN_overlay_12__02126ea8(void *unused,void *record) {if(FUN_0203a1fc(record))return 0;return FUN_0204dd04(record);}
