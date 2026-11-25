// flags: -O4,s
extern void *FUN_020014d4(void *, const void *, unsigned int);
extern void FUN_overlay_12__02131c80(const void *, int);
void FUN_overlay_12__0213689c(unsigned char *self, const int *params) {
    const signed char *text;
    int length;
    *(int *)(self + 64) = params[3];
    *(int *)(self + 68) = 0;
    *(int *)(self + 72) = params[0];
    *(int *)(self + 76) = params[1];
    *(int *)(self + 80) = params[2];
    *(int *)(self + 84) = params[3];
    *(int *)(self + 88) = params[4];
    *(int *)(self + 92) = params[5];
    *(int *)(self + 96) = params[6];
    *(int *)(self + 100) = params[7];
    *(int *)(self + 104) = params[8];
    text = (const signed char *)params[0];
    self[108] = 0;
    if (text) {
        const signed char *start = text;
        for (length = 0; length < 256; length++, text++) {
            if (*text == 0) {
                FUN_020014d4(self + 108, start, length + 1);
                break;
            }
        }
    }
    if (params[1] == 1) FUN_overlay_12__02131c80((const void *)0x0213bfc8, 28);
}
