//cpp
// flags: -O4,s
extern "C" int FUN_02030700(void *);
extern "C" int FUN_0208c1cc(char *self, int mode) {
    if (mode == 1) {
        int ok = (**(unsigned char **)(self + 80) & 1) ? 1 : 0;
        if (ok) return 1;
        return 0;
    }
    if (mode == 0) {
        if (FUN_02030700(self + 84)) return 1;
        return 0;
    }
    return 0;
}
