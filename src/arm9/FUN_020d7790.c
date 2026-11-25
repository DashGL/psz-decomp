// FUN_020d7790 @ 0x020d7790 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d7790 @ 0x020d7790 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02003e24(int, int);
extern int D_020ffb78[];
extern int D_020ffbf8;

int FUN_020d7790(int a) {
    if (FUN_02003e24(a, D_020ffb78[0x1f]) == 0 || FUN_02003e24(a, D_020ffbf8) == 0) {
        return 1;
    }
    return 0;
}
