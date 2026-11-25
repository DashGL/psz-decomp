// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
struct Key {
    int a;
    unsigned short b;
    unsigned short c;
    int d;
};
extern int *FUN_020c7e54(void);
extern int FUN_020c6f30(int, struct Key *, void (*)(void), int, int);
extern void FUN_020c7e84(void);
extern int *FUN_020c6e10(int, int);
extern int FUN_020d3744(int);

int FUN_020c8824(int a, unsigned short b) {
    struct Key k;
    int *ctx = FUN_020c7e54();
    int idx;
    if (ctx[3] == 0) {
        return 0;
    }
    k.a = a;
    k.b = b;
    idx = FUN_020c6f30(ctx[1], &k, FUN_020c7e84, 0, 0);
    if (idx != -1) {
        return FUN_020d3744(FUN_020c6e10(ctx[1], idx)[2]);
    }
    return 0;
}
