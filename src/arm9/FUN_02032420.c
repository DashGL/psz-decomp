//cpp
// flags: -O4,p
struct G_02032420 {
    int f0;
    int f4;
    int f8;
};
extern G_02032420 DAT_0211a3c4;
extern "C" int FUN_0209d018(void *, int);
extern "C" int FUN_02032420(char *self, int a) {
    int active = (DAT_0211a3c4.f8 >= 0) ? 1 : 0;
    if (active != 0) {
        return FUN_0209d018(self + 0x2c, a);
    }
    return 0;
}
