// flags: -O4,s
typedef struct {
    unsigned short text[4];
} Label_021217c4;
extern const Label_021217c4 DAT_021238e4;
extern const unsigned DAT_021238ec[];
extern void FUN_overlay_11__02121888(void *);
extern void FUN_overlay_11__02121940(void *, void *);
extern void FUN_020c38f0(void *, unsigned);
extern unsigned *FUN_overlay_11__0212146c(void *, int);
extern void *FUN_02093c1c(unsigned, unsigned, unsigned);
extern void FUN_020c3788(void *, void *, unsigned, unsigned, unsigned);
extern void FUN_020c3864(void *, void *, unsigned, unsigned, unsigned);
void FUN_overlay_11__021217c4(char *self, void *appearance) {
    Label_021217c4 label, pattern;
    int i;
    FUN_overlay_11__02121888(self);
    FUN_overlay_11__02121940(self, appearance);
    if (!*(unsigned *)(self + 88)) {
        return;
    }
    FUN_020c38f0(self + 8, 0);
    for (i = 0, pattern = DAT_021238e4; i < *(int *)(self + 92); i++) {
        unsigned value = *FUN_overlay_11__0212146c(self + 72, i);
        if (i == 4 && value > 7) {
            void *text = FUN_02093c1c(0, 2, 1);
            FUN_020c3788(self + 8, text, 15, 24 * i, 1);
        } else {
            label = pattern;
            label.text[0] += value + 1;
            label.text[2] += DAT_021238ec[i] + 1;
            FUN_020c3864(self + 8, &label, 15, 24 * i, 1);
        }
    }
    *(unsigned *)(self + 88) = 0;
}
