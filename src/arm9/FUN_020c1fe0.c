// FUN_020c1fe0 @ 0x020c1fe0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c1fe0 @ 0x020c1fe0
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate/construct 84-byte singleton then always invoke its initialization helper.
 * Evidence: scratch/coverage-root/batch3/020c1fe0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c1f94(void *);
extern void FUN_020c200c(void *);
void FUN_020c1fe0(void) {
    if(!*(void **)0x0211c860) { void *object=FUN_020ba894(84);if(object)object=FUN_020c1f94(object);*(void **)0x0211c860=object; }
    FUN_020c200c(*(void **)0x0211c860);
}
