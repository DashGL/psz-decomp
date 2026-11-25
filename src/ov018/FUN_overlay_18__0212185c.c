// FUN_overlay_18__0212185c @ 0x0212185c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_18__0212185c @ 0x0212185c (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve coordinate record and table, returning selected halfword or missing sentinel.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_overlay_18__02121808(void *);
extern void *FUN_overlay_18__02121748(void *);
extern unsigned int FUN_overlay_18__02120f38(void *,int,int);
unsigned int FUN_overlay_18__0212185c(void *p) {unsigned int *record=FUN_overlay_18__02121808(p);void *data=FUN_overlay_18__02121748(p);if(data)return FUN_overlay_18__02120f38(data,record[3],record[4]);return 65535;}
