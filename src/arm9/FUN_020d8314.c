// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern const char D_020fffe8[];
extern char *FUN_020d82d4(char *, int);
extern int FUN_020d829c(char *);
extern int FUN_020d7790(char *);
extern void FUN_020d810c(void *, char *, const char *);

void FUN_020d8314(void *a, char *b) {
    char *k = FUN_020d82d4(b + 1, 0x5c);
    while (k != 0) {
        const char *v = FUN_020d82d4(0, 0x5c);
        if (v == 0) {
            v = D_020fffe8;
        }
        if (FUN_020d829c(k) != 0 && FUN_020d7790(k) == 0) {
            FUN_020d810c(a, k, v);
        }
        k = FUN_020d82d4(0, 0x5c);
    }
}
