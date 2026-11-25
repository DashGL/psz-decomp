// flags: -O4,p
typedef struct {
    int f0;
    int f4;
} S_ce18c;
extern char DAT_020fdd78[];
extern void FUN_020d1b74(void *, char *);
extern int FUN_020c77cc(void *);
extern int FUN_020c6f30(int, int *, void *, int, int);
extern void FUN_020ce12c(void);
extern S_ce18c *FUN_020c6e10(int, int);
extern void FUN_020c7bec(int);
int FUN_020ce18c(void *a, int b, void *c, void *d) {
    int sp4[2];
    int index;
    if (c == 0) {
        FUN_020d1b74(a, DAT_020fdd78);
        return 2;
    }
    sp4[0] = FUN_020c77cc(c);
    if ((index = FUN_020c6f30(b, &sp4[0], (void *)FUN_020ce12c, 0, 1)) != -1) {
        S_ce18c *r5 = FUN_020c6e10(b, index);
        FUN_020c7bec(r5->f4);
        r5->f4 = FUN_020c77cc(d);
    }
    FUN_020c7bec(sp4[0]);
    sp4[0] = 0;
    return 0;
}
