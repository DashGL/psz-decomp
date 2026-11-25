// flags: -O4,s
extern void *DAT_overlay_12__0213f2fc;
extern void FUN_overlay_12__021351fc(int);
extern void FUN_02091708(void);
extern void FUN_overlay_12__02135808(int *), FUN_overlay_12__021357b0(int *);
extern int FUN_020bbf6c(unsigned), FUN_overlay_12__02135750(int *), FUN_020c2e38(void);
extern void FUN_020c193c(unsigned, unsigned, int, unsigned, int), FUN_020c2d94(int, int, int);
extern void *FUN_overlay_12__02135cac(void), *FUN_overlay_12__02135454(void);
extern int FUN_overlay_12__021359a4(void *), FUN_overlay_12__02134c60(void *);
extern void FUN_overlay_12__02135cbc(void), FUN_overlay_12__02135464(void);
extern void FUN_overlay_12__02131aec(int), FUN_overlay_12__02135544(int *), FUN_overlay_12__0213559c(int *);
extern void FUN_overlay_12__02135430(void), FUN_overlay_12__02135c88(void);
extern void FUN_overlay_12__02134bdc(void *, void *, int), FUN_overlay_12__02135924(void *, void *, int);

int FUN_overlay_12__021355ec(int *s, int mode)
{
    int selection;
    FUN_overlay_12__021351fc(mode);
    FUN_02091708();
    FUN_overlay_12__02135808(s);
    FUN_overlay_12__021357b0(s);
    switch ((unsigned)s[3]) {
    case 1:
        if (FUN_020bbf6c(2)) {
            FUN_020c193c(0, 1, 0, 0, -1);
            s[2] = s[3];
            s[3] = 3;
            return 1;
        }
        if (FUN_overlay_12__02135750(s)) {
            FUN_020c2d94(1, 2, 0);
            s[2] = s[3];
            s[3] = 0;
        }
        break;
    case 2:
        if (s[5] == 0) {
            if (!FUN_overlay_12__02134c60(FUN_overlay_12__02135454())) { s[2] = s[3]; s[3] = 0; }
        } else if (!FUN_overlay_12__021359a4(FUN_overlay_12__02135cac())) { s[2] = s[3]; s[3] = 0; }
        break;
    case 0:
        if (FUN_020c2e38()) break;
        if (s[2] == 2) {
            if (s[5] == 0) FUN_overlay_12__02135464();
            else FUN_overlay_12__02135cbc();
            FUN_overlay_12__02131aec(0);
            FUN_overlay_12__02131aec(1);
            FUN_overlay_12__02131aec(5);
            FUN_overlay_12__02135544(s);
            s[2] = s[3];
            s[3] = 1;
            FUN_020c2d94(1, 1, 0);
        } else if (s[2] == 1) {
            FUN_overlay_12__0213559c(s);
            selection = 3;
            switch (mode) {
            case 7: selection = 5; break;
            case 8: selection = 6; break;
            }
            if (s[5] == 0) {
                FUN_overlay_12__02135430();
                FUN_overlay_12__02134bdc(FUN_overlay_12__02135454(), DAT_overlay_12__0213f2fc, selection);
            } else {
                FUN_overlay_12__02135c88();
                FUN_overlay_12__02135924(FUN_overlay_12__02135cac(), DAT_overlay_12__0213f2fc, selection);
            }
            s[2] = s[3];
            s[3] = 2;
            FUN_020c2d94(1, 1, 0);
        }
        break;
    case 3:
        return 1;
    }
    return 0;
}
