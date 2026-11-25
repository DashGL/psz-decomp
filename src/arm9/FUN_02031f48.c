//cpp
// flags: -O4,s
extern "C" {
int FUN_0207f20c(void *, void *, int, int);
extern signed char *DAT_02108c64;
}
extern "C" int FUN_02031f48(char *s, void *arg, int index) {
    int active = (DAT_02108c64[0x14] == 1) ? 1 : 0;
    if (active) {
        void *p = *(void **)(s + 0x24);
        if (p) return FUN_0207f20c(p, arg, index, *(int *)(s + 0x34));
    } else {
        void *p = *(void **)(s + 0x28);
        if (p) return FUN_0207f20c(p, arg, index, *(int *)(s + 0x34));
    }
    return 0;
}
