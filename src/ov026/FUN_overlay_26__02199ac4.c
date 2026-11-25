// flags: -O4,s
extern void FUN_02037910(void *, int);
extern int FUN_overlay_26__02199c34(void *);
void FUN_overlay_26__02199ac4(unsigned char *self) {
    unsigned char *owner = *(unsigned char **)(self + 4);
    int value = *(short *)(owner + 24);
    int threshold = 3 * *(int *)(owner + 52);
    if (2 * value > threshold) {
        if (!(*(unsigned int *)(self + 84) & 1)) {
            *(unsigned int *)(self + 84) |= 1;
            FUN_02037910(self, *(int *)(self + 56));
            return;
        }
    } else if (value > threshold) {
        if (!(*(unsigned int *)(self + 84) & 2)) {
            *(unsigned int *)(self + 84) |= 2;
            FUN_02037910(self, *(int *)(self + 56));
            return;
        }
    }
    if (FUN_overlay_26__02199c34(self) == 1) FUN_02037910(self, *(int *)(self + 68));
}
