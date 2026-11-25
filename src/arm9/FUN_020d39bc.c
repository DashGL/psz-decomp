// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d3828(void *);
extern void FUN_020d29bc(void *, void *);
extern void FUN_020d290c(void *);
extern int FUN_020d4728(void *, void *, void *);
int FUN_020d39bc(char *a, int b, int c) {
    char buf2[0x20];
    char buf1[0x20];
    if (*(int *)(a + 0xc) != 2) {
        if (FUN_020d3828(a) != 0) {
            return 1;
        }
        return 0;
    }
    if (c < 0x20) {
        if (FUN_020d3828(a) != 0) {
            return 1;
        }
        return 0;
    }
    FUN_020d29bc(buf2, (void *)b);
    FUN_020d290c(buf1);
    FUN_020d29bc(a + 0x68, buf1);
    if (FUN_020d4728(a, buf2, buf1) == 0) {
        return 0;
    }
    *(int *)(a + 0xc) = 3;
    return 1;
}
