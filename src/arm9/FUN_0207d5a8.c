// flags: -O4,s
extern int FUN_0207a5dc(void *), FUN_0204771c(void *), FUN_0206d45c(void *);
extern void FUN_020bf680(void *, void *, int), FUN_020be5d4(void *, int, int, void *), FUN_02047ae8(void *), FUN_0204a9cc(void *), FUN_0207d67c(void *), FUN_0204ac48(void);
extern void *FUN_020be450(void);
extern char *UNK_02108c64;

int FUN_0207d5a8(char *s) {
    int result = FUN_0207a5dc(s);
    int desc[13], state[5], pair[2];
    if (!result && FUN_0204771c(s)) {
        if (*(int *)(s + 376) != -1) {
            pair[0] = *(int *)(s + 92);
            pair[1] = *(int *)(s + 100);
            FUN_020bf680(s + 288, pair, *(int *)(s + 300));
            FUN_020be5d4(FUN_020be450(), *(int *)(s + 376), 0, s + 288);
            FUN_02047ae8(desc);
            desc[0] = *(int *)(s + 232);
            desc[1] = *(int *)(s + 376);
            desc[2] = *(int *)(s + 96);
            desc[3] = *(int *)(s + 256);
            desc[4] = *(int *)(s + 228);
            desc[5] = 72;
            desc[6] = 3;
            FUN_0204a9cc(desc);
        }
        state[0] = *(int *)(UNK_02108c64 + 36);
        state[1] = *(int *)(UNK_02108c64 + 40);
        state[2] = *(int *)(UNK_02108c64 + 44);
        state[3] = *(int *)(UNK_02108c64 + 48);
        state[4] = *(int *)(UNK_02108c64 + 52);
        if (!FUN_0206d45c(state)) FUN_0207d67c(s);
        ++*(int *)(s + 380);
        if (*(int *)(s + 380) > 8) {
            *(int *)(s + 380) = 0;
            FUN_0204ac48();
        }
    }
    return result;
}
