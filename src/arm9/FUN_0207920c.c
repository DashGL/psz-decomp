// FUN_0207920c @ 0x0207920c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207920c @ 0x0207920c (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_02079160(int, int *, int, unsigned short, int, int, int, int, int);

void FUN_0207920c(int a, int b, int c, int d, unsigned short e, int f, int g) {
    int pair[2];
    pair[0] = b;
    pair[1] = c;
    FUN_02079160(a, pair, d, e, f, -1, -1, 8, g);
}
