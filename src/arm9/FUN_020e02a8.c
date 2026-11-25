// flags: -O4,p
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);
extern const char *DAT_02100904;

int FUN_020e02a8(const char *arg0, unsigned int arg1, char *arg2, unsigned int arg3) {
    unsigned int needed = (arg1 / 3) * 4 + ((arg1 % 3) ? 4 : 0);
    if (arg2 != 0) {
        int rem;
        const char *end;
        char *out;
        if (arg3 < needed) {
            return -1;
        }
        end = arg0 + arg1;
        out = arg2;
        for (; arg0 != end; out += 4, arg0 += rem) {
            unsigned char buf[3];
            int bits;
            int out_chars;
            rem = end - arg0;
            bits = (int)((unsigned int)rem * 8u);
            out_chars = (bits / 6) + ((bits % 6) ? 1 : 0);
            rem = (rem < 3) ? rem : 3;
            FUN_020656b8(buf, 0, 3);
            FUN_02065774(arg0, buf, rem);
            out[0] = DAT_02100904[(int)buf[0] >> 2];
            out[1] = (out_chars >= 2) ? DAT_02100904[((buf[0] << 4) & 0x3f) | ((int)buf[1] >> 4)] : '*';
            out[2] = (out_chars >= 3) ? DAT_02100904[((buf[1] << 2) & 0x3f) | ((int)buf[2] >> 6)] : '*';
            out[3] = (out_chars >= 4) ? DAT_02100904[buf[2] & 0x3f] : '*';
        }
        return out - arg2;
    }
    return needed;
}
