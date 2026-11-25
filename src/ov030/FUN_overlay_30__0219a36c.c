//cpp
// flags: -O4,s
extern "C" int FUN_overlay_30__0219a36c(char *p) {
    unsigned int *child = *(unsigned int **)(p + 0xd4);
    int present = 1;
    if ((child[13] & 1) == 0) {
        present = 0;
    }
    if (present == 0) {
        return 1;
    }
    return 0;
}
