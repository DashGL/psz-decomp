// flags: -O4,s
extern char DAT_0211a51c[];
extern char DAT_0211a250[];
extern signed char DAT_0211a230[];
extern int FUN_02084be4(void *);
extern int FUN_020b3bc8(void *);
extern void FUN_0207355c(void *, void *);
void FUN_020735e4(char *s) {
    int i;
    if (FUN_02084be4(DAT_0211a51c) == 1) {
        for (i = 0; i < 4; i++) {
            if (FUN_020b3bc8(DAT_0211a250 + 80 * i) == 1) {
                FUN_0207355c(DAT_0211a250 + 80 * i, s + 4 + 80 * i);
            }
        }
    } else {
        switch (DAT_0211a230[12]) {
        case 1:
            break;
        case 2:
            for (i = 0; i < 4; i++) {
                FUN_0207355c(DAT_0211a250 + 80 * i, s + 4 + 80 * i);
            }
            break;
        }
    }
}
