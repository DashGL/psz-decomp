// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_0209882c(void *);
void FUN_0209c954(char *self, int unused, int value) {
    if (value > 0) *(int *)(self + 8) = value;
    else {
        unsigned long long next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        DAT_0211c844[0] = next;
        *(int *)(self + 8) = (((next >> 32) * 30ull) >> 32);
    }
    FUN_0209882c(*(void **)(*(char **)(self + 12) + 8));
}
