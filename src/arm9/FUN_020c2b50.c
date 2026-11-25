// FUN_020c2b50 @ 0x020c2b50 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c2b50 @ 0x020c2b50
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize 92-byte child, store allocation result and return receiver.
 * Evidence: scratch/coverage-root/batch4/020c2b50.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c2ca8(void *);
void *FUN_020c2b50(void **self) { void *child=FUN_020ba894(92);if(child)child=FUN_020c2ca8(child);*self=child;return self; }
