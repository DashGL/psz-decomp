// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern void *DAT_0211d094;
extern int FUN_020c6e0c(void *);
extern int *FUN_020c6e10(void *, int);
int FUN_020d220c(int a, int b, int c) {
    int i;
    if (DAT_0211d094 == 0) {
        return -1;
    }
    for (i = 0; i < FUN_020c6e0c(DAT_0211d094); i++) {
        int *p = FUN_020c6e10(DAT_0211d094, i);
        if (p[0] == a && p[1] == b && p[2] == c) {
            return i;
        }
    }
    return -1;
}
