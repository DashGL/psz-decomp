// FUN_020df484 @ 0x020df484 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020df484 @ 0x020df484 (0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020df414(int, int);
extern int FUN_02003c70(int);
extern void FUN_02003c8c(int, int);

int FUN_020df484(int a, int b, int c, int d) {
    int r = FUN_020df414(a, b);
    if (r == 0) {
        return 0;
    }
    if (FUN_02003c70(r) >= d) {
        return 0;
    }
    FUN_02003c8c(c, r);
    return 1;
}
