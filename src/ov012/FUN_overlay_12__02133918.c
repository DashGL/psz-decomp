// flags: -O4,s
extern unsigned char DAT_0213e92c[];
extern void *DAT_0213f2f4;
extern void *FUN_020c1fc8(void), *FUN_02077f3c(void);
extern void FUN_020c2624(void *, int *), FUN_overlay_12__021340d0(void *), FUN_02077fcc(void *), FUN_02078018(void *), FUN_020c3578(void *), FUN_overlay_12__02131dd4(void *), FUN_020ba940(void *);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on
void *FUN_overlay_12__02133918(unsigned *self) {
    int handle;
    void *child;
    self[0] = (unsigned)DAT_0213e92c;
    handle = self[17];
    FUN_020c2624(FUN_020c1fc8(), &handle);
    FUN_overlay_12__021340d0(self);
    self[16] = 2;
    if (self[91]) { FUN_02077fcc(FUN_02077f3c()); self[91] = 0; }
    if (self[92]) { FUN_02078018(FUN_02077f3c()); self[92] = 0; }
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    child = (void *)self[84];
    if (child) {
        if (child) ((void *(**)(void *))*(void **)child)[1](child);
        self[84] = 0;
    }
    if (self == DAT_0213f2f4) DAT_0213f2f4 = 0;
    FUN_020c3578(self + 64);
    FUN_020c3578(self + 49);
    FUN_020c3578(self + 34);
    FUN_020c3578(self + 19);
    FUN_overlay_12__02131dd4(self);
    
    return self;
}
