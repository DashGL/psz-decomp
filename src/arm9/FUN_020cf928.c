// FUN_020cf928 @ 0x020cf928 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch54-manifest.json; original draft retained for referenced provenance.
// FUN_020cf928 @ 0x020cf928 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
typedef int (*Visitor)(void *,void *,void *);
extern int FUN_020c73a0(int, int (*)(void *,void *), void *);
extern int FUN_020cf914(void *,void *);

int FUN_020cf928(char **a, Visitor b, void *c) {
    struct {
        char **a;
        Visitor b;
        void *c;
    } s;
    char *v = *a;
    s.a = a;
    s.b = b;
    s.c = c;
    if (FUN_020c73a0(*(int *)(v + 0x5c8), FUN_020cf914, &s) == 0) {
        return 1;
    }
    return 0;
}
