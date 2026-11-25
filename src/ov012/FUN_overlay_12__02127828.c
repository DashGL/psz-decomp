// flags: -O4,p
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *, int);
extern int FUN_overlay_12__021277f4(void *, void *), FUN_020c3f90(char *, unsigned, const char *, ...);
extern char DAT_0213ef70[];
extern const char DAT_0213de28[];
char *FUN_overlay_12__02127828(char *self) {
    char *mgr16 = FUN_02086e3c() + 16;
    int index = *(int *)(self + 20), value = 0;
    if (index >= 0) value = FUN_overlay_12__021277f4(self, FUN_020b00ac(mgr16, index));
    FUN_020c3f90(DAT_0213ef70, 9, DAT_0213de28, value);
    return DAT_0213ef70;
}
