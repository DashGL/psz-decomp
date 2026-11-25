// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xae, exact bytes and relocation targets.
// flags: -O4,s
struct Req71D68 {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    int x;
    int y;
};

extern int FUN_020b8118(void *, int *, int *);
extern void FUN_02071be4(void *, short *, int);
extern void FUN_02071d0c(struct Req71D68 *);
extern unsigned short FUN_02071c64(void *, void *, short);
extern void FUN_020c32b4(struct Req71D68 *, int);

void FUN_02071d68(unsigned char *p0, unsigned char *p1) {
    int ox = 0;
    int oy = 0;
    short digits[4];
    struct Req71D68 req;
    int count;
    int i;
    if (FUN_020b8118(p1 + 4, &ox, &oy) != 0) {
        return;
    }
    FUN_02071be4(p0, digits, *(int *)(p1 + 0x10));
    count = 0;
    for (i = 0; i < 4; i++) {
        if (digits[i] != -1) {
            int bx = (*(short *)(p1 + 0x18) + (count << 3)) << 12;
            int by = (*(short *)(p1 + 0x1a)) << 12;
            FUN_02071d0c(&req);
            req.f0 = FUN_02071c64(p0, p1, digits[i]);
            req.x = ((ox - 10) << 12) + bx;
            req.y = (oy << 12) + by;
            req.f4 = 30 - *(int *)(p1 + 0x14);
            if (req.y >= (30 << 14)) {
                req.y = 30 << 14;
            }
            FUN_020c32b4(&req, *(int *)(p0 + 0x280));
            count++;
        }
    }
}
