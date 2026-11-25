// flags: -O4,p -noThumb
extern int FUN_02018c78(void *, void *);
void FUN_02018cec(char *self, void *item) {
    if (FUN_02018c78(self + 8, item) ||
        FUN_02018c78(self + 16, item) ||
        FUN_02018c78(self + 24, item)) {
        *(unsigned int *)self |= 0x10;
    }
}
