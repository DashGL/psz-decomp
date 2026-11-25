// flags: -O4,p -noThumb
typedef struct Ctx643D4 {
    unsigned char pad0[0x508];
    unsigned int f508;
    unsigned char f50c;
    unsigned char pad50d[0x524 - 0x50d];
    unsigned short f524;
    unsigned short f526;
    unsigned short f528;
    unsigned short f52a;
    unsigned short f52c;
} Ctx643D4;

typedef struct Global643D4 {
    int pad[2];
    Ctx643D4 *ctx;
} Global643D4;

extern Global643D4 DAT_021180a0;
extern void FUN_0206327c(void);
extern unsigned int FUN_02064388(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

static inline unsigned int finish(unsigned int result) {
    if (result == 2) {
        DAT_021180a0.ctx->f50c = 1;
    }
    return (result == 2) ? 0 : result;
}

unsigned int FUN_020643d4(unsigned int data, unsigned int length, unsigned int destination) {
    Ctx643D4 *ctx = DAT_021180a0.ctx;
    unsigned short len = (unsigned short)length;
    unsigned short dst = (unsigned short)destination;
    if (!ctx->f528 || ctx->f526 == 1) {
        return 1;
    }
    switch (ctx->f524) {
    case 1: {
        unsigned short delay = (!ctx->f52c) ? 1000 : 0;
        return finish(FUN_02064388(ctx->f508, data, len, delay, dst));
    }
    case 2:
        return finish(FUN_02064388((unsigned int)FUN_0206327c, data, len, 0, dst));
    default:
        return 1;
    }
}
