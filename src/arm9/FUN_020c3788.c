// flags: -O4,s
extern short DAT_0211ccd0[];
extern short DAT_0211cece[];
extern void FUN_020c37e0(void *, int, int, unsigned int, unsigned int, short *);
void FUN_020c3788(char *self, const signed char *text, int x, int y, unsigned int arg) {
    if (text) {
        short *out = DAT_0211ccd0, *end = DAT_0211cece;
        while (out < end) {
            int c = *text;
            if (c == 1 || c == 0)
                break;
            *out = c;
            text++;
            out++;
        }
        *out = 0;
        FUN_020c37e0(self + 28, x + *(int *)(self + 44), y + *(int *)(self + 48), arg, *(unsigned int *)(self + 56), DAT_0211ccd0);
    }
}
