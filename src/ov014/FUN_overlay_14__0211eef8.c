// flags: -O4,s
extern int FUN_overlay_14__0211f2e0(void *);
int FUN_overlay_14__0211eef8(unsigned char *self) {
    int group;
    switch (FUN_overlay_14__0211f2e0(self)) {
    case 0:
        return *(int *)(self + 236);
    case 1:
        return *(int *)(self + 248);
    case 2:
    case 4:
        group = *(int *)(self + 152);
        if (group >= 0 && group < 2) {
            if (*(int *)(self + 32 + 24 * group) != 1)
                return *(int *)(self + 240);
            return *(int *)(self + 248);
        }
        return -1;
    case 3:
        return *(int *)(self + 244);
    case 5:
        return *(int *)(self + 244);
    }
    return -1;
}
