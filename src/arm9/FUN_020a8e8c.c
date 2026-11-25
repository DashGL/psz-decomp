// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,s
struct S8_4 {
    unsigned char b[4];
};
extern int FUN_0203a820(struct S8_4 *, int);
extern int FUN_0203a1a8(struct S8_4 *, int);
extern void FUN_020a8f40(int, int);

int FUN_020a8e8c(int param_1, unsigned int param_2) {
    int res = 0;
    struct S8_4 s1 = *(struct S8_4 *)param_1;
    if (FUN_0203a820(&s1, 0) != 0) {
        struct S8_4 s0 = *(struct S8_4 *)param_1;
        if (FUN_0203a1a8(&s0, 0x11) != 0) {
            switch (param_2) {
            case 0:
                FUN_020a8f40(param_1, 3);
                res = 1;
                break;
            case 1:
                FUN_020a8f40(param_1, 5);
                res = 1;
                break;
            case 2:
                *(unsigned int *)(param_1 + 4) &= 0x01ffffff;
                res = 1;
                break;
            case 3: {
                int v = ((*(int *)(param_1 + 4) & (int)0xfe000000) >> 25) & 0x7f;
                if (v >= 10) {
                    v -= 10;
                } else {
                    v = 0;
                }
                *(unsigned int *)(param_1 + 4) = (*(unsigned int *)(param_1 + 4) & 0x01ffffff) | ((unsigned int)v << 25);
                res = 1;
                break;
            }
            }
        }
    }
    return res;
}
