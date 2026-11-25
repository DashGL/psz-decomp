// FUN_020c070c @ 0x020c070c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c070c @ 0x020c070c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear singleton and free receiver; return original pointer value without dereferencing it.
 * Evidence: scratch/coverage-root/batch2/020c070c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020ba8ac(void *);
void *FUN_020c070c(void *self) { *(void **)0x0211b3d8=0;FUN_020ba8ac(self);return self; }
