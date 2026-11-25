//cpp
// flags: -O4,s
extern "C" int FUN_020b077c(char *self) {
    int i;
    for (i = 0; i < *(short *)(self + 12); i++) {
        int ok = ((*(unsigned int **)(self + 8))[i] & 1) ? 1 : 0;
        if (ok) return i;
    }
    return -1;
}
