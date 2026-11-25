// flags: -O4,p
extern void *DAT_02108c68;
extern void *FUN_02077f3c(void);
extern int FUN_02077fec(void *), FUN_02078038(void *), FUN_020c2e38(void), FUN_020bbf6c(int), FUN_020c2d94(int, int, int);
extern int FUN_overlay_12__02121058(void *), FUN_overlay_12__0212139c(void *), FUN_overlay_12__02121298(void *);
extern void FUN_02091708(void), FUN_020c193c(int, int, int, int, int);
extern int FUN_02033400(void *, unsigned);
extern void FUN_overlay_12__02121458(void *), FUN_overlay_12__0212127c(void *, int), FUN_overlay_12__02120de8(void *), FUN_overlay_12__02120e60(void *), FUN_overlay_12__02120f78(void *), FUN_overlay_12__0212133c(void *);
void FUN_overlay_12__02121134(int *self)
{
    int notify;
    void *resources;
    if (self[16]) {
        resources = FUN_02077f3c();
        if (FUN_02077fec(resources) != -1 && FUN_02078038(resources) != -1) FUN_02091708();
    }
    notify = 0;
    switch ((unsigned)self[4]) {
    case 0:
        if (FUN_020c2e38()) { FUN_overlay_12__02121458(self); return; }
        if (FUN_overlay_12__02121058(self)) FUN_overlay_12__0212127c(self, 2);
        if (FUN_020bbf6c(2)) {
            FUN_020c193c(0, 1, 0, 0, -1); self[18] = 1; FUN_020c2d94(0, 2, 0); FUN_overlay_12__0212127c(self, 2);
        }
        break;
    case 1:
        if (FUN_overlay_12__0212139c(self)) {
            FUN_overlay_12__0212127c(self, 2);
            if (FUN_020c2e38()) break;
        }
    case 2:
        if (FUN_020c2e38()) return;
        if (self[18]) { FUN_overlay_12__0212127c(self, 3); notify = 1; }
        else if (self[5] == 1) {
            FUN_020c2d94(FUN_overlay_12__02121298(self), 1, 0);
            if (self[6] == 2) FUN_overlay_12__02120de8(self);
            FUN_overlay_12__02120e60(self); FUN_overlay_12__0212127c(self, 0);
        } else if (self[5] == 0) {
            if ((unsigned)self[6] <= 1) FUN_020c2d94(0, 1, 0);
            FUN_overlay_12__02120f78(self); FUN_overlay_12__0212133c(self); FUN_overlay_12__0212127c(self, 1);
        }
        break;
    case 3:
        break;
    }
    FUN_overlay_12__02121458(self);
    if (notify) FUN_02033400(DAT_02108c68, 14);
}
