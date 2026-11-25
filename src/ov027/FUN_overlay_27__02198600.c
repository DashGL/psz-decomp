// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int DAT_0211a51c;
extern int DAT_020fc988;
extern int FUN_0207f770(void *);
extern int FUN_02084d00(void *);
extern int FUN_02086a44(int);
extern int FUN_02086bd8(int, void *);
extern int FUN_02086a90(void *);
extern void FUN_overlay_27__02197fd0(void *, int);

void FUN_overlay_27__02198600(int *self) {
    int *owner = (int *)self[1];
    int current = FUN_0207f770(owner + 25);
    int changed = 1;
    int a = 0;
    int old = self[14];
    if (old != 3 && current == 3) a = 1;
    if (a == 0) {
        if (old == 3 && current != 3) ; else changed = 0;
    }
    if (FUN_02084d00(&DAT_0211a51c) && self[16] == 0 && ((!FUN_02086a44(self[13]) ? E1 : E0) || ((self[12] <= DAT_020fc988) ? E1 : E0) || changed)) {
        int selected;
        if (current == 3) selected = FUN_02086bd8(owner[3], owner + 14);
        else selected = FUN_02086a90(owner);
        if (selected != -1) {
            self[16] = 1;
            FUN_overlay_27__02197fd0(owner, selected);
        }
    }
    self[14] = current;
    self[12] -= 4096;
}
