// flags: -O4,s
extern int FUN_overlay_14__0211f524(void *);

int FUN_overlay_14__0211ebec(unsigned *self, signed char *output, int length)
{
    int i, j;
    int wide = self[0] <= 3 && ((1u << self[0]) & 11);
    if (wide) return -1;
    if (!FUN_overlay_14__0211f524(self)) return -1;
    if (output && self[35]) {
        for (i = 0; i < length && i < (int)self[36] && ((signed char *)self[35])[i] != 0; i++) {
            output[i] = ((signed char *)self[35])[i];
        }
        for (j = i; j < length; j++) {
            output[j] = 0;
        }
        return i;
    }
    return -1;
}
