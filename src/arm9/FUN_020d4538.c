// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
struct Item {
    int f0;
    int f4;
    unsigned short f8;
    unsigned short fa;
    int fc;
};
extern int FUN_020c7824(void);
extern int FUN_020c6e0c(int);
extern void FUN_020c6e28(int, struct Item *);

int FUN_020d4538(char *a, unsigned short b, int c) {
    struct Item it = {0};
    int n;
    it.f0 = *(int *)(a + 0x58);
    it.f4 = c;
    it.f8 = b;
    it.fc = FUN_020c7824();
    n = FUN_020c6e0c(*(int *)(a + 0x60));
    FUN_020c6e28(*(int *)(a + 0x60), &it);
    if (n + 1 == FUN_020c6e0c(*(int *)(a + 0x60))) {
        return 1;
    }
    return 0;
}
