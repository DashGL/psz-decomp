// FUN_0200d378 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// FUN_0200d378 @ 0x0200d378 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0200d454(void);
struct Entry {
    void (*fn)(void);
    int b, c, d, e;
};
extern struct Entry D_020ebbc4[];

void FUN_0200d378(int a, int b) {
    unsigned valid = 0;
    do {
        if (b <= -1) break;
        if (b >= 19) break;
        valid = 1;
    } while (0);
    if (valid) {
        FUN_0200d454();
        D_020ebbc4[b].fn();
    }
}
