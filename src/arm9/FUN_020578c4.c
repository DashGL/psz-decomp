// flags: -O4,p -noThumb
struct MD5Ctx {
    unsigned int state[4];
    unsigned long long count;
    unsigned char buf[64];
};
extern const unsigned char DAT_020f93f0[];
extern void FUN_020577fc(struct MD5Ctx *, const void *, unsigned int);
extern void FUN_020656b8(void *, int, unsigned int);
extern void FUN_0205797c(struct MD5Ctx *);
extern void FUN_02065774(const void *, void *, unsigned int);

void FUN_020578c4(void *digest, struct MD5Ctx *ctx) {
    unsigned long long bits = ctx->count << 3;
    unsigned int idx, pad;
    FUN_020577fc(ctx, DAT_020f93f0, 1);
    idx = ctx->count & 0x3f;
    pad = 0x40 - idx;
    if (pad < 8) {
        FUN_020656b8(ctx->buf + idx, 0, pad);
        FUN_0205797c(ctx);
        idx = 0;
        pad = 0x40;
    }
    if (pad > 8) {
        FUN_020656b8(ctx->buf + idx, 0, pad - 8);
    }
    *(unsigned int *)(ctx->buf + 0x38) = (unsigned int)bits;
    *(unsigned int *)(ctx->buf + 0x3c) = (unsigned int)(bits >> 32);
    FUN_0205797c(ctx);
    FUN_02065774(ctx, digest, 0x10);
    FUN_020656b8(ctx, 0, 0x58);
}
