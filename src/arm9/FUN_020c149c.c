// FUN_020c149c @ 0x020c149c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c149c @ 0x020c149c
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 24-byte state, initialize from two input words if allocation succeeds, return pointer.
 * Evidence: scratch/coverage-root/batch3/020c149c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c14b8(void *,unsigned int,unsigned int);
void *FUN_020c149c(unsigned int low,unsigned int high) { void *state=FUN_020ba894(24);if(state)state=FUN_020c14b8(state,low,high);return state; }
