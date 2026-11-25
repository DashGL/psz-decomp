// Pointer subtraction and signed element-size division follow actual ROM helper0200a3a0.
extern char *FUN_020c7050(const void *, const char *, int, int, int (*)(const void *, const void *), int *);
extern void FUN_020c6e38(int *, const void *, int);
void FUN_020c6e84(int *p, const void *a, int (*b)(const void *, const void *)) {
    int tmp;
    char *r = FUN_020c7050(a, (const char *)p[5], p[0], p[2], b, &tmp);
    FUN_020c6e38(p, a, (r - (const char *)p[5]) / p[2]);
}
