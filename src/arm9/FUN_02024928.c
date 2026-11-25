// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,s -noThumb
extern int DAT_021181a0[];
extern int FUN_0202b5f4(void *);
int FUN_02024928(void) {
    char *r0 = *(char **)(DAT_021181a0[1] + 0xa4);
    if (r0 != 0) {
        if (*(unsigned char *)(r0 + 9) != 0) {
            return FUN_0202b5f4(r0);
        }
        int r1 = *(int *)(r0 + 0x44);
        unsigned char c;
        if (r1 != 0 || (c = *(unsigned char *)(r0 + 8)) == 4 || c == 10 || c == 11) {
            return r1;
        }
        return -1;
    }
    return 0;
}
