// flags: -O4,s
typedef struct { int a, b, c, d; } Item;
typedef struct { unsigned char b[4]; } Head4;
typedef struct { int x, y, z; } Vec;
extern char UNK_0211aa74[], UNK_0211aaa4[];
extern char *FUN_020b4324(void *), *FUN_02086e3c(void), *FUN_020870c4(void *);
extern void *FUN_020b3d04(void);
extern int FUN_0203a820(void *, int), FUN_020849d4(void *), FUN_020b028c(void *, void *, int);
extern void FUN_020b41a0(void *, int), FUN_0204a8c4(int, int, void *, int);

void FUN_020b40a4(char *s, int id) {
    int found, i, success, count, amount;
    char *pickup, *profile;
    Item item;
    Head4 head;
    Vec position;
    found = 0;
    i = 0;
    for (; i < *(int *)(UNK_0211aa74 + 16); i++) {
        if (id == *(unsigned char *)(UNK_0211aaa4 + 40 * i + 36)) {
            found = 1;
            break;
        }
    }
    if (!found) return;
    pickup = FUN_020b4324(s);
    if (!pickup) return;
    item = *(Item *)(pickup + 4);
    success = 0;
    head = *(Head4 *)&item;
    if (FUN_0203a820(&head, 4)) {
        profile = FUN_020870c4(FUN_02086e3c());
        if (*(int *)(profile + 52) < 99999999) {
            amount = FUN_020849d4(&item);
            *(int *)(profile + 52) += amount;
            if (*(int *)(profile + 52) > 99999999) *(int *)(profile + 52) = 99999999;
            success = 1;
        }
    } else {
        if (FUN_020b028c(FUN_02086e3c() + 16, &item, 0) != -1) success = 1;
    }
    if (success) {
        ((unsigned char *)s)[12] = 255;
        *(int *)(s + 8) = -1;
        FUN_020b41a0(FUN_020b3d04(), id);
    } else {
        position.x = 0;
        position.y = 0;
        position.z = 0;
        if (*(char **)(pickup + 20)) position = *(Vec *)(*(char **)(pickup + 20) + 92);
        FUN_0204a8c4(0, 5, &position, -1);
    }
}
