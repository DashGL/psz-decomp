// flags: -O4,p -noThumb
struct SHA1Ctx2C6E8 {
    unsigned int state[5];
    unsigned int count_hi;
    unsigned int count_lo;
    unsigned char buf[64];
};

extern void FUN_02065774(const void *, void *, unsigned int);
extern void FUN_0202c00c(struct SHA1Ctx2C6E8 *, const void *);

void FUN_0202c6e8(struct SHA1Ctx2C6E8 *ctx, const unsigned char *data, unsigned int len) {
    unsigned int i, idx, part_len;

    idx = (ctx->count_lo >> 3) & 0x3f;
    if ((ctx->count_lo += len << 3) < (len << 3)) {
        ctx->count_hi++;
    }
    ctx->count_hi += len >> 29;
    part_len = 0x40 - idx;
    if (len >= part_len) {
        FUN_02065774(data, ctx->buf + idx, part_len);
        idx = 0;
        FUN_0202c00c(ctx, ctx->buf);
        for (i = part_len; i + 0x3f < len; i += 0x40) {
            FUN_0202c00c(ctx, data + i);
        }
    } else {
        i = 0;
    }
    FUN_02065774(data + i, ctx->buf + idx, len - i);
}
