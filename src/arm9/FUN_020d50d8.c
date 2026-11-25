// FUN_020d50d8 @ 0x020d50d8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020d50d8 @ 0x020d50d8 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern unsigned long long FUN_020c7824(void);
extern int FUN_020c73a0(int, void *, int *);
extern int FUN_020d50a0(void *, const int *);

int FUN_020d50d8(int *p) {
    int v = FUN_020c7824();
    if (FUN_020c73a0(p[3], (void *)FUN_020d50a0, &v) == 0) {
        return 1;
    }
    return 0;
}
