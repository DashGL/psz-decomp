// flags: -O4,s
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020be5d4(void *, int, int, void *);
extern void FUN_020b0e34(void *, void *, int);
extern void *FUN_020be450(void);
extern char *FUN_020be5ec(void *, int);

void FUN_020b0d90(char *s, int *position) {
    char *node, *entry;
    *(int *)(s + 136) = position[0];
    *(int *)(s + 140) = position[2];
    FUN_020bf680(s + 152, s + 136, *(int *)(s + 144));
    FUN_020be5d4(FUN_020be450(), *(int *)(s + 240), 0, s + 152);
    node = FUN_020be5ec(FUN_020be450(), *(int *)(s + 240));
    while (node) {
        entry = node + 8;
        if (entry && (*(int *)(entry + 52) & 1)) {
            switch (*(short *)(s + 92)) {
            case 1: FUN_020b0e34(s, entry, 35); break;
            case 2: FUN_020b0e34(s, entry, 36); break;
            }
        }
        node = *(char **)(node + 4);
    }
}
