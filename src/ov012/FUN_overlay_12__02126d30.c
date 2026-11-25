// flags: -O4,p
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *, int);
extern int FUN_overlay_12__02126cfc(void *, void *), FUN_020c3f90(char *, unsigned, const char *, ...);
extern char DAT_0213ed28[];
extern const char DAT_0213de08[];
char *FUN_overlay_12__02126d30(char *self) {
    char *mgr16 = FUN_02086e3c() + 16;
    int index = *(int *)(self + 16), value = 0;
    if (index >= 0) value = FUN_overlay_12__02126cfc(self, FUN_020b00ac(mgr16, index));
    FUN_020c3f90(DAT_0213ed28, 9, DAT_0213de08, value);
    return DAT_0213ed28;
}
