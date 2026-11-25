// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
struct Elem {
    int f0;
    int f4;
    int f8;
    char pad[0x24 - 0xc];
    long long f24;
    int f2c;
};
extern char *D_0211e5e4;
extern int FUN_020e160c(int);
extern long long FUN_02067e0c(int);

void FUN_020e9cf8(int a, int b, int c) {
    int idx = FUN_020e160c(a);
    char *base = D_0211e5e4;
    struct Elem *e = (struct Elem *)(base + idx * 0x30);
    if (e->f4 != 0 && e->f8 >= c) {
        void (*fn)(int, int, int) = *(void (**)(int, int, int))(base + 0x604);
        if (fn != 0) {
            fn(idx, b, c);
        }
        if (*(int *)(D_0211e5e4 + 0x608) != 0 && e->f2c != 0) {
            e->f24 = FUN_02067e0c(e->f2c);
        }
    }
}
