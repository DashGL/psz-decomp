// flags: -O4,s
#pragma opt_loop_invariants off
extern unsigned char DAT_021244ac[];
extern unsigned char DAT_02124544[];
extern unsigned char DAT_020f9220[];
extern void *FUN_020c2b50(void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned);
#pragma thumb on
extern void FUN_overlay_18__02122f5c(void *, int);
extern void FUN_overlay_18__0212301c(void *, void *);
extern void FUN_overlay_18__02122e0c(void *, void *);
extern int FUN_020a7800(void *, int, int);
extern int *FUN_0204ad84(void *, void *);
void *FUN_overlay_18__02122e44(int *self) {
    unsigned char i;
    self[0] = (int)DAT_021244ac;
    FUN_020c2b50(self + 1);
    self[5] = 0;
    FUN_0200c938(self + 6, 20);
    self[12] = 0;
    self[13] = 0;
    FUN_overlay_18__02122f5c(self, 0);
    FUN_overlay_18__0212301c(self, DAT_02124544);
    FUN_overlay_18__02122e0c(self + 2, DAT_02124544);
    for (i = 0; i < 5; i++) {
        unsigned char item[16];
        int *child;
        unsigned int off = (unsigned int)i << 2;
        *(int *)((char *)self + off + 0x18) = 0;
        FUN_020a7800(item, 0, i);
        off = (unsigned int)((char *)self + (int)off);
        child = FUN_0204ad84(item, DAT_020f9220);
        *(int *)(off + 0x18) = (int)child;
        child[57] |= 1;
    }
    return self;
}
