// FUN_02020434 @ 0x02020434 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02020434 @ 0x02020434 (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0205f66c(void);
extern void FUN_0205f684(int, int, int);
extern void FUN_0205f6e8(void);

void FUN_02020434(int a, int b, int c) {
    FUN_0205f66c();
    FUN_0205f684(a, b, c);
    FUN_0205f6e8();
}
