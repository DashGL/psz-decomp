// flags: -O4,s
#pragma opt_propagation off
extern double FUN_02005340(const char *);
extern void FUN_02038084(void *, unsigned short);

void FUN_overlay_6__0211f128(char *self) {
    int val = (int)((FUN_02005340(self + 0x60) > 0.0)
        ? (0.5 + 4096.0 * FUN_02005340(self + 0x60))
        : (4096.0 * FUN_02005340(self + 0x60) - 0.5));
    unsigned short idx = (unsigned short)(((long long)val * 0x000000b60b60b60bLL + 0x0000080000000000LL) >> 44);
    FUN_02038084(*(void **)(*(char **)(self + 0x2a0) + 0x2f0), idx);
}
