// flags: -O4,s
extern void *FUN_0201d774(void *);
extern unsigned int FUN_02018eec(void *);
extern void FUN_02018e34(void *, unsigned int *, unsigned int *);
extern char *FUN_02050cfc(void);

int FUN_02050d64(void *p) {
    if (p) {
        void *r = FUN_0201d774(p);
        if (r) {
            unsigned int value = FUN_02018eec(r), a, b;
            char *s;
            FUN_02018e34(r, &a, &b);
            s = FUN_02050cfc();
            if (s) {
                unsigned int lb, la, index;
                unsigned int *slot;
                lb = b;
                la = a;
                index = *(unsigned int *)(s + 0x304);
                *(unsigned int *)(s + 0x304) = index + 1;
                slot = (unsigned int *)(s + 4 + 12 * index);
                slot[0] = value;
                slot[1] = la;
                slot[2] = lb;
                return 1;
            }
        }
    }
    return 0;
}
