// FUN_020c3b28 @ 0x020c3b28 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c3b28 @ 0x020c3b28
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clean and free optional singleton, then clear global pointer.
 * Evidence: scratch/coverage-root/batch5/020c3b28.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c3be0(void *),FUN_020ba8ac(void *);
void FUN_020c3b28(void) { void *object=*(void **)0x0211ced4;if(object) { if(object) { FUN_020c3be0(object);FUN_020ba8ac(object); }*(void **)0x0211ced4=0; } }
