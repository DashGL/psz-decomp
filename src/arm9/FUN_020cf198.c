// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern int FUN_020ce6f4(int, int, int, char **, int, int, int);
extern int FUN_020cde40(int, int, int);

int FUN_020cf198(int a, int *b) {
    char *out;
    int r = FUN_020ce6f4(a, 2, 0, &out, 0, 0, 0);
    if (r == 0) {
        r = FUN_020cde40(a, b[4], *(int *)(out + 0x18));
        if (r == 0) {
            b[0] = 0x65;
            return 0;
        }
    }
    return r;
}
