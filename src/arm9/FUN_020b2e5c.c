// flags: -O2,s
extern char *FUN_02030540(void *);
extern void *FUN_02034b78(void);
extern void FUN_020302e8(void *, void *);
extern void FUN_02033658(int, int, void *);
extern void FUN_02035144(void *, int);
extern int FUN_02044c84(void *, void *, void *, unsigned short);
extern int FUN_020350d0(void *, void *);
extern int FUN_02033704(void);
void FUN_020b2e5c(char *s, int mode) {
    int desc[9];
    int b[3];
    int a[3];
    void *manager;
    char *p;
    switch (mode) {
    case 0:
        p = FUN_02030540(s);
        if (p) {
            FUN_020302e8(b, s);
            if (FUN_02044c84(desc, p + 12, b, *(unsigned short *)(*(char **)(s + 4) + 16))) {
                manager = FUN_02034b78();
                if (manager) {
                    *(int *)(s + 56) = FUN_020350d0(manager, desc);
                }
            }
        }
        break;
    case 1:
        if (!FUN_02033704()) {
            FUN_020302e8(a, s);
            FUN_02033658(0, 8, a);
        }
        manager = FUN_02034b78();
        if (manager) {
            FUN_02035144(manager, *(int *)(s + 56));
            *(int *)(s + 56) = -1;
        }
        break;
    }
}
