// flags: -O4,s
extern int FUN_overlay_18__02121eb0(void *);

int FUN_overlay_18__021214f0(unsigned *self, unsigned short *output, int length)
{
    int i, j;
    unsigned short value;
    int wide = self[0] <= 3 && ((1u << self[0]) & 11);
    if (!wide) return -1;
    if (!FUN_overlay_18__02121eb0(self)) return -1;
    if (output && self[34]) {
        for (i = 0; i < length && i < (int)self[36] && (value = ((unsigned short *)self[34])[i]) != 0; i++) {
            output[i] = value;
        }
        for (j = i; j < length; j++) {
            output[j] = 0;
        }
        return i;
    }
    return -1;
}
