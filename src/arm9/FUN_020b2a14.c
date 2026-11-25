// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02083308(void *, int);
extern unsigned char *FUN_020b23d4(void *, int);
void FUN_020b2a14(void **self, unsigned char *p, int dx, int dy) {
    while ((((p[0] & 4) == 0) ? E0 : E1) == 0) {
        int index;
        p[6] += dx;
        p[7] += dy;
        index = FUN_02083308(p, *(int *)(p + 8));
        p = FUN_020b23d4(*self, index);
        if (p == 0) break;
    }
}
