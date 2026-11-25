// flags: -O4,s
typedef struct {
    unsigned short w[4];
} Row4_0211ea40;
extern const Row4_0211ea40 DAT_0212329c;
extern const int DAT_021232a4[];
extern void FUN_overlay_18__0211eb04(void *);
extern void FUN_overlay_18__0211ebbc(void *, void *);
extern void FUN_020c38f0(void *, int);
extern unsigned *FUN_overlay_18__0211e6f4(void *, int);
extern void *FUN_02093c1c(int, int, int);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void FUN_020c3864(void *, void *, int, int, int);
void FUN_overlay_18__0211ea40(char *self, void *arg) {
    Row4_0211ea40 text, base;
    int i;
    FUN_overlay_18__0211eb04(self);
    FUN_overlay_18__0211ebbc(self, arg);
    if (!*(int *)(self + 88)) {
        return;
    }
    FUN_020c38f0(self + 8, 0);
    for (i = 0, base = DAT_0212329c; i < *(int *)(self + 92); i++) {
        unsigned val = *FUN_overlay_18__0211e6f4(self + 72, i);
        if (i == 4 && val > 7) {
            void *msg = FUN_02093c1c(0, 2, 1);
            FUN_020c3788(self + 8, msg, 15, 24 * i, 1);
        } else {
            text = base;
            text.w[0] += val + 1;
            text.w[2] += DAT_021232a4[i] + 1;
            FUN_020c3864(self + 8, &text, 15, 24 * i, 1);
        }
    }
    *(int *)(self + 88) = 0;
}
