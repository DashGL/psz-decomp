// FUN_020d4bc0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020d4bc0 @ 0x020d4bc0 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int *FUN_020c72f8(int, void *);

int FUN_020d4bc0(int *p, int a, short b) {
    struct {
        int *ptr;
        int a;
        short b;
        char pad[0x9a];
    } s;
    int *res;
    s.a = a;
    s.b = b;
    s.ptr = &s.a;
    res = FUN_020c72f8(p[3], &s);
    if (res != 0) {
        return *res;
    }
    return 0;
}
