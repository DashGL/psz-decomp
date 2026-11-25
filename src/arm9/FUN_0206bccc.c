// FUN_0206bccc @ 0x0206bccc (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0206bccc @ 0x0206bccc (0x20, arm)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_0206bbd4(int, int, int, int);

int FUN_0206bccc(int a) {
    return FUN_0206bbd4(a == 1 ? a : 0, 0, 0, 1);
}
