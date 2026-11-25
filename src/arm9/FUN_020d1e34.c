// flags: -O4,p
struct S4 {
    int f00;
    int f04;
    int f08;
};
extern struct S4 *FUN_020d1f70(void *, void *);
extern void *FUN_020d1f58(struct S4 *);
extern void *FUN_020d1ec4(int);
extern int FUN_020d1f0c(struct S4 *, void *);
extern void *FUN_020d1ed4(double);

int FUN_020d1e34(void *param_1, void *param_2, void *param_3) {
    struct S4 *r4 = FUN_020d1f70(param_1, param_2);
    if (r4 == 0) {
        return 0;
    }
    if (r4->f04 == 0) {
        int *p = (int *)FUN_020d1f58(r4);
        r4->f08++;
        return FUN_020d1f0c(r4, FUN_020d1ec4((*(int *)param_3 + r4->f08 * *p) / r4->f08));
    } else if (r4->f04 == 1) {
        double *p = (double *)FUN_020d1f58(r4);
        r4->f08++;
        return FUN_020d1f0c(r4, FUN_020d1ed4((*(double *)param_3 + (double)r4->f08 * *p) / (double)r4->f08));
    } else {
        return (int)FUN_020d1f58(r4);
    }
}
