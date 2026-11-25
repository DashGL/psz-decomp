// flags: -O4,s
extern int FUN_02082f88(void *, int, int), FUN_02093c5c(void *, int);
int FUN_02093c38(char *self, int slot) {
    void *p = *(void **)self;
    if (p == 0) return 0;
    return FUN_02093c5c(self, FUN_02082f88(p, *(signed char *)(self + 22), slot));
}
