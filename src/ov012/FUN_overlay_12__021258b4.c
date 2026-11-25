//cpp
// flags: -O4,s
struct Rec {
    unsigned char pad[0xb74];
    unsigned int mask;
};
extern "C" void *FUN_02086e3c(void);
extern "C" Rec *FUN_0208724c(void *);
extern "C" void FUN_overlay_12__021258b4(int *p) {
    int index = p[16];
    if (index >= 0 && index < 20) {
        unsigned int bit = 1u;
        bit <<= index;
        Rec *rec = FUN_0208724c(FUN_02086e3c());
        rec->mask |= bit;
    }
}
