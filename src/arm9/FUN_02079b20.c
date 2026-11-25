// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02084ce8(void *);
extern int FUN_02079c48(void *);
extern void FUN_02030da8(void *, void *);
extern void FUN_02079c14(void *, void *, int);
extern void FUN_020bce3c(void *);
extern void FUN_02079c7c(void *);
extern void *FUN_02129ed4(void);
extern void FUN_0212a980(void *, int);
extern int FUN_0207a050(void *);
extern void FUN_020302e8(void *, void *);
extern void FUN_0212a3cc(void *, int, int, int, int);
extern void FUN_0203041c(void *);
extern int DAT_0211a51c[];

void FUN_02079b20(unsigned char *arg0) {
    if (*(int *)(arg0 + 0x44) > 0) {
        *(int *)(arg0 + 0x44) -= 1;
    }
    if (FUN_02084ce8(DAT_0211a51c) != 0 && (unsigned int)(arg0[0x2e] - 2) <= 1 && (*(int *)(arg0 + 0x38) & 1) == 0) {
        if (FUN_02079c48(arg0) != 0) {
            unsigned char tmp[4];
            int tmp2[3];
            FUN_02030da8(tmp, arg0);
            FUN_02079c14(tmp2, tmp, 2);
            FUN_020bce3c(tmp2);
            *(int *)(arg0 + 0x38) |= 1;
        }
    }
    FUN_02079c7c(arg0);
    if (arg0[0x2e] == 0) {
        if (*(signed char *)(*(int *)(arg0 + 4) + 0x12) == 0) {
            FUN_0212a980(FUN_02129ed4(), 11);
            FUN_0212a980(FUN_02129ed4(), 10);
        } else {
            FUN_0212a980(FUN_02129ed4(), 3);
        }
    } else {
        int a;
        int b = -1;
        int vec[3];
        if (*(signed char *)(*(int *)(arg0 + 4) + 0x12) == 0) {
            if (FUN_0207a050(arg0) != 0) {
                a = 10;
                b = 11;
            } else {
                a = 11;
                b = 10;
            }
        } else {
            a = 3;
        }
        FUN_020302e8(vec, arg0);
        if (a >= 0) {
            FUN_0212a3cc(FUN_02129ed4(), vec[0], vec[2], a, 0);
        }
        if (b >= 0) {
            FUN_0212a980(FUN_02129ed4(), b);
        }
    }
    FUN_0203041c(arg0);
}
