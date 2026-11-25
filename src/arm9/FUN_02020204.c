// FUN_02020204 @ 0x02020204 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02020204 @ 0x02020204 (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0205f9cc(void);
extern void FUN_0205fa00(int, int, int);
extern void FUN_0205fa6c(void);

void FUN_02020204(int a, int b, int c) {
    FUN_0205f9cc();
    FUN_0205fa00(a, b, c);
    FUN_0205fa6c();
}
