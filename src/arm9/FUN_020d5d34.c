// FUN_020d5d34 @ 0x020d5d34 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020d5d34 @ 0x020d5d34 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c7590(int);
extern int ***FUN_0202820c(int);

int FUN_020d5d34(int a) {
    int r = FUN_020c7590(a);
    if (r == -1) {
        int ***p = FUN_0202820c(a);
        if (p == 0) {
            return 0;
        }
        r = **p[3];
    }
    return r;
}
