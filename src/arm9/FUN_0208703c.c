// flags: -O4,s
extern int FUN_020c4848(void);
extern int FUN_020c4870(int, void *, int);
extern void FUN_02086f80(void *);
extern void FUN_02086ff0(void *);
extern void FUN_020ba8c4(void *);
extern void *FUN_020ba8bc(unsigned int, int);
#pragma thumb off
extern void FUN_020655d8(void *, void *, unsigned int);
#pragma thumb on

int FUN_0208703c(char *s, int base) {
    int slot = *(int *)(s + 56);
    if (slot >= 0 && slot < 3 && FUN_020c4848()) {
        void *p;
        slot = *(int *)(s + 56);
        FUN_02086f80(s + 168);
        FUN_02086ff0(s);
        p = *(void **)(s + 6440);
        if (p) {
            FUN_020ba8c4(p);
            *(void **)(s + 6440) = 0;
        }
        *(void **)(s + 6440) = FUN_020ba8bc(3444, 16);
        p = *(void **)(s + 6440);
        if (p) {
            FUN_020655d8(s + 60, p, 3444);
            if (FUN_020c4870(base + slot, *(void **)(s + 6440), 0)) return 1;
            p = *(void **)(s + 6440);
            if (p) {
                FUN_020ba8c4(p);
                *(void **)(s + 6440) = 0;
            }
        }
    }
    return 0;
}
