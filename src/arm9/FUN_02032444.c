//cpp
// flags: -O4,p
struct G_02032444 {
    int f0;
    int f4;
    int f8;
};
extern G_02032444 DAT_0211a3c4;
extern "C" int FUN_0209d054(void *, int, int);
extern "C" int FUN_02032444(char *self, int a, int b) {
    int active = (DAT_0211a3c4.f8 >= 0) ? 1 : 0;
    if (active != 0) {
        return FUN_0209d054(self + 0x2c, a, b);
    }
    return 0;
}
