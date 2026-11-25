// FUN_020c1b30 @ 0x020c1b30 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c1b30 @ 0x020c1b30
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset indexed context then reload manager and clear corresponding minimum array word.
 * Evidence: scratch/coverage-root/batch3/020c1b30.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200f0d0(void *);
void FUN_020c1b30(unsigned int index) {
    char *manager=*(char **)0x0211c85c;
    FUN_0200f0d0((*(void ***)(manager+20))[index]);
    manager=*(char **)0x0211c85c;(*(unsigned int **)(manager+28))[index]=0;
}
