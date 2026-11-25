// flags: -O4,p
typedef struct { int f0; int f4; } Pair;
extern const char DAT_020fdd78[];
extern void FUN_020ce12c(void);
extern void FUN_020d1b74(void *, const char *);
extern void *FUN_020c77cc(void *);
extern int FUN_020c6f30(void *, void **, void *, int, int);
extern Pair *FUN_020c6e10(void *, int);
extern void FUN_020c7bec(void *);
int FUN_020ce1f4(void *a, void *b, void *c, int *d) {
    void *p[2];
    int idx;
    if (c == 0) {
        FUN_020d1b74(a, DAT_020fdd78);
        return 2;
    }
    p[0] = FUN_020c77cc(c);
    idx = FUN_020c6f30(b, &p[0], (void *)FUN_020ce12c, 0, 1);
    if (idx != -1) {
        *d = FUN_020c6e10(b, idx)->f4;
    }
    FUN_020c7bec(p[0]);
    p[0] = 0;
    return 0;
}
