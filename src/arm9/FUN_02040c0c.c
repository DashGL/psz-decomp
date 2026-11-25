// flags: -O4,s
extern void FUN_02040b8c(void *, void *);
extern void FUN_02040ac4(void *);
void FUN_02040c0c(char *s, int index, int kind, int value, unsigned int arg) {
    char *data = *(char **)(s + 20);
    char *p = *(char **)(s + 184) + 280 * index;
    char *record;
    int count, i;
    FUN_02040b8c(s, p);
    FUN_02040ac4(p);
    record = *(char **)(data + 40) + 16 * kind;
    if (value < 0) { *(unsigned int *)(p + 276) |= 1; value = 4096; }
    *(char **)p = record;
    *(int *)(p + 8) = index;
    *(int *)(p + 4) = kind;
    *(int *)(p + 260) = value;
    *(unsigned int *)(p + 264) = arg;
    count = *(int *)(record + 12); for (i = 0; i < count; i++) *(int *)(p + 52 + 20 * i) = 0;
}
