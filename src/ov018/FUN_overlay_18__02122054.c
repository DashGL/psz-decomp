extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, void *);
extern void FUN_020c23bc(void *, void *, int);
extern int FUN_020c2438(void *, const void *, const void *, int);
extern void *DAT_overlay_18__02123804[];

void FUN_overlay_18__02122054(char *self, unsigned old_page, unsigned new_page) {
    const char *name = 0;
    void *dir;
    if (new_page == old_page) {
        return;
    }
    if (name == 0) {
        return;
    }
    if (*(int *)(self + 0xf8) != -1) {
        FUN_020c2624(FUN_020c1fc8(), self + 0xf8);
        *(int *)(self + 0xf8) = -1;
    }
    dir = DAT_overlay_18__02123804[0];
    FUN_020c23bc(FUN_020c1fc8(), dir, 2);
    *(int *)(self + 0xf8) = FUN_020c2438(FUN_020c1fc8(), 0, dir, 2);
}
