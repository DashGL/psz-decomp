//cpp
// flags: -O4,s
extern "C" {
extern void *DAT_0211a624;
extern signed char *DAT_02108c64;
extern void FUN_0209dfdc(void *);
extern void FUN_0209dfb8(void *);
void FUN_0209df84(void) {
    void *p = DAT_0211a624;
    if (p) {
        if ((DAT_02108c64[0x14] == 1 ? 1 : 0) != 0) {
            FUN_0209dfdc(p);
        } else {
            FUN_0209dfb8(p);
        }
    }
}
}
