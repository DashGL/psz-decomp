// flags: -O4,s
typedef struct { int x, y, z; } Vec;
enum { E0 = 0, E1 = 1 };
extern char *UNK_02108c64;
extern int FUN_02033704(void), FUN_0203068c(void *), FUN_02044c84(void *, void *, void *, int), FUN_020350d0(void *, void *), FUN_0209af98(int, void *);
extern unsigned FUN_02035b60(int);
extern char *FUN_02030540(void *);
extern void *FUN_02034b78(void), *FUN_0204f3b8(void);
extern void FUN_020302e8(void *, void *), FUN_02033658(int, int, void *), FUN_02076a3c(void *, void *), FUN_02076a18(void *), FUN_020316e8(void *, void *), FUN_0204f4a0(void *, void *, void *, void *, int);

void FUN_02076890(char *s, int event) {
    Vec initial;
    int query[9];
    int item[4];
    Vec collision;
    Vec drop;
    int identity;
    char *component;
    void *manager;
    switch (event) {
    case 0:
        if (!FUN_02033704()) {
            FUN_020302e8(&initial, s);
            FUN_02033658(4, 0, &initial);
            FUN_02076a3c(s, &initial);
        }
        FUN_02076a18(s);
        break;
    case 1:
        if (*(signed char *)(*(char **)(s + 4) + 18) == 1) {
            component = FUN_02030540(s);
            if (component) {
                FUN_020302e8(&collision, s);
                if (FUN_02044c84(query, component + 12, &collision, *(unsigned short *)(s + 44))) {
                    manager = FUN_02034b78();
                    if (manager) *(int *)(s + 116) = FUN_020350d0(manager, query);
                }
            }
        }
        break;
    case 2:
        FUN_02076a18(s);
        break;
    case 3:
        if (!((**(unsigned char **)(s + 72) & 2) ? E1 : E0) && FUN_0209af98(FUN_0203068c(s), item)) {
            if (FUN_02035b60(100) < (unsigned)*(signed char *)(*(char **)(s + 68) + 2)) {
                FUN_020316e8(&identity, UNK_02108c64 + 20);
                manager = FUN_0204f3b8();
                FUN_020302e8(&drop, s);
                FUN_0204f4a0(manager, item, &drop, &identity, (unsigned char)s[76]);
            }
            **(unsigned char **)(s + 72) |= 2;
        }
        break;
    }
}
