typedef struct { int a, b; } Entry;
extern const Entry DAT_020f558c[];
extern const Entry DAT_020f5584[];
extern void FUN_020347b8(void *, void *, const void *, const void *);
void FUN_020aeba8(char *self, int state) {
    if (state < 2) {
        int old = *(int *)(self + 0x70);
        const Entry *cur = &DAT_020f558c[state];
        const Entry *prev = old > 0 ? &DAT_020f558c[old] : &DAT_020f5584[0];
        void *p = *(void **)(self + 0x68);
        if (p) {
            FUN_020347b8(p, self + 0x6c, prev, cur);
        }
        *(int *)(self + 0x70) = state;
    }
}
