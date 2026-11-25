// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern const int DAT_0219aff0;
extern int DAT_020fc988;
extern void FUN_overlay_30__02199ddc(void *);
extern int FUN_overlay_30__02199ac0(void *);
extern int FUN_overlay_30__02199d5c(void *);
extern void FUN_02037910(void *, int);
extern int FUN_02036c34(void *);

void FUN_overlay_30__02199904(int *self) {
    int delta;
    FUN_overlay_30__02199ddc(self);
    self[23] = 0;
    if ((self[18] == self[2]) ? E1 : E0) {
        if (!FUN_overlay_30__02199ac0(self)) FUN_overlay_30__02199d5c(self);
    } else if ((self[2] == self[4]) ? E1 : E0) {
        FUN_02037910(self, self[18]);
    }
    delta = FUN_02036c34((void *)self[1]);
    if (self[23]) self[24] -= delta;
    else self[24] = DAT_0219aff0;
    if ((self[25] > DAT_020fc988) ? E1 : E0) self[25] -= delta;
    if ((self[26] > DAT_020fc988) ? E1 : E0) self[26] -= delta;
    if ((self[27] > DAT_020fc988) ? E1 : E0) self[27] -= delta;
}
