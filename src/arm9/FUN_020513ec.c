//cpp
// flags: -O4,s
extern "C" int FUN_020513ec(char *self, int *out) {
    int active;
    *out = 0;
    active = (*(unsigned int *)(self + 100) != 0) ? 1 : 0;
    if (active) {
        int base_idx = *(short *)(*(char **)self + 8 * (*(unsigned int *)(self + 76)));
        char *tbl = *(char **)(self + 8);
        int index = base_idx + *(int *)(self + 80);
        *out = *(signed char *)(tbl + 12 * index + 9);
        return 1;
    }
    return 0;
}
