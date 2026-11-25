// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
extern int *FUN_0207381c(int, int);
extern void FUN_02073678(void);
extern void FUN_02073bbc(int, int);

void FUN_02074520(int a, int b) {
    int *p = FUN_0207381c(a, b);
    if (p != 0) {
        int v = 9;
        switch (b) {
        case 0:
            v = 8;
            break;
        case 1:
        case 2:
            v = 8;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            break;
        }
        FUN_02073678();
        p[0xc] = v;
        FUN_02073bbc(a, b);
    }
}
