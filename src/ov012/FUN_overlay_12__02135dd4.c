// flags: -O4,s
typedef struct {
    unsigned char bytes[4];
} Id;

extern void *DAT_0213f2dc;
extern void FUN_overlay_12__021351fc(int);
extern void FUN_02091708(void);
extern void FUN_overlay_12__02135338(void);
extern void FUN_overlay_12__02135e68(int);
extern void FUN_overlay_12__02133ec4(void *);
extern unsigned FUN_02098d84(const Id *);

int FUN_overlay_12__02135dd4(unsigned *self) {
    unsigned sum;
    int i;
    Id id;
    unsigned flag;

    FUN_overlay_12__021351fc(6);
    FUN_02091708();
    FUN_overlay_12__02135338();
    flag = !DAT_0213f2dc;
    if (flag != 0) {
        return 0;
    }
    sum = 0;
    for (i = 0; i < 3; i++) {
        sum += self[8 + i];
    }
    id = *(Id *)(self + 7);
    flag = (FUN_02098d84(&id) == 0xffffffffu);
    flag = (flag != 0 && sum == 0);
    if (flag == 0) {
        FUN_overlay_12__02135e68(0);
        FUN_overlay_12__02133ec4(self + 7);
    } else {
        FUN_overlay_12__02135e68(1);
    }
    return 1;
}
