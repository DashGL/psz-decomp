// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern const unsigned char D_020eb958[];

unsigned int FUN_020d92fc(const char *s, unsigned int mod) {
    unsigned int h = 0;
    for (; *s != 0; s++) {
        int c = *s;
        if (c >= 0 && c < 0x80) {
            c = D_020eb958[c];
        }
        unsigned int prod = h * 0x9ccf9319u;
        h = prod + c;
    }
    return h % mod;
}
