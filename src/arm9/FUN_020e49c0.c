// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern int FUN_020e5c5c(char *, const char *, int);
extern int FUN_02005738(char *, int, int);
extern void FUN_020e5cc8(unsigned char, int, int, int, int *, int);

void FUN_020e49c0(int a, int b, const char *c) {
    char tok[0x10];
    int arr[0x80];
    int i = 0;
    for (; i < 0x80; i++) {
        if (FUN_020e5c5c(tok, c + 1, i) == -1) {
            break;
        }
        arr[i] = FUN_02005738(tok, 0, 10);
    }
    FUN_020e5cc8((unsigned char)c[0], b, 0, 0, arr, i);
}
