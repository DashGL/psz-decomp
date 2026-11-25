// flags: -O4,s
typedef unsigned long long U64;
extern U64 UNK_0211c844[];
extern void * const UNK_020fbb68[]; extern void * const UNK_020fbb64;
extern int UNK_020f4bcc[];
extern void *FUN_0208f068(void), *FUN_0208ef48(void *, void *, int), *FUN_020ba8a0(int);

void FUN_020a0ae4(char *s, int category) {
    void *manager;
    int count, i, old, *array;
    U64 pick;
    if (category <= -1 || category >= 9) return;
    *(int *)(s + 12) = category;
    manager = FUN_0208f068();
    if (!manager) return;
    *(void **)(s + 4) = FUN_0208ef48(manager, UNK_020fbb68[*(int *)(s + 12)], 8);
    *(void **)(s + 8) = FUN_0208ef48(manager, UNK_020fbb64, 9);
    if (*(void **)(s + 20)) return;
    count = UNK_020f4bcc[*(int *)(s + 12)];
    *(void **)(s + 20) = FUN_020ba8a0(count << 2);
    if (!*(void **)(s + 20)) return;
    for (i = 0; i < count; i++) (*(int **)(s + 20))[i] = i;
    for (i = 0; i < count; i++) {
        UNK_0211c844[0] = UNK_0211c844[1] * UNK_0211c844[0] + UNK_0211c844[2];
        pick = UNK_0211c844[0] >> 32;
        if (count) pick = (pick * (unsigned)count) >> 32;
        array = *(int **)(s + 20);
        old = array[i];
        array[i] = array[(unsigned)pick];
        (*(int **)(s + 20))[(unsigned)pick] = old;
    }
}
