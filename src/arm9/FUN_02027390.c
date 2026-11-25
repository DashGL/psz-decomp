// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sock27390 {
    char pad[0x48];
    int f48;
    int f4c;
    char pad2[0x18];
    char *f68;
    int f6c;
    short f70;
    char f72;
    signed char f73;
};
struct Conn27390 {
    int f0;
    struct Sock27390 *f4;
    char pad[0x18];
    unsigned short f20;
    unsigned short f22;
    unsigned short f24;
    unsigned short f26;
    int f28;
};
extern void FUN_02023fc8(unsigned short, unsigned short, int);
extern int FUN_020274c0(int);
extern int FUN_02027564(int, int, struct Conn27390 *);
extern int FUN_02024890(int, int);
extern void FUN_02024230(void);
extern void FUN_02066a2c(void *);

static inline int is_mode_0_4(struct Sock27390 *s) {
    return s->f73 == 0 || s->f73 == 4;
}

int FUN_02027390(struct Conn27390 *conn) {
    int f4c;
    struct Sock27390 *s = conn->f4;
    char *p68 = s->f68;
    int total = 0;
    int hdr;
    int max_len;

    if (!is_mode_0_4(s) || (s->f70 & 4) != 0) {
        if (conn->f28 != 0) {
            FUN_02023fc8(conn->f24, conn->f26, conn->f28);
        }
        f4c = s->f4c;
        hdr = is_mode_0_4(s) ? 0x36 : 0x2a;
        max_len = (s->f73 != 0 && s->f73 != 4) ? (s->f48 - hdr) : FUN_020274c0(s->f48 - hdr);
        for (;;) {
            int n = FUN_02027564(f4c + hdr, max_len, conn);
            int r;
            if (n <= 0) {
                break;
            }
            r = FUN_02024890(f4c + hdr, n);
            if (r <= 0) {
                if (is_mode_0_4(s)) {
                    s->f70 &= ~0xe;
                    s->f70 |= 0x80;
                    FUN_02024230();
                }
                total = -0x4c;
                break;
            }
            total += r;
        }
    } else {
        total = -0x4c;
    }
    *(unsigned short *)(p68 + 0x102) = conn->f20;
    FUN_02066a2c(p68 + 0x104);
    return total;
}
