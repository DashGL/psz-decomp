// flags: -O4,s
extern int FUN_overlay_7__0211fc58(void *);
extern void *FUN_0200d16c(void);

int FUN_overlay_7__0211f8c0(char *self, char *event) {
    int state = *(int *)(self + 156);
    if (state == 0) {
        switch (FUN_overlay_7__0211fc58(self)) {
        case 0:
            *(int *)(self + 164) = 2;
            break;
        case 1:
            *(int *)(self + 164) = 1;
            break;
        }
    } else if (state == 1) {
        switch (*(int *)(self + 4)) {
        case 0:
            *(short *)event = 5;
            *(short *)(event + 2) = 0;
            *(int *)(event + 4) = *(int *)(self + 152);
            break;
        case 1:
            *(int *)(self + 164) = 0;
            break;
        }
    } else if (state == 2) {
        switch (*(int *)(self + 4)) {
        case 0:
            *(short *)event = 11;
            *(short *)(event + 2) = *(int *)((char *)FUN_0200d16c() + 16);
            break;
        case 1:
            *(int *)(self + 164) = 0;
            break;
        }
    }
    return 1;
}
