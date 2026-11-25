typedef struct { int a, b; } Entry;
extern const Entry DAT_020f57c0[];
extern const Entry DAT_020f57b8[];
extern void FUN_020347b8(void *, void *, const void *, const void *);
void FUN_020b3b88(char *self, int state) {
    if (state < 1) {
        int old = *(int *)(self + 0xc);
        const Entry *cur = &DAT_020f57c0[state];
        const Entry *prev = old > 0 ? &DAT_020f57c0[old] : &DAT_020f57b8[0];
        void *p = *(void **)(self + 4);
        if (p) {
            FUN_020347b8(p, self + 8, prev, cur);
        }
        *(int *)(self + 0xc) = state;
    }
}
