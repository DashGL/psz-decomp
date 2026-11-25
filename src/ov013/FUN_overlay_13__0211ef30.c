// flags: -O4,s
extern const int DAT_0211f9a0[];
extern const int DAT_0211f9e8[4][2];
extern const int DAT_0211f9c8[4][2];
extern int FUN_overlay_13__0211f198(void);
extern void FUN_overlay_13__0211eef4(void *, int, int);
void FUN_overlay_13__0211ef30(int *self, int selection) {
    if (selection < 0 || selection >= 2) return;
    if ((unsigned)self[2] <= 1 && self[1] == 0 && !FUN_overlay_13__0211f198()) {
        self[21] = selection;
        FUN_overlay_13__0211eef4(self, 3, DAT_0211f9a0[selection]);
        self[20] = 90;
        return;
    }
    if (self[2] >= 0 && self[2] < 4) {
        self[21] = selection;
        if (self[1] == 0) FUN_overlay_13__0211eef4(self, 3, DAT_0211f9e8[self[2]][self[21]]);
        else FUN_overlay_13__0211eef4(self, 3, DAT_0211f9c8[self[2]][self[21]]);
    }
    self[20] = 90;
}