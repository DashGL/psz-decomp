// flags: -O4,s
extern void FUN_0203020c(void *, void *, int), FUN_02076574(void *, int, int), FUN_020306e4(void *, void *, int, int);
extern int FUN_0203068c(void *);
extern char *FUN_02030dd0(void *);
extern void *FUN_020a0c28(void *, int, int *), *FUN_020a0c00(void *, int);
extern char UNK_020fb890[], UNK_020fb8b4[], UNK_0211a640[];

void *FUN_0209fd50(char *s, void *parent) {
    int index, request;
    unsigned char *state;
    char *data;
    FUN_0203020c(s, parent, 24);
    FUN_02076574(s + 48, FUN_0203068c(s), 7);
    *(void **)s = UNK_020fb890;
    *(void **)(s + 48) = UNK_020fb8b4;
    data = **(char ***)(s + 4);
    *(void **)(s + 68) = data;
    FUN_020306e4(s + 72, data + 8, 1, 1);
    FUN_020306e4(s + 80, *(char **)(s + 68) + 16, 1, 0);
    FUN_020306e4(s + 88, *(void **)(s + 68), 1, 1);
    *(int *)(s + 96) = 0;
    *(void **)(s + 100) = FUN_02030dd0(s);
    index = -1;
    request = *(int *)(*(char **)(s + 68) + 28);
    if (request < 0) {
        state = *(unsigned char **)(s + 100);
        if (!*state) {
            *(void **)(s + 104) = FUN_020a0c28(UNK_0211a640, request, &index);
            **(unsigned char **)(s + 100) = (unsigned char)index + 1;
        } else {
            *(void **)(s + 104) = FUN_020a0c00(UNK_0211a640, *state - 1);
        }
    } else {
        *(void **)(s + 104) = FUN_020a0c28(UNK_0211a640, request, &index);
    }
    *(short *)(s + 64) = 0;
    *(short *)(s + 66) = 13;
    return s;
}
