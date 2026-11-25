//cpp
// flags: -O4,s
extern "C" {
extern void FUN_overlay_25__02199ebc(void *, void *, int, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
void FUN_overlay_25__0219a864(unsigned char *self) {
    unsigned char *obj = *(unsigned char **)(self + 4);
    if (((*(int *)(obj + 0x11c) != 0) ? 1 : 0) == 0) {
        FUN_overlay_25__02199ebc(obj, self + 0xc, 0x5000, 0);
    }
    if (FUN_02040d2c(obj, 0)) {
        FUN_02037924(*(void **)(self + 8));
    }
}
}
