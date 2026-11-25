// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
struct SigD6FDC {
    unsigned char b[6];
};

extern const struct SigD6FDC DAT_020f5f2c;

void FUN_020d6fdc(unsigned char *self, const unsigned char *buf, int len) {
    struct SigD6FDC sig = DAT_020f5f2c;
    unsigned int v;
    int i;
    int match = 1;
    if (len >= 10) {
        for (i = 0; i < 6; i++) {
            if (sig.b[i] != buf[i]) {
                match = 0;
                break;
            }
        }
    } else {
        match = 0;
    }
    if (match) {
        unsigned char *p = (unsigned char *)&v;
        p[0] = buf[6];
        p[1] = buf[7];
        p[2] = buf[8];
        p[3] = buf[9];
        void (*cb)(unsigned int, void *) = *(void (**)(unsigned int, void *))(self + 0xa0);
        if (cb != 0) {
            cb((unsigned char)(v >> 24) | ((v >> 8) & 0x0000ff00U) |
                   ((v << 8) & 0x00ff0000U) | ((v << 24) & 0xff000000U),
               *(void **)(self + 0x10c));
        }
    } else {
        void (*cb2)(const unsigned char *, int, void *) =
            *(void (**)(const unsigned char *, int, void *))(self + 0xa4);
        if (cb2 != 0) {
            cb2(buf, len, *(void **)(self + 0x10c));
        }
    }
}
