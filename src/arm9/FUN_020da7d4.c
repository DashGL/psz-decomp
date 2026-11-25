// FUN_020da7d4 @ 0x020da7d4 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020da7d4 @ 0x020da7d4 (0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d903c(int *);
extern int FUN_020da518(int *);
extern int FUN_020da6f8(int *);

int FUN_020da7d4(int *p) {
    FUN_020d903c(p);
    switch (p[0]) {
    case 2:
    case 3:
        return FUN_020da518(p);
    case 0:
        return FUN_020da6f8(p);
    case 1:
    default:
        return 0;
    }
}
