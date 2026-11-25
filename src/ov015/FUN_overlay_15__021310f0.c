// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__021310f0 @ 0x021310f0 (size 0x84, ov015)

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
extern const unsigned char data_0213a654[];
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_overlay_15__0213638c(int, int, void *);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void *FUN_overlay_15__021373d8(int, void (*)(void), int, int);
extern void FUN_overlay_15__021311dc(void);

void FUN_overlay_15__021310f0(int a, int b, int x, int y, int dy)
{
    data_0213e8bc = FUN_overlay_15__021366c4(32, 4);
    data_0213e8bc->b1b = (unsigned char)a;
    data_0213e8bc->b19 = (unsigned char)b;
    data_0213e8bc->b1a = (unsigned char)dy;
    FUN_overlay_15__0213638c(x, y, &data_0213e8bc->u10);
    data_0213e8bc->spr = FUN_overlay_15__02135b14(0, data_0213a654[a], 1);
    FUN_overlay_15__0213596c(data_0213e8bc->spr, -1, x, y + dy);
    FUN_overlay_15__02135a10(data_0213e8bc->spr, -1, 1);
    data_0213e8bc->task = FUN_overlay_15__021373d8(0, FUN_overlay_15__021311dc, 0, 0x80);
}
