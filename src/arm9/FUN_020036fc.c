// FUN_020036fc @ 0x020036fc (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_020036fc @ 0x020036fc (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02000fd4(int, int, int, int);

int FUN_020036fc(int a, int b, int c) {
    if (FUN_02000fd4(b, 1, c, a) != c) {
        a = 0;
    }
    return a;
}
