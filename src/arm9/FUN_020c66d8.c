// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets; argument/return contract corrected.
// Restored explicit angle input; proof notes/reference/resume2-root-20261112/arguments-020c66d8.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,s
struct Pair_020c66d8 {
    unsigned char x, y;
};
extern void FUN_02098bc8(void *);
extern unsigned int FUN_02035b60(int);
extern void FUN_020bbfbc(int *, int);
extern void FUN_02098960(void *, void *, int *, int);
extern void FUN_020989b4(void *, int *);
extern void FUN_020987e8(void *,unsigned short);
extern int FUN_0209c774(int, int, int);
extern unsigned int DAT_020f5c58[];

void FUN_020c66d8(int *arg0) {
    FUN_02098bc8(*(void **)(arg0[3] + 8));
    if (arg0[2] > 0) {
        arg0[2] -= 1;
    }
    if (arg0[2] == 0 || *(int *)(*(int *)(arg0[3] + 8) + 4) == 0) {
        unsigned int r = FUN_02035b60(100);
        int idx = 2;
        unsigned short ang;
        goto check;
    loop:
        r -= DAT_020f5c58[idx];
        idx--;
    check:
        if (idx > 0 && r >= DAT_020f5c58[idx]) {
            goto loop;
        }
        ang = (unsigned short)FUN_02035b60(0x10000);
        switch (idx) {
        case 1: {
            int vec[3];
            vec[0] = 0;
            vec[1] = 0;
            vec[2] = 0x1000;
            FUN_020bbfbc(vec, ang);
            {
                struct Pair_020c66d8 b = { 0x1, 0x0 };
                FUN_02098960(*(void **)(arg0[3] + 8), &b, vec, *(int *)(arg0[3] + 0xc));
            }
            arg0[2] = -1;
            break;
        }
        case 2: {
            int vec[3];
            vec[0] = 0;
            vec[1] = 0;
            vec[2] = 0x1000;
            FUN_020bbfbc(vec, ang);
            FUN_020989b4(*(void **)(arg0[3] + 8), vec);
            arg0[2] = -1;
            break;
        }
        default:
            FUN_020987e8(*(void **)(arg0[3] + 8),ang);
            arg0[2] = FUN_02035b60(60);
            break;
        }
    }
    if (FUN_0209c774(*(int *)(arg0[3] + 4) + 0x78, **(int **)(arg0[3] + 8), 8) == 0) {
        *(int *)(arg0[3] + 0x30) = 0;
        *(int *)(arg0[3] + 0x50) |= 2;
    }
}
