// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020b07f4(void *);
extern void FUN_020b0714(void *, unsigned char);
int FUN_020b05f0(char *s) {
    int n = FUN_020b07f4(s);
    unsigned char i;
    if (n >= 0 && n < *(short *)(s + 12) && (*(unsigned char **)(s + 4))[16 * n] == 1) {
        int *flags = *(int **)(s + 8);
        if (((flags[n] & 2) ? E1 : E0) == 1) {
            flags[n] &= ~2;
            for (i = 0; i < 4; i++) {
                FUN_020b0714(s, i);
            }
            return 1;
        }
    }
    return 0;
}
