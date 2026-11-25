// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x158, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Elem_53a14 {
    unsigned char a;
    unsigned char b;
    const unsigned char *p;
};
struct Ret_53a14 {
    unsigned char count;
    struct Elem_53a14 elems[16];
};
struct Pkt_53a14 {
    unsigned short f0;
    unsigned char pad2[0x3a];
    unsigned short f3c;
    unsigned short f3e;
};

struct Ret_53a14 FUN_02053a14(const struct Pkt_53a14 *pkt) {
    struct Ret_53a14 ret;
    const unsigned char *p; unsigned char max_len; int i; unsigned char total;
    if (pkt->f3c != 0) {
        ret.count = 0;
        return ret;
    }
    ret.count = (unsigned char)pkt->f3e;
    if (ret.count == 0) {
        return ret;
    }
    if (ret.count > 0x10) {
        ret.count = 0x10;
    }
    total = 0; p = (const unsigned char *)(pkt + 1); max_len = (unsigned char)((pkt->f0 << 1) - 0x40);
    for (i = 0; i < ret.count; i++) {
        unsigned char step;
        ret.elems[i].a = p[0];
        ret.elems[i].b = p[1];
        ret.elems[i].p = p + 2;
        step = (unsigned char)(ret.elems[i].b + 2);
        total = (unsigned char)(total + step);
        if (total > max_len) {
            ret.count = 0;
            return ret;
        }
        p += step;
    }
    return ret;
}
