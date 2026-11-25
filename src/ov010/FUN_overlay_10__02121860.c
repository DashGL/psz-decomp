// flags: -O4,s
extern int FUN_020bbf6c(unsigned int);
extern int FUN_020af1ec(void *, unsigned int);
extern void FUN_overlay_10__02121090(void);
extern void FUN_overlay_10__02121ca0(void *, int);
extern void FUN_overlay_10__02121078(int);
extern void *FUN_overlay_10__02121ad4(void);
int FUN_overlay_10__02121860(char *self, unsigned int arg) {
    int result, index;
    void *panel;
    if (FUN_020bbf6c(1024)) FUN_overlay_10__02121090();
    result = FUN_020af1ec(self, arg);
    index = *(int *)(self + 4);
    if (*(int *)(self + 120) != index) {
        *(int *)(self + 120) = index;
        panel = FUN_overlay_10__02121ad4();
        if (panel) FUN_overlay_10__02121ca0(panel, index);
    }
    FUN_overlay_10__02121078(index);
    return result;
}
