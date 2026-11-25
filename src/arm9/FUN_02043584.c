// flags: -O4,s
struct Scale {
    int pad[25];
    int x;
    int y;
};

void FUN_02043584(void *unused, void *unused2, unsigned char *s, unsigned char *out, int *status, struct Scale *scale) {
    unsigned int flags;
    int b1, b2, b3, b4;
    *status = 1;
    flags = *(unsigned int *)(s + 0xb4);
    b1 = (flags & 1) ? 1 : 0;
    if (b1 != 0) {
        *(short *)out = *(int *)(s + 0xa8);
        *(short *)(out + 2) = *(int *)(s + 0xac);
    } else {
        b2 = (flags & 2) ? 1 : 0;
        if (b2 != 0) {
            *(short *)out = (scale->x * *(int *)(s + 0xa8)) / 100;
            *(short *)(out + 2) = (scale->y * *(int *)(s + 0xac)) / 100;
        } else {
            int sum = *(int *)(s + 0xb8) + *(int *)(s + 0xbc) + *(int *)(s + 0xc0);
            int val = (int)(((long long)sum * *(int *)(s + 0xc4) + 0x800) >> 12);
            *(short *)out = (int)(((long long)val * *(int *)(s + 0xc8) + 0x800) >> 12);
        }
    }
    b3 = (*(unsigned int *)(s + 0xb0) & 2) ? 1 : 0;
    if (b3 != 0) {
        *(short *)(out + 8) |= 0x80;
    }
    b4 = (*(unsigned int *)(s + 0xb0) & 1) ? 1 : 0;
    if (b4 != 0) {
        *(short *)(out + 8) |= 0x40;
    }
    out[0x15] = 0;
}
