// FUN_020684c0 @ 0x020684c0 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch35-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_020684c0 @ 0x020684c0 (0x34, arm)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_02068728(void);
extern unsigned short D_02118504;

void FUN_020684c0(int a, int b) {
    unsigned short x = (b & 0x7f00) >> 8;
    if (x == 0x10) {
        D_02118504 = 1;
        return;
    }
    FUN_02068728();
}
