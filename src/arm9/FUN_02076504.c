// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02090c20(void);
extern void FUN_02090f74(void *, int, void *, int);
extern void FUN_020c193c(int, int, int, int, int);
struct V3 { int x, y, z; };
void FUN_02076504(char *a, char *b) {
    short sp4[2];
    struct V3 sp8;
    char *r4 = *(char **)(b + 0xc);
    int r5 = 0;
    int r3 = 0;
    if (r4[9] == 1) {
        sp8 = *(struct V3 *)(a + 0x38);
        if (r4[10] & 1) {
            r5 |= 1;
        }
        FUN_02090f74(sp4, FUN_02090c20(), &sp8, r5);
        r5 = sp4[0];
        r3 = sp4[1];
    }
    if (r4[8] == 1) {
        FUN_020c193c(*(int *)r4, *(int *)(r4 + 4), r5, r3, 4);
    } else {
        FUN_020c193c(*(int *)r4, *(int *)(r4 + 4), r5, r3, -1);
    }
}
