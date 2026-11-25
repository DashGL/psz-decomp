// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_02003c70(const char *);
extern int FUN_020d28a4(const char *);
extern int FUN_02003a78(void);
extern int FUN_02000ec4(int);
extern const char DAT_020fe7a0[];

char *FUN_020d29bc(char *out, const char *in) {
    int flag;
    int prev;
    int len;
    int i;
    int acc;
    len = FUN_02003c70(DAT_020fe7a0);
    flag = FUN_020d28a4(in);
    for (i = 0, acc = 0; i < 0x20; i++, acc += 0x4647) {
        if (flag == 0 || i == 0 || i == 0xd) {
            out[i] = (char)(FUN_02003a78() % 0x5d + 0x21);
        } else {
            if (i == 1 || i == 0xe) {
                prev = in[i];
            } else {
                prev = in[i - 1];
            }
            out[i] = (char)(FUN_02000ec4(
                                ((unsigned char)in[(DAT_020fe7a0[(i + (unsigned char)in[i]) % len] +
                                                    i * (unsigned char)in[i]) %
                                                   0x20]) ^
                                DAT_020fe7a0[(prev * acc) % len]) %
                                0x5d +
                            0x21);
        }
    }
    return out;
}
