// flags: -O4,s
typedef int (*Callback)(void *, int *, void *);
typedef int (*Method)(void *, void *, void *, Callback, void *);
int FUN_020bc8d4(char *self, void *a, Callback b, void *c) {
    void *p = *(void **)(self + 56);
    if (p == 0) return 0;
    return (*(Method **)p)[3](p, self, a, b, c);
}
