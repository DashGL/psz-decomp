// flags: -O4,s
struct Vec3 { int x, y, z; };
extern int FUN_0208555c(int);
extern void FUN_020345f0(struct Vec3 *, int);
extern void FUN_02036348(struct Vec3 *, struct Vec3 *, struct Vec3 *);
extern int FUN_0205c86c(struct Vec3 *);
extern int FUN_02098574(int *, struct Vec3 *, int);
extern void FUN_02083d30(struct Vec3 *, int *, int);
extern int FUN_0205c7ac(struct Vec3 *, struct Vec3 *);

int FUN_020985c4(int *param_1, struct Vec3 *param_2, int *param_3, struct Vec3 *param_4, int param_5, int param_6) {
    struct Vec3 sp20;
    struct Vec3 sp14;
    struct Vec3 sp08;
    volatile int sp04;
    volatile int *p04 = &sp04;
    int sp00;
    int r1;
    int r5;

    r1 = FUN_0208555c(*param_1);
    if (r1 != 0) {
        FUN_020345f0(&sp08, r1 + 0x9c);
        FUN_02036348(&sp20, param_4, &sp08);
        sp04 = FUN_0205c86c(&sp20);
        r5 = FUN_02098574(param_1, param_4, param_5);
        if (sp04 >= param_6 && r5 > 0) {
            sp00 = r5 << 12;
            FUN_02083d30(&sp14, &sp00, param_5);
            sp20.x += sp14.x;
            sp20.y += sp14.y;
            sp20.z += sp14.z;
            if (FUN_0205c7ac(&sp20, &sp14) >= 0 || *p04 >= 0x4000) {
                *param_2 = sp20;
                *param_3 = r5;
                return 1;
            }
        }
    }
    return 0;
}
