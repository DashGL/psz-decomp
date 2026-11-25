// flags: -O4,p
// near: len=0x118/0x118 nd=20 bad=0 (register coloring / instruction scheduling)
extern char *FUN_020e961c(void);
extern int FUN_020d8b3c(int);
extern void *FUN_020d8b30(int, int);
extern int FUN_020d81b0(void *, const char *, int);
extern unsigned int FUN_020e0b68(unsigned int);
extern void FUN_020d8134(void *, const char *, int);
extern void FUN_020d8b48(int, int, const char *, int);
extern int DAT_020f6024[];
extern const char DAT_021017c0[];

void FUN_020e8f40(void) {
    unsigned int rnd;
    int max_eval = 0;
    int sum = 0;
    int i;
    unsigned int arr[6];

    if (FUN_020d8b3c(*(int *)(FUN_020e961c() + 0xe4)) <= 1) {
        return;
    }
    for (i = 0; i < FUN_020d8b3c(*(int *)(FUN_020e961c() + 0xe4)); i++) {
        int v = FUN_020d81b0(FUN_020d8b30(*(int *)(FUN_020e961c() + 0xe4), i), DAT_021017c0, -1);
        if (v > max_eval) {
            max_eval = v;
        }
        sum += DAT_020f6024[i];
    }
    rnd = FUN_020e0b68(100);
    for (i = 0; i < FUN_020d8b3c(*(int *)(FUN_020e961c() + 0xe4)); i++) {
        if (i == FUN_020d8b3c(*(int *)(FUN_020e961c() + 0xe4)) - 1) {
            break;
        }
        arr[i] = (i > 0 ? arr[i - 1] : 0) + (DAT_020f6024[i] * 100) / sum;
        if (rnd < arr[i]) {
            break;
        }
    }
    if (max_eval < 0x7fffffff) {
        max_eval++;
    }
    FUN_020d8134(FUN_020d8b30(*(int *)(FUN_020e961c() + 0xe4), i), DAT_021017c0, max_eval);
    FUN_020d8b48(*(int *)(FUN_020e961c() + 0xe4), 0, DAT_021017c0, 0);
}
