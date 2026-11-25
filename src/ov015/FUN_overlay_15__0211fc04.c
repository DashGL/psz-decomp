// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
struct DstFc04 {
    unsigned int f0;
    unsigned int len;
    unsigned char str[0x28];
    unsigned char bin[0x40];
};

extern unsigned short FUN_overlay_15__021207dc(unsigned short);
extern void FUN_overlay_15__021206c0(void *, const void *, int);

int FUN_overlay_15__0211fc04(unsigned char *src, struct DstFc04 *dst) {
    unsigned char *p = src + 6;

    for (;;) {
        unsigned int len = FUN_overlay_15__021207dc(*(unsigned short *)(p + 2));
        unsigned short next;

        switch (p[0]) {
        case 0x30:
        case 0x40:
            if (len > 0x40) {
                return -1;
            }
            break;
        case 0x35:
        case 0x45:
            if (len > 0x21) {
                return -1;
            }
            break;
        }
        switch (p[0]) {
        case 0x30:
        case 0x40:
            FUN_overlay_15__021206c0(dst->bin, p + 6, len);
            dst->len = len;
            break;
        case 0x35:
        case 0x45:
            if (len != 0 && p[len + 5] != 0) {
                return -1;
            }
            FUN_overlay_15__021206c0(dst->str, p + 6, len);
            break;
        default:
            return -1;
        }
        next = *(unsigned short *)(p + 4);
        if (next == 0) {
            break;
        }
        p = (src + 6) + FUN_overlay_15__021207dc(next);
    }
    return 0;
}
