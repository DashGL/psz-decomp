// flags: -O4,s
extern void FUN_0208286c(void *), FUN_0206d4bc(void *, int, int, int);
extern int FUN_020832b4(int);
void FUN_02082be4(char *s, int *input, int mode) {
    *(int *)(s + 1044) = -1;
    FUN_0208286c(s);
    *(int *)(s + 36) = 0;
    *(int *)s = input[0];
    *(int *)(s + 4) = input[1];
    *(int *)(s + 8) = input[2];
    *(int *)(s + 12) = input[3];
    *(int *)(s + 16) = input[4];
    s[46] = 3;
    s[47] = 2;
    *(int *)(s + 20) = FUN_020832b4(-1);
    if (mode == 5) {
        FUN_0208286c(s + 52);
        *(int *)(s + 88) = 0;
        FUN_0206d4bc(s + 52, mode, input[0], -1);
        s[98] = 5;
        s[99] = 2;
        s[100] = mode;
        *(int *)(s + 72) = FUN_020832b4(-1);
        *(int *)(s + 1040) = 2;
    } else {
        *(int *)(s + 1040) = 1;
    }
}
