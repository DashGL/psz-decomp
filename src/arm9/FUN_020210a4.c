// version: 2.0/sp1p5
// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct {
    u64 x;
    u64 mul;
    u64 add;
} MATHRandContext32;

typedef struct {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    u64 seed;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
} Config;

typedef struct {
    u8 f00;
    u8 f01;
    u16 f02;
    u32 f04;
    u16 f08;
    u16 pad0a;
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    MATHRandContext32 rng;
} State;

extern State DAT_02107054;
extern u8 DAT_0210753c[], DAT_021072bc[], DAT_021071fc[], DAT_02108880[], DAT_02108080[];
extern u32 DAT_020f6944;
extern u8 UNK_02000bc4[], FUN_02021098[], FUN_0202109c[], FUN_02023e14[], FUN_02024a78[];
extern void FUN_02000b9c(const void *);
extern u64 FUN_02067e0c(void);
extern void FUN_020684f4(void *);
extern void FUN_020666f8(void *, void *, u32, void *, u32, u32);
extern void FUN_02066a94(void *);

static inline void MATH_InitRand32(MATHRandContext32 *ctx, u64 seed) {
    ctx->x = seed;
    ctx->mul = (1566083941ULL << 32) + 1812433253ULL;
    ctx->add = 2531011ULL;
}

static inline u32 MATH_Rand32(MATHRandContext32 *ctx, u32 max) {
    ctx->x = ctx->mul * ctx->x + ctx->add;
    return (u32)(((ctx->x >> 32) * max) >> 32);
}

void FUN_020210a4(const Config *config) {
    FUN_02000b9c(UNK_02000bc4);
    if (config->seed != 0) {
        MATH_InitRand32(&DAT_02107054.rng, config->seed);
    } else {
        MATH_InitRand32(&DAT_02107054.rng, FUN_02067e0c());
    }
    if (config->f04 != 0 && config->f08 != 0) {
        DAT_02107054.f14 = config->f04;
        DAT_02107054.f40 = config->f08;
    } else {
        DAT_02107054.f14 = (u32)FUN_02021098;
        DAT_02107054.f40 = (u32)FUN_02021098;
    }
    DAT_02107054.f10 = config->f00;
    if (config->f24 != 0) {
        DAT_02107054.f02 = (u16)config->f24;
    } else {
        DAT_02107054.f02 = 1460;
    }
    DAT_02107054.f34 = config->f28;
    DAT_02107054.f24 = config->f2c;
    if (config->f0c != 0) {
        DAT_02107054.f18 = config->f0c;
    } else {
        DAT_02107054.f18 = (u32)FUN_02021098;
    }
    if (config->f10 != 0) {
        DAT_02107054.f48 = config->f10;
    } else {
        DAT_02107054.f48 = (u32)FUN_0202109c;
    }
    DAT_02107054.f58 = config->f1c;
    DAT_02107054.f5c = config->f20;
    DAT_02107054.f30 = 0;
    DAT_02107054.f28 = 0;
    DAT_02107054.f08 = (u16)(MATH_Rand32(&DAT_02107054.rng, 3976) + 1024);
    FUN_020684f4(DAT_0210753c);
    DAT_02107054.f01 = 0;
    FUN_020666f8(DAT_021072bc, FUN_02023e14, 0, DAT_02108880, 0x800, DAT_020f6944);
    FUN_020666f8(DAT_021071fc, FUN_02024a78, 0, DAT_02108080, 0x800, DAT_020f6944);
    FUN_02066a94(DAT_021072bc);
    FUN_02066a94(DAT_021071fc);
}
