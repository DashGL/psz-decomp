//cpp
// flags: -O4,s
extern "C" void FUN_02077594(char *self, unsigned int mode) {
    if (mode <= 1) {
        char *p = *(char **)(self + 72);
        if (p) {
            int is_zero = (mode == 0) ? 1 : 0;
            if (is_zero) {
                *(unsigned int *)(p + 228) &= ~1u;
            } else {
                *(unsigned int *)(p + 228) |= 1u;
            }
        }
    }
}
