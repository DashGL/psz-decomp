// FUN_020c3b04 @ 0x020c3b04 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c3b04 @ 0x020c3b04
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate and construct 780-byte singleton; preserve null allocation result.
 * Evidence: scratch/coverage-root/batch5/020c3b04.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c3a9c(void *);
void FUN_020c3b04(void) { if(!*(void **)0x0211ced4) { void *object=FUN_020ba894(780);if(object)object=FUN_020c3a9c(object);*(void **)0x0211ced4=object; } }
