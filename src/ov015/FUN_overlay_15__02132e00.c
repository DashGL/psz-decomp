// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u32 f00;
    u8 b[6];
} LocalCfg;

typedef struct {
    u16 w0;
    u16 w2;
} Pair16;

extern const LocalCfg DAT_0213a73c;
extern void *DAT_0213e818;
extern u8 *DAT_0213e8d8;
extern const u8 DAT_0213a7f0[];
extern const u8 DAT_0213a7f8[];
extern const u8 DAT_0213a762[];
extern const Pair16 DAT_0213a780[];
extern const u8 DAT_0213a746[];

extern int FUN_overlay_15__02127f40(void *, int, int, int);
extern void *FUN_overlay_15__021366c4(u32, int);
extern void FUN_0205e4c8(void *, int, int);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void *FUN_overlay_15__02135ee8(int, int, int, int, void *, int);
extern void *FUN_overlay_15__02135718(int, u32, int);
extern int FUN_overlay_15__02125430(void);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, int);
extern void FUN_overlay_15__02136304(void *, int, int, void *, int);
extern void FUN_overlay_15__0213653c(int, int, int, int);
extern void FUN_overlay_15__02136460(int, int, const void *);
extern void FUN_overlay_15__0213322c(int);
extern void *FUN_overlay_15__021373d8(int, void (*)(void), int, int);
extern void FUN_overlay_15__02133054(void);
extern void FUN_overlay_15__02133094(void);

void FUN_overlay_15__02132e00(int a0, int mode, int a2, int a3, int a4) {
    LocalCfg cfg;
    int r_val;
    int i;
    cfg.b[0] = DAT_0213a73c.b[0];
    cfg.b[1] = DAT_0213a73c.b[1];
    cfg.b[2] = DAT_0213a73c.b[2];
    cfg.b[3] = DAT_0213a73c.b[3];
    cfg.b[4] = DAT_0213a73c.b[4];
    cfg.b[5] = DAT_0213a73c.b[5];

    r_val = FUN_overlay_15__02127f40(DAT_0213e818, a0, a3, a4);
    DAT_0213e8d8 = (u8 *)FUN_overlay_15__021366c4(0x20, 4);
    DAT_0213e8d8[0x1c] = (u8)mode;
    ((signed char *)DAT_0213e8d8)[0x1b] = -2;
    DAT_0213e8d8[0x1e] = (u8)a2;

    FUN_0205e4c8((void *)0x04000050, 0x1f, 0);
    *(void **)(DAT_0213e8d8 + 0) = FUN_overlay_15__02135b14(0, DAT_0213a7f0[mode], 0);
    FUN_overlay_15__0213596c(*(void **)(DAT_0213e8d8 + 0), -1, 0x100, 0);
    FUN_overlay_15__02135a10(*(void **)(DAT_0213e8d8 + 0), -1, 0);

    for (i = 0; i < DAT_0213a7f8[mode]; i++) {
        *(void **)(DAT_0213e8d8 + 8 + i * 4) = FUN_overlay_15__02135b14(0, DAT_0213a762[mode * 2 + i], 0);
        FUN_overlay_15__0213596c(*(void **)(DAT_0213e8d8 + 8 + i * 4), -1, 0x100, 0);
        FUN_overlay_15__02135a10(*(void **)(DAT_0213e8d8 + 8 + i * 4), -1, 0);
    }

    *(void **)(DAT_0213e8d8 + 0x10) = FUN_overlay_15__02135ee8(0, 0x20, 0xc, 1, &cfg, 0);
    *(void **)(DAT_0213e8d8 + 4) = FUN_overlay_15__02135718(0, cfg.f00, 0);
    FUN_overlay_15__0213627c(
        *(void **)(DAT_0213e8d8 + 0x10),
        0,
        0,
        DAT_0213a780[mode].w0,
        DAT_0213a780[mode].w2,
        2,
        FUN_overlay_15__02125430(),
        r_val);
    FUN_overlay_15__02136304(*(void **)(DAT_0213e8d8 + 0x10), 0x100, 0, *(void **)(DAT_0213e8d8 + 4), 0);
    FUN_overlay_15__0213653c(0, 0, 0x1f, 0);
    FUN_overlay_15__0213653c(0, 1, 0x1f, cfg.b[DAT_0213e8d8[0x1c]]);
    FUN_overlay_15__0213653c(0, 3, 0x1f, 1);
    FUN_overlay_15__02136460(0, 1, DAT_0213a746);
    FUN_overlay_15__0213322c(0xc0);
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & 0xffff1fffu) | 0x6000u;
    if (a2 != 0) {
        *(void **)(DAT_0213e8d8 + 0x14) = FUN_overlay_15__021373d8(1, FUN_overlay_15__02133054, 0, 0x78);
    } else {
        *(void **)(DAT_0213e8d8 + 0x14) = FUN_overlay_15__021373d8(1, FUN_overlay_15__02133094, 0, 0x78);
    }
}
