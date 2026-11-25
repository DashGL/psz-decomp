// FUN_overlay_14__0211eed0 @ 0x0211eed0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211eed0 @ 0x0211eed0 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve current coordinate record and data, returning selected halfword or missing sentinel.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_overlay_14__0211ee7c(void *);
extern void *FUN_overlay_14__0211edc0(void *);
extern unsigned int FUN_overlay_14__0211fda8(void *,int,int);
unsigned int FUN_overlay_14__0211eed0(void *p) {unsigned int *record=FUN_overlay_14__0211ee7c(p);void *data=FUN_overlay_14__0211edc0(p);if(data)return FUN_overlay_14__0211fda8(data,record[3],record[4]);return 65535;}
