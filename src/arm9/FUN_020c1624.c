// FUN_020c1624 @ 0x020c1624 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c1624 @ 0x020c1624
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 272 bytes and initialize with input argument when allocation succeeds.
 * Evidence: scratch/coverage-root/batch3/020c1624.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c14f0(void *,unsigned int);
void *FUN_020c1624(unsigned int arg) { void *object=FUN_020ba894(272);if(object)object=FUN_020c14f0(object,arg);return object; }
