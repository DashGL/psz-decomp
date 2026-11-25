// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 pad00[0x1340];
    u8 f1340[15][0x16];
    u16 f148a[15];
    u32 f14a8[15];
    u32 pad14e4;
    u32 f14e8[15];
    u16 pad1524;
    s8 f1526[15];
    u8 f1535;
    u16 f1536;
    u8 pad1538[0x21c];
    u16 f1754[15];
    u8 pad1772[0x5da];
    u16 f1d4c;
    u16 f1d4e;
    u16 f1d50;
} Work;

extern struct {
    u32 f00, f04, f08;
    Work *f0c;
} DAT_021180a0;

extern void FUN_020629b4(void);
extern void FUN_0205431c(void *, u32);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02064a84(u32);
void FUN_020641ec(u32 aid) {
    s8 grp;
    FUN_0205431c((void *)FUN_020629b4, aid);
    if (aid == 0 || aid >= 16) return;
        DAT_021180a0.f0c->f148a[aid - 1] = 0;
    FUN_020656b8(&DAT_021180a0.f0c->f14a8[aid - 1], 0, 4);
    FUN_020656b8(DAT_021180a0.f0c->f1340[aid - 1], 0, 0x16);
    FUN_02064a84(aid);
    DAT_021180a0.f0c->f1754[aid - 1] = 0;
    grp = DAT_021180a0.f0c->f1526[aid - 1];
    if (grp != -1) {
        u32 off = (u8)grp * 0x5d4;
        ((Work *)((u8 *)DAT_021180a0.f0c + off))->f1d4e &= ~(1 << aid);
        ((Work *)((u8 *)DAT_021180a0.f0c + off))->f1d50 |= (1 << aid);
        DAT_021180a0.f0c->f1526[(int)aid - 1] = -1;
        ((Work *)((u8 *)DAT_021180a0.f0c + off))->f1d4c &= ~(1 << aid);
    }
    if (DAT_021180a0.f0c->f1536 & (1 << aid)) {
        DAT_021180a0.f0c->f1535--;
        DAT_021180a0.f0c->f1536 &= ~(1 << aid);
    }
    DAT_021180a0.f0c->f14e8[aid - 1] = 0;
}
