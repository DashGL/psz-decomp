// flags: -O4,s
extern void FUN_020bc5cc(void *, void *, void *), FUN_0209c734(void *, int, int, int), FUN_0209c714(void *, int, int), FUN_0209c754(void *, int, int);
extern int FUN_02086cb8(void *, void *), FUN_020375f0(void *), FUN_020b7ed0(void *, int), FUN_020b7e90(void *, int);
extern void *FUN_020b7c38(int);
extern int UNK_020f452c[];

void FUN_02096fa4(char *s) {
    int square, distance, i, valid;
    void *target;
    FUN_020bc5cc(&square, s + 28, s + 28);
    distance = FUN_02086cb8(s + 64, &square);
    for (i = 0; i < 2; i++)
        if (distance >= UNK_020f452c[i])
            FUN_0209c734(*(char **)(s + 4) + 120, **(int **)(s + 8), 23, 1);
    valid = 0;
    target = FUN_020b7c38(*(int *)(s + 12));
    if (target && !FUN_020375f0(target) && !FUN_020b7ed0(target, -1)) valid = 1;
    if (valid)
        FUN_0209c714(*(char **)(s + 4) + 120, **(int **)(s + 8), 25);
    else
        FUN_0209c754(*(char **)(s + 4) + 120, **(int **)(s + 8), 25);
    valid = 0;
    target = FUN_020b7c38(*(int *)(s + 12));
    if (target && !FUN_020375f0(target) && FUN_020b7e90(target, 20) == 1 && !FUN_020b7e90(target, 5)) valid = 1;
    if (valid)
        FUN_0209c714(*(char **)(s + 4) + 120, **(int **)(s + 8), 26);
    else
        FUN_0209c754(*(char **)(s + 4) + 120, **(int **)(s + 8), 26);
}
