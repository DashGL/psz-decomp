// FUN_02021388 @ 0x02021388 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02021388 @ 0x02021388 (0x38, arm)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_02066bb8(void *, int);
extern int D_020f6944;
extern int D_021072bc;
extern int D_021071fc;

void FUN_02021388(int a) {
    D_020f6944 = a;
    FUN_02066bb8(&D_021072bc, a);
    FUN_02066bb8(&D_021071fc, a);
}
