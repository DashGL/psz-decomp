// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_0211daa0[];
extern int FUN_020c7694(int);
extern int FUN_020c750c(int, char *, int, int, void *, int *);
extern void FUN_020d7288(void *, char *, int, void *);
void FUN_020d6548(char *a) {
    int spc[2];
    int sp8 = 8;
    if (*(int *)(a + 0xc4) != 0) {
        while (FUN_020c7694(*(int *)a) != 0) {
            int n = FUN_020c750c(*(int *)a, DAT_0211daa0, 0xff, 0, spc, &sp8);
            if (n != -1) {
                DAT_0211daa0[n] = 0;
                FUN_020d7288(a, DAT_0211daa0, n, spc);
            }
        }
    }
}
