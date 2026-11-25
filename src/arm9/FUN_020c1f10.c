// FUN_020c1f10 @ 0x020c1f10 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c1f10 @ 0x020c1f10
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select 148-byte context by nonnegative index, otherwise use embedded fallback at +20.
 * Evidence: scratch/coverage-root/batch3/020c1f10.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200eb60(void *);
void FUN_020c1f10(int index) {
    if(index>=0) { char *manager=*(char **)0x0211c85c;FUN_0200eb60(*(char **)(manager+0xb4)+148*index); }
    else FUN_0200eb60(*(char **)0x0211c85c+32);
}
