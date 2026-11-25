// flags: -O4,s
typedef struct {
    unsigned int x, y, z;
} Vec;
extern char *FUN_02086150(unsigned int);
extern int FUN_0203eb14(unsigned int);
extern void FUN_0203666c(void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_0204b3ac(void *, void (*)(void), void *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_0203c004(void *);
extern void *FUN_02046d94(void *, int, int);
extern void FUN_0203bc80(void);
enum { E0 = 0, E1 = 1 };

void FUN_0203a594(char *s) {
    unsigned int a[25], b[25];
    Vec pa, pb;
    char *p;
    if (*(int *)(s + 504) <= 0)
        return;
    p = FUN_02086150(*(unsigned int *)(s + 252));
    if (p && (((signed char)p[140] == 0) ? E1 : E0))
        *(int *)(s + 504) = 0;
    else
        *(unsigned int *)(s + 504) -= 1;
    if (FUN_0203eb14((unsigned char)s[152]) && !*(void **)(s + 452)) {
        if ((*(unsigned int *)(s + 248) & 0x8000) ? E1 : E0) {
            FUN_0203666c(a);
            a[21] = 29;
            a[22] = *(unsigned int *)(s + 252);
            FUN_020345f0(&pa, s + 180);
            *(Vec *)&a[8] = pa;
            if ((signed char)s[583] == 0) {
                FUN_02046d94(a, 0, 0);
                FUN_02046d94(a, 0, 1);
            }
            s[583] = (signed char)s[583] + 1;
        } else {
            FUN_0203666c(b);
            b[21] = 29;
            b[22] = *(unsigned int *)(s + 252);
            FUN_020345f0(&pb, s + 180);
            *(Vec *)&b[8] = pb;
            *(void **)(s + 452) = FUN_02046d94(b, 0, 4);
            if (*(void **)(s + 452))
                FUN_0204b3ac(*(void **)(s + 452), FUN_0203bc80, s, 0);
            if (((*(unsigned int *)(s + 248) & 0x80000) ? E1 : E0) && (signed char)s[583] == 0)
                FUN_020c193c(1, 30, 0, 0, -1);
            s[583] = (signed char)s[583] + 1;
        }
    }
    if (!*(int *)(s + 504))
        FUN_0203c004(s);
}
