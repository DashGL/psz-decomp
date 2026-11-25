// flags: -O4,s
extern void *DAT_02108d5c;
extern void *FUN_02031a74(void);
extern void FUN_020322d4(void *);
extern void FUN_02040224(void *);
extern void *FUN_02085640(void);
extern void FUN_0203df7c(void *);
extern void FUN_020457f0(void);
extern void FUN_020459c8(void);

void FUN_02031560(void *unused, int *p) {
    unsigned int valid;
    if (*p == 8) {
        FUN_020322d4(FUN_02031a74());
    }
    valid = 0;
    do {
        if (*p < 1) break;
        if (*p >= 9) break;
        valid = 1;
    } while (0);
    if (valid == 1) {
        FUN_02040224(DAT_02108d5c);
    }
    valid = (*p == 0);
    if (valid == 1) {
        void *q = FUN_02085640();
        if (q) {
            FUN_0203df7c(q);
        }
    }
    FUN_020457f0();
    valid = 0;
    do {
        if (*p < 1) break;
        if (*p >= 9) break;
        valid = 1;
    } while (0);
    if (valid) {
        FUN_020459c8();
    }
}
