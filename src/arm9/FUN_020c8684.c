// FUN_020c8684 @ 0x020c8684 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c8684 @ 0x020c8684 (0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
extern int *FUN_020c7e54(void);
extern void FUN_020d34c4(int);
extern void FUN_020c6de0(int);

int FUN_020c8684(void) {
    int *p = FUN_020c7e54();
    if (p[3] == 0) {
        return 3;
    }
    FUN_020d34c4(p[0]);
    FUN_020c6de0(p[2]);
    FUN_020c6de0(p[1]);
    p[3] = 0;
    return 0;
}
