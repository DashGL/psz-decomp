// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,s
#pragma opt_strength_reduction off
struct Vtbl {
    void *f0;
    void (*f4)(void *);
};

struct Obj {
    struct Vtbl *vtbl;
};

struct Sub {
    int f0;
    struct Obj *arr[8];
    char pad[0x24];
    int f48;
};

struct S {
    char pad[0x50];
    int f50;
    char pad2[0x10];
    struct Sub *f64;
};

extern signed char *DAT_02108c64;
extern void *DAT_02108d5c;
extern void *FUN_02129ed4(void);
extern void FUN_0212a9a0(void *, int);
extern void FUN_020357f4(struct Obj *);
extern void *FUN_02031a74(void);
extern void FUN_02031f88(void *, int, int, int, int);
extern void FUN_020ba8ac(void *);
extern void FUN_020c1b50(int);
extern void FUN_02074d9c(void *);
extern void FUN_0203fde0(void *);

void FUN_0206de4c(struct S *r5) {
    int i;
    for (i = 0; i < 8; i++) {
        struct Obj **arr;
        FUN_0212a9a0(FUN_02129ed4(), i);
        arr = r5->f64->arr;
        if (arr[i] != 0) {
            FUN_020357f4(arr[i]);
            if (arr[i] != 0) {
                arr[i]->vtbl->f4(arr[i]);
            }
            arr[i] = 0;
        }
    }
    if (r5->f64->f48 != 0) {
        signed char *p = DAT_02108c64;
        FUN_02031f88(FUN_02031a74(), p[0x15], p[0x16], 0, 1);
    }
    if (r5->f64 != 0) {
        FUN_020ba8ac(r5->f64);
        r5->f64 = 0;
    }
    r5->f50 = -1;
    FUN_020c1b50(4);
    FUN_02074d9c(DAT_02108d5c);
    FUN_0203fde0(DAT_02108d5c);
}
