// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int DAT_0219c474, DAT_0219c470;
extern void FUN_020b78d0(Vec *, const Vec *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_0207278c(void *, int, unsigned);
extern int FUN_02074e9c(void *, int, int, int);
extern char *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);
void FUN_overlay_27__02199954(char *self) {
    Vec position, forward, first, second, scaled1, normalized1, scaled2, normalized2;
    int angle, index;
    char *effect;
    if (*(int *)(self + 0xd4)) return;
    position = *(Vec *)(self + 0x38);
    angle = *(unsigned short *)(self + 0x44);
    index = (angle >> 4) * 2;
    forward.x = DAT_020ed83c[index];
    forward.y = 0;
    forward.z = DAT_020ed83c[index + 1];
    FUN_020b78d0(&normalized1, &forward);
    FUN_02091cc0(&scaled1, &normalized1, &DAT_0219c474);
    FUN_0203647c(&first, &position, &scaled1);
    FUN_020b78d0(&normalized2, &forward);
    FUN_02091cc0(&scaled2, &normalized2, &DAT_0219c470);
    FUN_0203647c(&second, &position, &scaled2);
    *(int *)(self + 0xd8) = FUN_02072650(self, 2, 0, 0);
    FUN_02072750(self, *(int *)(self + 0xd8), &second);
    FUN_0207278c(self, *(int *)(self + 0xd8), angle);
    *(int *)(self + 0xdc) = FUN_02074e9c(self, 2, 0, 0);
    effect = FUN_02075040(self, *(int *)(self + 0xdc));
    if (effect) {
        *(Vec *)(effect + 0x5c) = first;
        *(unsigned short *)(effect + 0x6a) = angle;
        FUN_0204bf88(effect);
    }
    *(int *)(self + 0xd4) = 1;
}
