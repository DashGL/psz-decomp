// flags: -O4,s
typedef struct { unsigned int w[9]; } M33;
typedef struct { unsigned int w[12]; } M43;
extern short DAT_020ef83c[];
extern int FUN_02047440(void *);
extern int FUN_0204771c(void *);
extern void FUN_02047cac(void *);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
extern char *FUN_0204daa8(unsigned int);
extern int FUN_0204260c(void *, unsigned int, M43 *, M33 *);
#pragma thumb off
extern void FUN_0205aa80(M33 *);
extern void FUN_0205aed0(M33 *, M33 *, M33 *);
#pragma thumb reset
extern void FUN_0205ab90(M33 *, int, int);
extern void FUN_0204b3c0(void *, int);
int FUN_02047bdc(char *s) {
    M43 c;
    M33 b, a;
    int result = FUN_02047440(s);
    if (!result) {
        char *obj = 0;
        if (FUN_0204771c(s) && *(void **)(s + 48) && !*(int *)(s + 264)) {
            char *p;
            FUN_0206e728(*(void **)(s + 48), FUN_02047cac);
            FUN_0206e738(*(void **)(s + 48), s);
            p = FUN_0204daa8(*(unsigned int *)(s + 232));
            if (p) obj = *(char **)(p + 140);
        }
        if (obj) {
            unsigned int flags = *(unsigned int *)(s + 268);
            if (flags & 2) FUN_0204260c(obj, 5, &c, &b);
            else if (flags & 4) FUN_0204260c(obj, 11, &c, &b);
            else FUN_0204260c(obj, 8, &c, &b);
            if (*(unsigned int *)(s + 268) & 1) {
                FUN_0205aa80(&a);
                FUN_0205ab90(&a, DAT_020ef83c[0], DAT_020ef83c[1]);
                FUN_0205aed0(&a, &b, &b);
            }
            FUN_0204b3c0(s, 4);
            *(int *)(s + 264) = 1;
        }
    }
    return result;
}
