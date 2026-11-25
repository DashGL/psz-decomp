// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020bc3a4(void *);
extern void FUN_020bc578(void *, int, int);
extern void FUN_0206590c(void *, void *);
extern void FUN_0206740c(void *, int);
extern int FUN_020bc4dc(void *, void *);

int FUN_020bc498(char *s, void *b) {
    int r;
    void *dst;
    if (*(int *)(s + 4) == 2) {
        return 0;
    }
    r = FUN_020bc3a4(b);
    FUN_020bc578(s, r, 0x20);
    dst = *(void **)(s + 112);
    if (!dst) {
        return 0;
    }
    FUN_0206590c(b, dst);
    FUN_0206740c(*(void **)(s + 112), r);
    return FUN_020bc4dc(s, *(void **)(s + 112));
}
