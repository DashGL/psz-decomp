// flags: -O4,s
typedef struct { short kind, key; unsigned int value; } Text_0211fb18;
enum { E0 = 0, E1 = 1 };
extern const int DAT_overlay_9__02120de8;
extern int *FUN_overlay_9__0211e670(int);
extern unsigned int FUN_overlay_9__0211e690(int);
extern void FUN_020b2380(void *, int, int);
extern void FUN_020b236c(void *, int, const void *);
extern void FUN_020b2330(void *, const void *);
extern void *FUN_02093c00(int);
extern void *FUN_02093b2c(void *, int, int);
void FUN_overlay_9__0211fb18(char *self, int index) {
    int *record = FUN_overlay_9__0211e670(index);
    int state;
    Text_0211fb18 first, second;
    void *context;
    short k;
    *(int *)(self + 108) = index;
    *(int *)(self + 112) = record[0];
    *(int *)(self + 116) = -1;
    state = 7;
    switch (record[1]) {
    case 2:
        if (record[2] != -1) {
            FUN_020b2380(self, 1, 0);
            state = 5;
        } else {
            FUN_020b2380(self, 0, 0);
            state = 4;
        }
        break;
    case 0:
        FUN_020b2380(self, 2, 0);
        state = 5;
        break;
    case 1:
        FUN_020b2380(self, 2, 1);
        state = 5;
        break;
    }
    *(int *)(self + 104) = state;
    FUN_020b236c(self, 0, &DAT_overlay_9__02120de8);
    FUN_020b236c(self, 1, &DAT_overlay_9__02120de8);
    k = FUN_overlay_9__0211e690(record[2]);
    first.kind = 7;
    first.key = k;
    if (!first.key) first.value = record[3];
    FUN_020b236c(self, 0, &first);
    if (((record[1] != 2) ? E1 : E0) != 0) {
        k = FUN_overlay_9__0211e690(record[4]);
        second.kind = 7;
        second.key = k;
        if (!second.key) second.value = record[5];
        FUN_020b236c(self, 1, &second);
    }
    context = FUN_02093c00(0);
    if (context) {
        if (record[0] < 100) FUN_020b2330(self, FUN_02093b2c(context, 8, *(int *)(self + 112) - 1));
        else if (record[0] == 100) FUN_020b2330(self, FUN_02093b2c(context, 8, 12));
        else FUN_020b2330(self, FUN_02093b2c(context, 9, 8));
    }
}
