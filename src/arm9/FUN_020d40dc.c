// FUN_020d40dc @ 0x020d40dc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020d40dc @ 0x020d40dc (0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d37d0(int *, int, int);

int FUN_020d40dc(int *p) {
    int c;
    if (p[3] == 7) {
        return 1;
    }
    switch (p[3]) {
    case 6:
        c = 0;
        break;
    default:
        c = 1;
        break;
    }
    if (FUN_020d37d0(p, 2, c) == 0) {
        return 0;
    }
    return 1;
}
