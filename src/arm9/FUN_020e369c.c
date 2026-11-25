// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern int FUN_020e961c(void);
extern int FUN_020e0558(void);
extern int FUN_020d8b30(int, int);
extern int FUN_020d81b0(int, int, int);

int FUN_020e369c(int a, int b, int c) {
    if (FUN_020e961c() == 0 || FUN_020e0558() != 0) {
        return c;
    }
    int p = FUN_020d8b30(*(int *)(FUN_020e961c() + 0xe4), a);
    if (p != 0) {
        c = FUN_020d81b0(p, b, c);
    }
    return c;
}
