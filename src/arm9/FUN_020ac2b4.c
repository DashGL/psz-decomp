// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void *UNK_02108c84;
extern int FUN_0204243c(void *, int), FUN_0204260c(void *, int, void *, void *), FUN_02034b8c(void *, int), FUN_020424b4(void *, int), FUN_020ac104(void *);
extern void FUN_02035408(void *, int, int, int), FUN_02034680(void *, void *);

void FUN_020ac2b4(char *s) {
    int matrix[12], rotation[9];
    Vec probe, previous;
    void *g = UNK_02108c84;
    if (!*(void **)(s + 140) || !g) return;
    if (FUN_0204243c(*(void **)(s + 140), 0)) {
        if (FUN_0204260c(*(void **)(s + 140), 0, matrix, rotation) == 1) {
            FUN_02035408(&probe, matrix[9], *(int *)(s + 160), matrix[11]);
            if (!FUN_02034b8c(&probe, 256)) {
                if (*(int *)(s + 576) == 15 && FUN_020424b4(*(void **)(s + 140), 0) < 8192)
                    *(int *)(*(char **)(s + 140) + 24) &= ~4;
                else
                    *(int *)(*(char **)(s + 140) + 24) |= 4;
            }
        } else {
            *(int *)(*(char **)(s + 140) + 24) &= ~4;
        }
    } else {
        *(int *)(*(char **)(s + 140) + 24) &= ~4;
        if (!FUN_020ac104(s)) {
            FUN_02035408(&previous, *(int *)(s + 168), *(int *)(s + 172), *(int *)(s + 176));
            if (!FUN_02034b8c(&previous, 256))
                FUN_02034680(s + 156, s + 296);
            else
                FUN_02034680(s + 156, s + 168);
        }
    }
}
