// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int DAT_0211a51c;
extern int DAT_020fc988;
extern int FUN_0207f770(void *);
extern int FUN_02084d00(void *);
extern int FUN_02086a44(int);
extern int FUN_02086bd8(int, void *);
extern int FUN_02086a90(void *);
extern int FUN_overlay_23__0219bd14(void *);
extern void FUN_overlay_23__02199e00(void *, int, int);
extern int FUN_02036c34(void *);

void FUN_overlay_23__0219bc60(int *self) {
    int *owner = (int *)self[1];
    int current = FUN_0207f770(owner + 25);
    int changed = 1;
    int a = 0;
    int old = self[29];
    if (old != 3 && current == 3) a = 1;
    if (a == 0) {
        if (old == 3 && current != 3) ; else changed = 0;
    }
    if (FUN_02084d00(&DAT_0211a51c) && self[31] == 0 && ((!FUN_02086a44(self[25]) ? E1 : E0) || ((self[30] <= DAT_020fc988) ? E1 : E0) || changed)) {
        int selected;
        if (current == 3) selected = FUN_02086bd8(owner[3], owner + 14);
        else selected = FUN_02086a90(owner);
        if (selected != -1) {
            int kind = FUN_overlay_23__0219bd14(self);
            FUN_overlay_23__02199e00(owner, selected, kind);
            self[31] = 1;
        }
    }
    self[30] -= FUN_02036c34(owner);
}
