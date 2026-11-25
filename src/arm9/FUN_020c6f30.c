// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x76, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020c6e10(int *, unsigned int);
extern unsigned int FUN_020c7050(int, int, unsigned int, unsigned int, int, int *);
extern unsigned int FUN_020c7010(int, int, unsigned int, unsigned int, int);

int FUN_020c6f30(int *a, int b, int c, unsigned int d, int e) {
    int sp_c = 1;
    unsigned int r6;
    unsigned int res;
    if (a == 0 || (r6 = a[0]) == 0) {
        return -1;
    }
    if (e != 0) {
        res = FUN_020c7050(b, FUN_020c6e10(a, d), r6 - d, a[2], c, &sp_c);
    } else {
        res = FUN_020c7010(b, FUN_020c6e10(a, d), r6 - d, a[2], c);
    }
    if (res != 0 && sp_c != 0) {
        return (int)(res - a[5]) / a[2];
    }
    return -1;
}
