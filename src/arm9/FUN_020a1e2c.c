// flags: -O4,s
typedef struct { unsigned short id, a, b, pad; int x, y; } Desc;
extern int DAT_020fbde4;
extern char *DAT_02108c64;
extern char DAT_020f4cc8[];
extern char *FUN_020b77e4(void), *FUN_020b7798(void *, int), *FUN_02032ca0(void *, int);
extern void *FUN_02079114(void);
extern void FUN_02071d0c(void *), FUN_020c324c(void *, int);
extern void FUN_020a2674(void *, void *, void *, void *, int);
extern void FUN_02079160(void *, void *, int, int, int, int, int, int, int);
void FUN_020a1e2c(char *s) {
    Desc a, b;
    int row, local;
    char *record;
    int count, i, value;
    char *member;
    if (*(int *)(FUN_020b77e4() + 8)) {
        FUN_02071d0c(&a);
        a.id = 2;
        a.x = 294912;
        row = 2 - (DAT_020fbde4 - 1);
        if (row >= 0 && row < 5) {
            a.y = 1056768 + 73728 * row;
            FUN_020c324c(&a, *(int *)(s + 40));
        }
    } else {
        char *mgr = FUN_020b77e4();
        local = *(signed char *)(DAT_02108c64 + 22);
        count = *(signed char *)mgr;
        for (i = 0; i < count; ++i) {
            record = FUN_020b7798(FUN_020b77e4(), i);
            member = FUN_02032ca0(DAT_02108c64, *(int *)record);
            if (member) {
                FUN_02071d0c(&b);
                row = *(signed char *)(member + 47) - (DAT_020fbde4 - 1);
                if (row >= 0 && row < 5) FUN_020a2674(s, member, record, &b, row);
                b.id = local == *(int *)record ? 2 : 0;
                b.x = 73728 * (*(signed char *)(member + 46) + 1);
                if (row >= 0 && row < 5) {
                    b.y = 1056768 + 73728 * row;
                    FUN_020c324c(&b, *(int *)(s + 40));
                }
            }
        }
        value = *(int *)(s + 56);
        if (value != -1) FUN_02079160(FUN_02079114(), DAT_020f4cc8, 0, 3, value, -1, -1, 8, 0);
    }
}
