// FUN_020e9a38 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020e9a38 @ 0x020e9a38 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020e160c(int);
extern char * volatile D_0211e5e4;

void FUN_020e9a38(int a, int b) {
    if (*(void (**)(int, int))(D_0211e5e4 + 0x60c) != 0) {
        int r = FUN_020e160c(a);
        (*(void (**)(int, int))(D_0211e5e4 + 0x60c))(b, r);
    }
}
