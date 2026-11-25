// flags: -O4,s
typedef unsigned int u32;
extern int FUN_020bf88c(void *, void *, u32 *);
extern int FUN_020c1334(int);
#pragma thumb off
extern int FUN_0205c520(int, int);
#pragma thumb on
extern void FUN_02034e98(u32 *, int);

int FUN_020c04ac(char *a, u32 *outA, char *b, u32 *outB) {
    enum { E0 = 0, E1 = 1 };
    u32 displacement[2];
    int av, bv, weightA, weightB;
    if ((outA && outB) ? E1 : E0) {
        if (FUN_020bf88c(a + 12, b + 12, displacement)) {
            bv = *(int *)(b + 8);
            av = *(int *)(a + 8);
            if (av == bv) {
                if (av == 0x3e8000) { weightA = 0; weightB = 0; }
                else { weightA = 2048; weightB = -2048; }
            } else if (av >= 4096 || bv >= 4096) {
                if (av < bv) { weightA = 4096; weightB = 0; }
                else { weightA = 0; weightB = -4096; }
            } else if (FUN_020c1334((int)((u32)av + (u32)bv)) <= 4) {
                weightA = 2048; weightB = -2048;
            } else {
                weightA = FUN_0205c520(bv, (int)((u32)av + (u32)bv));
                weightB = (int)(0u - (u32)FUN_0205c520(av, (int)((u32)av + (u32)bv)));
            }
            outA[0] = displacement[0]; outA[1] = displacement[1]; FUN_02034e98(outA, weightA);
            outB[0] = displacement[0]; outB[1] = displacement[1]; FUN_02034e98(outB, weightB);
            return 1;
        }
        return 0;
    }
    return FUN_020bf88c(a + 12, b + 12, 0) != 0;
}
