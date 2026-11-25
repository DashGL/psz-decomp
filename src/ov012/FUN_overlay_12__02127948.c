// FUN_overlay_12__02127948 @ 0x02127948 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02127948 @ 0x02127948 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reject empty item then test eligibility of supplied second argument.
 * Field identities remain provisional.
 */
extern int FUN_0203a1fc(void *);
extern int FUN_0204db60(void *);
int FUN_overlay_12__02127948(void *self,void *record) {if(FUN_0203a1fc(record))return 0;if(FUN_0204db60(record))return 1;return 0;}
