//cpp
// flags: -O4,p
extern "C" {
extern int FUN_overlay_19__02198718(void *);
extern unsigned int FUN_02037208(void *, unsigned int);
}
extern "C" int FUN_overlay_19__0219b650(int *self) {
    if (((signed char *)self)[100] == 6) return 0;
    void *owner = (void *)self[1];
    if (self[38] < 12 && FUN_overlay_19__02198718(owner) == 1) return 0;
    unsigned int scale = 2;
    if (self[36] == 1) scale <<= 2;
    int result = (FUN_02037208((void *)self[1], scale) == 0) ? 1 : 0;
    if (result == 1) self[38] = 0;
    return result;
}
