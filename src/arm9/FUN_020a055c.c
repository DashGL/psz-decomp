//cpp
// flags: -O4,s
extern "C" void FUN_020a055c(char *self, int mode) {
    switch (mode) {
    case 0: {
        char *p = *(char **)(self + 0x10);
        if (p) {
            int ok = (*(unsigned short *)(p + 0x20) & 1) ? 1 : 0;
            if (ok) {
                *(unsigned int *)(self + 0x34) |= 1;
            }
        }
        break;
    }
    case 1:
        *(unsigned int *)(self + 0x34) &= ~1u;
        break;
    }
}
