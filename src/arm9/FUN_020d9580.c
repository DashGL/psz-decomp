// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020c7530(int, int, int, int);
extern void FUN_020d9840(void *);
extern int FUN_020d95f4(void *, int, int, int, int);
extern void FUN_020d9280(void *);
int FUN_020d9580(char *a, int b, int c) {
    int r4 = 1;
    int sp4;
    int sp8;
    do {
        r4--;
        sp4 = FUN_020c7530(*(int *)(a + 0x6b4), b, c, 0);
        if (sp4 > 0 || r4 < 0 || *(int *)(a + 0x80) > 0) {
            break;
        }
        FUN_020d9840(a);
        sp8 = FUN_020d95f4(a, 0, 0, 2, 0);
        if (sp8 != 0) {
            FUN_020d9280(a);
            return sp8;
        }
    } while (r4 >= 0);
    if (sp4 <= 0) {
        return 3;
    }
    return 0;
}
