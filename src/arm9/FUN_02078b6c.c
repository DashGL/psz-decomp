// flags: -O4,s
extern char *DAT_02108c64;
extern char DAT_0211a3b8[], DAT_0211a51c[];
extern int DAT_0211a3d4[];
extern void *FUN_02031a74(void);
extern int FUN_02031c44(void *), FUN_020855fc(int), FUN_0206d158(void *), FUN_02084bf8(void *), FUN_02078a98(void);
extern void FUN_02078b3c(void *);

enum { E0 = 0, E1 = 1 };

int FUN_02078b6c(int mode) {
    int local, i, special, state[2];
    local = *(signed char *)(DAT_02108c64 + 20) == 0;
    if (!((*(int *)(DAT_0211a3b8 + 20) >= 0) ? E1 : E0)) return 0;
    if (!FUN_02031c44(FUN_02031a74())) return 0;
    if (local && ((*(unsigned short *)DAT_0211a3b8 & 2) ? E1 : E0)) return 0;
    if (local) {
        for (i = 0; i < 4; i++) {
            if ((unsigned)(FUN_020855fc(i) - 1) <= 1 && !((DAT_0211a3d4[i] & 16) ? E1 : E0)) return 0;
        }
    }
    FUN_02078b3c(state);
    special = FUN_0206d158(state);
    switch (mode) {
    case 0:
        if (FUN_02084bf8(DAT_0211a51c)) {
            if (special) return 0;
            if ((*(unsigned short *)(DAT_02108c64 + 4) & 512) ? E1 : E0) return 0;
        }
        return 1;
    case 1:
        if (FUN_02084bf8(DAT_0211a51c) && special && FUN_02078a98()) return 1;
        return 0;
    case 2:
        return 1;
    }
    return 0;
}
