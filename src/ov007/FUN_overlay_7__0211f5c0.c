// flags: -O4,s
#pragma opt_propagation off
extern unsigned int DAT_0211fd5c[];
extern int FUN_overlay_7__0211fc38(void *);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3788(void *, const signed char *, int, int, int);
extern void *FUN_02093c00(int);
extern const signed char *FUN_02093b2c(void *, unsigned int, unsigned int);

void FUN_overlay_7__0211f5c0(char *self)
{
    void *resource;
    const signed char *text;
    int i, y;

    *(int *)(self + 156) = 0;
    *(int *)(self + 164) = *(int *)(self + 156);
    *(int *)(self + 8) = FUN_overlay_7__0211fc38(self);
    *(int *)(self + 4) = 0;
    *(int *)(self + 12) = 1;
    text = 0;
    if (text) {
        FUN_020c3788(self + 80, text, 0, 0, 2);
    } else {
        FUN_020c38f0(self + 80, 0);
    }
    resource = FUN_02093c00(0);
    if (resource) {
        text = 0;
        if (text) {
            FUN_020c3788(self + 20, text, 0, 0, 2);
        } else {
            FUN_020c38f0(self + 20, 0);
        }
        y = 0;
        i = 0;
        do {
            if (*(unsigned int *)(self + 160) & (1U << i)) {
                text = FUN_02093b2c(resource, 5, DAT_0211fd5c[i]);
                if (text) {
                    FUN_020c3788(self + 20, text, 0, y, 2);
                } else {
                    FUN_020c38f0(self + 20, 0);
                }
                y += 16;
            }
            i++;
        } while (i < 2);
    }
}
