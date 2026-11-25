// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9e, exact bytes and relocation targets.
// flags: -O4,s
struct Inner14 {
    int a[9];
};
struct Elem14 {
    int f0;
    int f4;
    int f8;
    struct Inner14 inner;
    int f30;
};
struct Dest14 {
    int f0;
    struct Elem14 *arr;
    int count;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
};

extern void *FUN_020bf12c(void);
extern struct Elem14 *FUN_020bf1e0(void *, int);

int FUN_020bf3ac(struct Dest14 *param_1, struct Elem14 *param_2, int param_3, int *param_4, int *param_5) {
    struct Elem14 *arr;
    int i;
    param_1->arr = 0;
    param_1->count = 0;
    arr = FUN_020bf1e0(FUN_020bf12c(), param_3);
    if (arr == 0) {
        return 0;
    }
    for (i = 0; i < param_3; i++) {
        arr[i].f0 = param_2[i].f0;
        arr[i].f4 = param_2[i].f4;
        arr[i].f8 = param_2[i].f8;
        arr[i].inner = param_2[i].inner;
        arr[i].f30 = param_2[i].f30;
    }
    param_1->arr = arr;
    param_1->count = param_3;
    param_1->f18 = param_5[0];
    param_1->f1c = param_5[1];
    param_1->fc = param_4[0];
    param_1->f10 = param_4[1];
    param_1->f14 = param_4[2];
    return 1;
}
