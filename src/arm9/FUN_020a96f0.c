// flags: -O4,p
extern int FUN_02035b60(int);
void FUN_020a96f0(char *self, signed char *desc, int index) {
    if (index < 6) {
        int low = desc[3] * 1800, high = desc[4] * 1800;
        int r = FUN_02035b60(high - low);
        *(int *)(self + 8 + 4 * index) = *(int *)(self + 4) * (low + r);
        if (*(int *)(self + 8 + 4 * index) <= 0) *(int *)(self + 32 + 4 * index) = 0;
    }
}
