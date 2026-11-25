// FUN_020d4d60 @ 0x020d4d60 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d4d60 @ 0x020d4d60 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020c7478(int);
extern void FUN_020c718c(int);
extern void FUN_020c6de0(int);
extern void FUN_020c7bec(int *);
extern void FUN_020c7820(void);

void FUN_020d4d60(int *p) {
    if (p[7] != 0) {
        p[5] = 1;
        return;
    }
    FUN_020c7478(p[0]);
    FUN_020c718c(p[3]);
    FUN_020c6de0(p[4]);
    FUN_020c7bec(p);
    FUN_020c7820();
}
