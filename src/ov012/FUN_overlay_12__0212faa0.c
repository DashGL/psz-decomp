// flags: -O4,s
extern int DAT_021387ec;
extern int DAT_02138784;
extern void FUN_overlay_12__0211f870(void *, int, int, int), FUN_overlay_12__02133aa4(void), FUN_overlay_12__021305d0(void *), FUN_overlay_12__02131b10(int), FUN_overlay_12__0212c694(void *), FUN_overlay_12__0212c6b4(void *);
void FUN_overlay_12__0212faa0(int *self) {
    int v37;
    self[19] = 17;
    v37 = self[37];
    self[45] = self[38];
    FUN_overlay_12__0211f870(self + 42, 17, 5, v37);
    self[17] = 0;
    self[47] = 1;
    if (self[18] == 0) FUN_overlay_12__02133aa4();
    FUN_overlay_12__021305d0(self);
    if (self[18] == 1) {
        FUN_overlay_12__02131b10(0);
        FUN_overlay_12__02131b10(1);
        FUN_overlay_12__02131b10(4);
        FUN_overlay_12__0212c694(&DAT_021387ec);
        FUN_overlay_12__0212c6b4(&DAT_02138784);
    }
}
