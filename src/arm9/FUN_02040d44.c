// flags: -O4,p
extern int FUN_020424b4(void *, int);

int FUN_02040d44(char *s, int index) {
    char *p = *(char **)(s + 0xb8) + 280 * index;
    char *object;
    int value;
    int step;
    if (*(int *)(p + 12) == -1) return 0;
    object = *(char **)p;
    if (!object) return 0;
    if (*(int *)(p + 12) != *(int *)(object + 4) - 1) return 0;
    if (*(int *)(p + 32) == 1) return 0;
    value = FUN_020424b4(*(void **)(*(char **)(s + 0x98) + 112 * (*(int *)(p + 8))), 0);
    step = *(int *)(p + 28);
    value += step;
    if (value + step >= *(int *)(p + 16)) {
        return 1;
    }
    return 0;
}
