//cpp
// flags: -O4,s
struct Inner_020a11b4 {
    unsigned char pad[0xec];
    int target;
    void reset();
};
extern "C" void FUN_020a1444(void *, int);
inline void Inner_020a11b4::reset() {
    FUN_020a1444(&this->target, 0);
}
struct Outer_020a11b4 {
    unsigned char pad[0x644];
    Inner_020a11b4 in;
};
extern "C" void *FUN_02086e3c(void);
extern "C" Outer_020a11b4 *FUN_0208724c(void *);
extern "C" void FUN_020a11b4(int count) {
    int i;
    for (i = 0; i < count; i++) {
        FUN_0208724c(FUN_02086e3c())->in.reset();
    }
}
