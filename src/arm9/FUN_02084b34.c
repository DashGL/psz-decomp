// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,s
struct Date {
    unsigned int y;
    unsigned int m;
    unsigned int d;
    unsigned int w;
};
struct Time {
    unsigned int h;
    unsigned int min;
    unsigned int s;
};
extern int D_0211a500[2];
extern int FUN_02068c9c(struct Date *, struct Time *);

void FUN_02084b34(void) {
    struct Date d;
    struct Time t;
    if (D_0211a500[1] == 0) {
        if (FUN_02068c9c(&d, &t) != 0) {
            D_0211a500[1] = 0;
        } else {
            D_0211a500[1] = (((d.y << 20) | (d.m << 16) | (d.d << 11)) | (t.h << 6) | t.min) / 10;
        }
    }
}
