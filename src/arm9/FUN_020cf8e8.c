// FUN_020cf8e8 @ 0x020cf8e8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch54-manifest.json; original draft retained for referenced provenance.
// FUN_020cf8e8 @ 0x020cf8e8 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020cf928(int, int (*)(void *,void *,void *), void *);
extern int FUN_020cf8b4(void *,void *,void *);

int FUN_020cf8e8(int a, int b, int c, int *d) {
    struct {
        int b;
        int c;
        int *d;
        int flag;
    } s;
    s.b = b;
    s.flag = 0;
    s.c = c;
    s.d = d;
    FUN_020cf928(a, FUN_020cf8b4, &s);
    if (s.flag == 0) {
        *d = 0;
    }
    return 0;
}
