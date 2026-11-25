// FUN_020cf7a8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020cf7a8 @ 0x020cf7a8 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c72f8(int, void *);

int FUN_020cf7a8(char **a, int b, int *c) {
    struct {
        int b;
        char pad[0x1c];
    } s;
    char *v = *a;
    int r;
    s.b = b;
    r = FUN_020c72f8(*(int *)(v + 0x5c8), &s);
    if (c != 0) {
        *c = r;
    }
    if (r != 0) {
        return 1;
    }
    return 0;
}
