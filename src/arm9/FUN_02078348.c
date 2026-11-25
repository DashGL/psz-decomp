//cpp
// flags: -O4,p
struct G_02078348 {
    unsigned char pad[0x14];
    volatile int val;
};
extern G_02078348 DAT_0211a3b8;
extern "C" int FUN_0207832c(void);
extern "C" int FUN_02078348(void) {
    int ok = (DAT_0211a3b8.val >= 0) ? 1 : 0;
    if (ok != 0) {
        return DAT_0211a3b8.val;
    }
    return FUN_0207832c();
}
