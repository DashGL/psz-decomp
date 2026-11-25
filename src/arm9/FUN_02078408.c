// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char UNK_0211a3b8[], UNK_0211a3c4[];
extern int UNK_0211a3d4[];
extern void *UNK_02108c64, *UNK_02108c68;
extern int FUN_020330dc(void *), FUN_0203306c(void *), FUN_02033488(void *, int), FUN_020855fc(int);
extern void FUN_02078ae0(int), FUN_020783c0(void *, void *);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);

int FUN_02078408(int id, int request) {
    int i;
    if (!((*(int *)(UNK_0211a3b8 + 20) >= 0) ? E1 : E0)) return 0;
    if (id != *(volatile int *)(UNK_0211a3b8 + 20)) return 0;
    if (*(unsigned short *)UNK_0211a3b8 & 2) return 0;
    *(unsigned short *)UNK_0211a3b8 |= 2;
    for (i = 0; i < 4; i++) {
        UNK_0211a3d4[i] &= ~16;
        UNK_0211a3d4[i] &= ~32;
    }
    if (request && !FUN_020330dc(UNK_02108c64)) {
        if (FUN_0203306c(UNK_02108c64) || FUN_02033488(UNK_02108c68, 5) || ((*(unsigned short *)UNK_0211a3b8 & 32) ? E1 : E0))
            *(unsigned short *)UNK_0211a3b8 = (unsigned short)(16 | *(unsigned short *)UNK_0211a3b8);
        else
            FUN_02078ae0(2);
    }
    if (*(signed char *)(UNK_0211a3b8 + 24)) {
        for (i = 0; i < 4; i++)
            if ((unsigned int)(FUN_020855fc(i) - 1) <= 1) UNK_0211a3d4[i] |= 2;
        FUN_020783c0(FUN_020870c4(FUN_02086e3c()) + 3368, UNK_0211a3c4);
    }
    return 1;
}
