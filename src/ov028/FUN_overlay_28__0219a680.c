// flags: -O4,s
extern int FUN_020370ec(void *, int, void *);
#pragma thumb off
extern int FUN_0205c7ac(void *, void *);
#pragma thumb reset
int FUN_overlay_28__0219a680(int *p, void *vector) {
    int v[3];
    int *child = (int *)p[1];
    if (!child[53]) return 1;
    if (FUN_020370ec(child, p[18], v) == 0) return 0;
    if (FUN_0205c7ac(v, vector) < 0) return 0;
    return 1;
}
