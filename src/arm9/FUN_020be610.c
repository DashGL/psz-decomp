// flags: -O4,s
struct Vec2 {
    int x;
    int y;
};
struct S2_sub {
    int f0;
    struct Vec2 vec;
    int pad[13];
    int f40;
};
struct S2_node {
    int f0;
    struct S2_node *next;
    struct S2_sub sub8;
};

extern int *FUN_020be550(int, int);
extern struct S2_node *FUN_020be5ec(int, int);
extern int FUN_0205c540(int);
extern void FUN_020be6b4(int, int, void *);

int FUN_020be610(int param_1, int param_2, void *param_3) {
    int *p = FUN_020be550(param_1, param_2);
    if (p != 0) {
        struct S2_node *cur = FUN_020be5ec(param_1, param_2);
        for (; cur != 0; cur = cur->next) {
            struct S2_sub *sub = &cur->sub8;
            if (sub != 0 || sub->f40 != p[1]) {
                struct Vec2 *v = (struct Vec2 *)(((int)cur + 0xc) & 0xFFFFFFFFFFFFFFFFULL);
                int y = v->y;
                int x = cur->sub8.vec.x;
                if (FUN_0205c540((int)(((long long)x * x + 0x800) >> 12) + (int)(((long long)y * y + 0x800) >> 12)) > 4) {
                    if (param_3 != 0) FUN_020be6b4(param_1, param_2, param_3);
                    return 1;
                }
            }
        }
    }
    return 0;
}
