// flags: -O4,p -noThumb
struct Elem_020103f4 {
    char pad0[0xe8];
    int e8[10];
    int f110_0 : 1;
    int f110_1 : 1;
    int f110_2 : 1;
    int f110_3 : 1;
    int f110_rest : 28;
    int f114;
    int f118;
    char pad11c[0x38];
    int f154;
    int f158;
    int f15c;
    char pad160[0x14];
};
extern void FUN_02010884(struct Elem_020103f4 *);
extern void FUN_0200e2ac(struct Elem_020103f4 *);
extern void FUN_02011944(int *);
extern int FUN_02011910(int *);
extern void FUN_0200e31c(struct Elem_020103f4 *, int);
extern int FUN_0201195c(int *);
extern struct Elem_020103f4 DAT_0210316c[];
extern short DAT_020f1ad4[];

void FUN_020103f4(void) {
    int i;
    for (i = 0; i < 4; i++) {
        struct Elem_020103f4 *p = &DAT_0210316c[i];
        if (p->f110_0) {
            if (p->f114 == 0) {
                FUN_02010884(p);
                continue;
            }
            if (p->f110_2 && p->f118 != 0) {
                FUN_0200e2ac(p);
                *(unsigned int *)((char *)p + 0x110) = (*(unsigned int *)((char *)p + 0x110) | 2) & ~4;
            }
            if (p->f110_1) {
                int v6, v, a, b, sum;
                FUN_02011944(p->e8);
                v6 = DAT_020f1ad4[p->f154];
                v = FUN_02011910(p->e8) >> 8;
                a = DAT_020f1ad4[v];
                b = DAT_020f1ad4[p->f158];
                sum = b + (a + v6);
                if (sum != p->f15c) {
                    FUN_0200e31c(p, sum);
                    p->f15c = sum;
                }
                if (p->f110_3 && FUN_0201195c(p->e8) != 0) {
                    FUN_02010884(p);
                }
            }
        }
    }
}
