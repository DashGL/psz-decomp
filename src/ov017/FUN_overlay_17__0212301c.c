//cpp
// flags: -O4,s
extern "C" void FUN_overlay_17__02122828(void *);
extern "C" int FUN_overlay_17__02122f14(void *);
extern "C" int FUN_overlay_17__0212301c(char *self) {
    if (((signed char *)self)[0x9d3c] == -115) {
        FUN_overlay_17__02122828(self);
        int z = (FUN_overlay_17__02122f14(self) == 0) ? 1 : 0;
        *(int *)(self + 0x9d40) = z ? 1 : 0;
    } else {
        *(int *)(self + 0x9d40) = FUN_overlay_17__02122f14(self);
    }
    return *(int *)(self + 0x9d40);
}
