// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
typedef struct { int f[14]; } Rec56;
typedef struct { unsigned char pad[0xdcc]; Rec56 rec[15]; } Self;
extern int DAT_overlay_6__021205d4[], DAT_overlay_6__0212058c[];
extern unsigned int DAT_overlay_6__02123418[];
extern unsigned int DAT_a_02123418[];
extern char DAT_overlay_6__021204e4[];
#pragma thumb off
extern void FUN_02015c1c(int, int, int, int, int, int, int, int);
#pragma thumb on
extern void FUN_overlay_6__021201a0(void *, int, int, int), FUN_overlay_6__0212020c(void *, const int *), FUN_020c2d94(int, int, int);

void FUN_overlay_6__0211fdd0(char *self)
{
    int state = *(int *)(self + 748), stage;
    char *object;
    if (state == 0 && *(unsigned long long *)(self + 56) >= *(unsigned long long *)(self + 24)) {
        const int *config;
        (*(int *)(self + 68))++;
        *(unsigned long long *)(self + 24) = *(unsigned long long *)(self + 56) + (long long)DAT_overlay_6__021205d4[*(int *)(self + 68) + 1];
        stage = *(int *)(self + 68);
        if (stage < 15) {
            Self *s = (Self *)self;
            FUN_02015c1c(3, s->rec[stage].f[5], s->rec[stage].f[4], s->rec[stage].f[3], s->rec[stage].f[6], s->rec[stage].f[7], 0, 1);
        }
        config = 0;
        stage = *(int *)(self + 68);
        if (stage >= 1 && stage < 15) {
            FUN_overlay_6__021201a0(self, 1, 1, 1);
            config = (const int *)((char **)DAT_overlay_6__02123418[*(signed char *)(self + 805)])[*(unsigned char *)(self + 889)];
            config = (const int *)((const char *)config + 24 * (*(int *)(self + 68) - 1));
        } else if (stage == 15) {
            config = (const int *)(DAT_overlay_6__021204e4 + 24 * *(signed char *)(self + 805));
            FUN_overlay_6__021201a0(self, 0, 0, 0);
            *(int *)(self + 752) = *(int *)(self + 760);
            FUN_overlay_6__021201a0(self, 1, 0, 0);
            object = *(char **)(self + 4400);
            if (object) *(unsigned int *)(object + 24) |= 1;
        } else {
            FUN_overlay_6__021201a0(self, 0, 0, 0);
        }
        if (config) FUN_overlay_6__0212020c(self, config);
        object = *(char **)(self + 4384);
        if (object) {
            if (DAT_overlay_6__0212058c[*(int *)(self + 68) + 1] == 1) *(unsigned int *)(object + 24) |= 1;
            else *(unsigned int *)(object + 24) &= ~1U;
        }
        *(int *)(self + 748) = 2;
    } else if (state == 2) {
        *(int *)(self + 748) = 1;
        FUN_020c2d94(1, 1, 1);
        if (*(int *)(self + 68) == 15) *(Pair *)self = *(Pair *)(DAT_a_02123418 + 4);
    } else if (*(unsigned long long *)(self + 56) >= *(unsigned long long *)(self + 24)) {
        *(int *)(self + 748) = 0;
        FUN_020c2d94(1, 2, 1);
    }
}
