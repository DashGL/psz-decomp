// FUN_020c3a28 @ 0x020c3a28 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c3a28 @ 0x020c3a28
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate/initialize 16-byte singleton and return reloaded global pointer.
 * Evidence: scratch/coverage-root/batch5/020c3a28.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c3924(void *);
void *FUN_020c3a28(void) { if(!*(void **)0x0211ced0) { void *object=FUN_020ba894(16);if(object)object=FUN_020c3924(object);*(void **)0x0211ced0=object; }return *(void **)0x0211ced0; }
