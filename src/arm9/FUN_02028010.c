// FUN_02028010 @ 0x02028010 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02028010 @ 0x02028010 (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020264c8(int, unsigned short);

int FUN_02028010(int a, unsigned short *b) {
    unsigned short v = b[1];
    return FUN_020264c8(a, ((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}
