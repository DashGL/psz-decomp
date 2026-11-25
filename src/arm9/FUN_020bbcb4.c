// flags: -O4,p
extern struct {
    void *f0, *f4, *f8, *fc, *f10, *f14, *f18, *f1c, *f20, *f24;
    int f28, f2c, f30, f34, f38, f3c, f40;
    void *f44, *f48, *f4c, *f50, *f54, *f58;
} DAT_0211b2c0;
extern void FUN_020ba8c4(void *);
void FUN_020bbcb4(void) {
    FUN_020ba8c4(DAT_0211b2c0.f44);
    FUN_020ba8c4(DAT_0211b2c0.f14);
    if (DAT_0211b2c0.f40) {
        FUN_020ba8c4(DAT_0211b2c0.fc);
        FUN_020ba8c4(DAT_0211b2c0.f58);
    }
    FUN_020ba8c4(DAT_0211b2c0.f1c);
    FUN_020ba8c4(DAT_0211b2c0.f20);
    FUN_020ba8c4(DAT_0211b2c0.f24);
    FUN_020ba8c4(DAT_0211b2c0.f54);
    DAT_0211b2c0.f54 = 0;
}
