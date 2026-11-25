// flags: -O4,s
extern int FUN_overlay_17__02123788(void *, char *);
int FUN_overlay_17__02123d30(char *p) {
    int r = FUN_overlay_17__02123788(p, *(char **)(p + 40216) - 1);
    *(int *)(p + 40232) = (r == 0);
    return r;
}
