// flags: -O4,s
extern void FUN_02046020(void *, char *, void *, int);
extern int FUN_0204630c(void *, void *);
extern char *FUN_02048d20(unsigned char, char *, int, void *, int, int, int, int);
extern void FUN_02049944(char *, int);

void FUN_020b56b4(void *a, void *b, unsigned char *c, int d) {
    char sp10[0xc];
    char *r4;
    FUN_02046020(b, sp10, c, 0);
    r4 = FUN_02048d20(c[1], sp10, 0, b, FUN_0204630c(b, c), 8, 0, 0);
    if (r4 != 0) {
        if (r4 != 0) {
            *(int *)(r4 + 0x98) = 8;
            *(int *)(r4 + 0x44) = 0x28000;
            FUN_02049944(r4, 0x36);
            if ((*(int *)(r4 + 0xe4) & 0x800000) == 0) {
                *(int *)(r4 + 0x4c) = d;
            }
        }
    }
}
