//cpp
// flags: -O4,s
extern "C" void FUN_020ba8ac(void *);
struct S {
    void operator delete(void *p) { FUN_020ba8ac(p); }
    ~S() {}
};
extern S *DAT_02192cd4;
extern "C" void FUN_overlay_4__0211f54c(void) {
    if (DAT_02192cd4 != 0) {
        if (DAT_02192cd4 != 0) {
            delete DAT_02192cd4;
            DAT_02192cd4 = 0;
        }
    }
}
