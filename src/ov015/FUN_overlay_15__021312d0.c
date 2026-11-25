// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__021312d0 @ 0x021312d0 (size 0x80, ov015)

struct ScrollBar {
    void *spr;
    void *pad4;
    void *pad8;
    void *task;
    unsigned short u10;
    unsigned short u12;
    unsigned short u14;
    unsigned short u16;
    unsigned char b18;
    unsigned char b19;
    unsigned char b1a;
    unsigned char b1b;
    unsigned char b1c;
    unsigned char b1d;
};
extern struct ScrollBar *data_0213e8bc;
extern const unsigned char data_0213a81c[];
extern const unsigned char data_0213a658[];
extern int FUN_overlay_15__02136a08(const void *);
extern void FUN_overlay_15__02136bc8(unsigned short *);
extern void FUN_overlay_15__02131350(int);
extern void FUN_overlay_15__02131518(int);
extern void FUN_overlay_15__021321d4(void);

void FUN_overlay_15__021312d0(void)
{
    unsigned short pos[2];

    if (FUN_overlay_15__02136a08(data_0213a81c)) {
        FUN_overlay_15__02136bc8(pos);
        if (pos[0] >= data_0213e8bc->u10 - 30) {
            int val = data_0213e8bc->b18 + (pos[1] - data_0213e8bc->u16);
            if (val < 0) {
                val = 0;
            } else {
                int max = data_0213e8bc->b19 - data_0213a658[data_0213e8bc->b1b];
                if (val >= max) {
                    val = max;
                }
            }
            FUN_overlay_15__02131350(val);
            FUN_overlay_15__02131518(val);
            data_0213e8bc->b1d = 2;
            return;
        }
    }
    FUN_overlay_15__021321d4();
    data_0213e8bc->b1c = 0;
    data_0213e8bc->b1d = 3;
}
