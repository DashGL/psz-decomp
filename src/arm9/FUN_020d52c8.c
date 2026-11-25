// FUN_020d52c8 @ 0x020d52c8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d52c8 @ 0x020d52c8 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02003c70(int);
extern int D_020feb24;

void FUN_020d52c8(int *a, int *b) {
    int v = *a;
    if (v == 0) {
        *a = (int)&D_020feb24;
        *b = 0;
        return;
    }
    if (*b == -1) {
        *b = FUN_02003c70(v) + 1;
    }
}
