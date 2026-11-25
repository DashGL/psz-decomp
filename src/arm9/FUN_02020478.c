// FUN_02020478 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// FUN_02020478 @ 0x02020478 (0x30, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0206740c(int, int);
extern void (*D_020ec0ac[])(int, int, int);

void FUN_02020478(int *p) {
    void (*fn)(int, int, int) = D_020ec0ac[p[0]];
    FUN_0206740c(p[1], p[3]);
    fn(p[1], p[2], p[3]);
}
