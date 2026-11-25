// FUN_overlay_12__02132014 @ 0x02132014 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02132014 @ 0x02132014 (code 0x6, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reapply current record pointer to receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131ff8(void *,unsigned int);
void FUN_overlay_12__02132014(unsigned int *p) {FUN_overlay_12__02131ff8(p,p[12]);}
