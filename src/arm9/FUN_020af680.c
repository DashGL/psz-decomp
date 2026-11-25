// flags: -O4,p
typedef struct { int x, y, z; } Vec;
extern int FUN_02047440(void *), FUN_0204771c(void *), FUN_0204770c(void *);
extern void FUN_0206e728(void *, void (*)(void *)), FUN_0206e738(void *, void *), FUN_020af774(void *), FUN_0204bf88(void *);

static inline void set_scale(char *component, int x, int y, int z) {
    *(int *)(component + 120) = x;
    *(int *)(component + 132) = x;
    *(int *)(component + 124) = y;
    *(int *)(component + 136) = y;
    *(int *)(component + 128) = z;
    *(int *)(component + 140) = *(int *)(component + 128);
}

int FUN_020af680(char *s) {
    int result;
    Vec first, second;
    result = FUN_02047440(s);
    if (!result) {
        if (*(void **)(s + 48) && *(int *)(s + 184) < *(int *)(s + 176)) {
            first = *(Vec *)(s + 80);
            second.x = first.x;
            second.y = first.y;
            second.z = 4096;
            *(Vec *)(s + 80) = second;
            set_scale(*(char **)(s + 48), *(int *)(s + 80), *(int *)(s + 84), *(int *)(s + 88));
        }
        if (FUN_0204771c(s) && *(void **)(s + 48) && !*(int *)(s + 260)) {
            FUN_0206e728(*(void **)(s + 48), FUN_020af774);
            FUN_0206e738(*(void **)(s + 48), s);
            *(int *)(s + 260) = 1;
        }
        if (FUN_0204770c(s) && *(int *)(s + 184) >= *(int *)(s + 176)) {
            *(short *)(s + 106) = (int)((unsigned)(*(int *)(s + 148) / *(int *)(s + 76) % 300) << 16) / 300;
            FUN_0204bf88(s);
        }
    }
    return result;
}
