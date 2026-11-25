// FUN_02027d14 @ 0x02027d14 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02027d14 @ 0x02027d14 (0x34, arm)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02027d48(int, int);
extern int D_021070b4[];

int FUN_02027d14(int a, int b) {
    if (FUN_02027d48(a, b) == 0) {
        return -39;
    }
    D_021070b4[0] = a;
    D_021070b4[1] = b;
    return 0;
}
