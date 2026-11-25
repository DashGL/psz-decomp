//cpp
// flags: -O4,s
struct Key_020b7224 {
    unsigned char a, b, c, d;
};
struct Obj_020b7224 {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};
extern "C" {
extern int FUN_0203a1fc(void *), FUN_02084684(int, void *, void *), FUN_020b67c0(void *, int), FUN_020848e0(int, int), FUN_020b737c(void *, void *, int);
extern void FUN_020b6200(void *, void *);
int FUN_020b7224(char *s) {
    int item[4], data[6], all[20];
    int sum = 0, i;
    ((Obj_020b7224 *)s)->v2(item);
    if (!FUN_0203a1fc(item)) {
        Key_020b7224 key = *(Key_020b7224 *)item;
        if (FUN_02084684(*(int *)(s + 104), &key, data)) {
            for (i = 0; i < 3; i++) {
                if (FUN_020b67c0(data, i) == 45) {
                    sum += FUN_020848e0(FUN_020b67c0(data, i), ((signed char *)data)[13 + i]);
                }
            }
        }
    }
    FUN_020b6200(s, all);
    return sum + FUN_020b737c(s, all, 45);
}
}
