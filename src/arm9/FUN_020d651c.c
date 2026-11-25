// FUN_020d651c @ 0x020d651c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020d651c @ 0x020d651c (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020d65a8(int *);
extern void FUN_020d6548(int *);
extern void FUN_020d7250(int *);
extern int *D_020feb98;

void FUN_020d651c(int *p) {
    if (p == 0) {
        p = D_020feb98;
    }
    if (p[0x2f] != 0) {
        FUN_020d65a8(p);
    }
    FUN_020d6548(p);
    FUN_020d7250(p);
}
