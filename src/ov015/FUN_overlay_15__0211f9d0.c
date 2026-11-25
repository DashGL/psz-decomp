// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
struct S0213c2c0 {
    unsigned char pad[0x34];
    unsigned int f34;
    unsigned int f38;
};

struct Dst {
    unsigned char f0[0x80];
    unsigned char f80[0x80];
    unsigned char f100[4];
};

extern void FUN_overlay_15__021206d0(void *, int, int);
extern void FUN_overlay_15__021206c0(void *, const void *, int);
extern int FUN_overlay_15__021207dc(unsigned short);
extern unsigned int FUN_overlay_15__021207b4(unsigned int);
extern unsigned int FUN_overlay_15__0211fa8c(const void *, int);

extern struct S0213c2c0 data_0213c2c0;

int FUN_overlay_15__0211f9d0(unsigned char *src, struct Dst *dst) {
    unsigned char *p;

    FUN_overlay_15__021206d0(dst, 0, sizeof(struct Dst));
    p = src;
    for (;;) {
        int len = FUN_overlay_15__021207dc(*(unsigned short *)(p + 2));
        unsigned short next;
        if (len <= 0) {
            return -1;
        }
        switch (p[0]) {
        case 0:
            FUN_overlay_15__021206c0(dst->f0, p + 6, len);
            break;
        case 1:
            FUN_overlay_15__021206c0(dst->f80, p + 6, len);
            break;
        case 2:
            FUN_overlay_15__021206c0(dst->f100, p + 6, len);
            break;
        case 3:
        case 4:
            if (FUN_overlay_15__021207dc(p[6]) <= 0) {
                return -2;
            }
            break;
        case 5:
            data_0213c2c0.f34 = FUN_overlay_15__021207b4(FUN_overlay_15__0211fa8c(p + 6, len));
            break;
        case 6:
            data_0213c2c0.f38 = FUN_overlay_15__021207b4(FUN_overlay_15__0211fa8c(p + 6, len));
            break;
        default:
            return -1;
        }
        next = *(unsigned short *)(p + 4);
        if (next == 0) {
            break;
        }
        p = src + FUN_overlay_15__021207dc(next);
    }
    return 0;
}
