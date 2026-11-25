// FUN_020c88ac @ 0x020c88ac (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c88ac @ 0x020c88ac (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c979c(int **, int);

int FUN_020c88ac(int **p) {
    int *q;
    if (p == 0 || (q = *p) == 0) {
        return 2;
    }
    if (q[0x42] != 0) {
        return 0;
    }
    return FUN_020c979c(p, 0);
}
