// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern int FUN_020c72f8(int, void *);
extern int *D_0211d084[];
extern const char D_020fe668[];
extern const char D_020fe66c[];
extern const char D_020fe644[];

int FUN_020d1f70(int *p, int a) {
    struct {
        int a;
        char pad[0x10];
    } s;
    if (p == 0) {
        p = D_0211d084[1];
    }
    if (p == 0) {
        FUN_02000edc(D_020fe668, D_020fe66c, D_020fe644, 0x150);
    }
    s.a = a;
    return FUN_020c72f8(p[0], &s);
}
