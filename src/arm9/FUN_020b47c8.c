// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char UNK_0211aa74[], UNK_0211aa9e[];
extern Vec UNK_0211aa8c;
extern void *UNK_02108c64;
extern void FUN_020b48d8(void *), FUN_0203666c(void *), FUN_020316e8(void *, void *), FUN_02032dfc(void *, void *), FUN_02032838(void *, void *), FUN_02048540(void *, void *);
extern int FUN_0206d36c(void *, void *), FUN_0207f45c(void *, void *);
extern char *FUN_02046d94(void *, int, int);
void FUN_020b47c8(int owner, int type, Vec *input, void *key) {
    int effect[25], identity, mode;
    Vec original;
    int state[5];
    Vec zero, output;
    if (*(void **)(UNK_0211aa74 + 20)) FUN_020b48d8(*(void **)(UNK_0211aa74 + 20));
    FUN_0203666c(effect);
    effect[22] = owner;
    effect[21] = 10;
    *(Vec *)((char *)effect + 32) = *input;
    original = *input;
    FUN_020316e8(&identity, (char *)UNK_02108c64 + 20);
    mode = -1;
    FUN_02032dfc(state, UNK_02108c64);
    if (FUN_0206d36c(state, &mode)) {
        if (mode == 1) {
            zero.x = 0; zero.y = 0; zero.z = 0;
            original = zero;
            *(Vec *)((char *)effect + 32) = zero;
            *(char **)(UNK_0211aa74 + 20) = FUN_02046d94(effect, 0, 0);
        }
    } else if (FUN_0207f45c(key, &identity)) *(char **)(UNK_0211aa74 + 20) = FUN_02046d94(effect, 0, 0);
    if (*(char **)(UNK_0211aa74 + 20)) {
        *(int *)(*(char **)(UNK_0211aa74 + 20) + 176) = 10;
        *(int *)(*(char **)(UNK_0211aa74 + 20) + 180) = 10;
    }
    UNK_0211aa8c = *input;
    *(int *)(UNK_0211aa74 + 36) = owner;
    *(short *)(UNK_0211aa74 + 40) = type;
    FUN_02032838(UNK_0211aa9e, key);
    if (*(void **)(UNK_0211aa74 + 8)) {
        output.x = original.x; output.y = 4096; output.z = original.z;
        FUN_02048540(*(void **)(UNK_0211aa74 + 8), &output);
    }
}
