// flags: -O4,s
extern int FUN_overlay_12__021344f8(void *), FUN_020849d4(void *), FUN_020b03bc(void *, int, int, int);
extern char *FUN_02086e3c(void), *FUN_020870c4(void *);
int FUN_overlay_12__02135b54(void *item, int index, int blocked, int *amount) {
    int price, total, balance, next;
    char *rec, *manager;
    if (blocked) return 0;
    price = FUN_overlay_12__021344f8(item);
    total = price * FUN_020849d4(item);
    if (total <= 0) return 0;
    *amount = total;
    rec = FUN_020870c4(FUN_02086e3c()) + 44;
    balance = *(int *)(rec + 8);
    next = balance + total;
    if (next < balance || next > 99999999) return 0;
    manager = FUN_02086e3c();
    if (FUN_020b03bc(manager + 16, index, 1, FUN_020849d4(item))) return 1;
    return 0;
}
