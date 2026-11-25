// FUN_020c0c18 @ 0x020c0c18 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c0c18 @ 0x020c0c18
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazy allocation and construction of 12-byte singleton, retaining null allocation result.
 * Evidence: scratch/coverage-root/batch2/020c0c18.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int), *FUN_020c06d4(void *);
void *FUN_020c0c18(void) {
    if(!*(void **)0x0211b3d8) { void *object=FUN_020ba894(12);if(object)object=FUN_020c06d4(object);*(void **)0x0211b3d8=object; }
    return *(void **)0x0211b3d8;
}
