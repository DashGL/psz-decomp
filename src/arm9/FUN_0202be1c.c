// flags: -O4,p -noThumb

struct MD5Ctx2BE1C {
    unsigned int state[4];
    unsigned int count[2];
    unsigned char buf[64];
};

extern void FUN_02065774(const void *, void *, unsigned int);
extern void FUN_0202b9b8(struct MD5Ctx2BE1C *, const void *);

void FUN_0202be1c(struct MD5Ctx2BE1C *ctx, const unsigned char *data, unsigned int len) {
    unsigned int i, idx, part_len;

    idx = (ctx->count[0] >> 3) & 0x3f;
    if ((ctx->count[0] += (len << 3)) < (len << 3)) {
        ctx->count[1]++;
    }
    ctx->count[1] += (len >> 29);
    part_len = 0x40 - idx;

    if (len >= part_len) {
        FUN_02065774(data, &ctx->buf[idx], part_len);
        idx = 0;
        FUN_0202b9b8(ctx, ctx->buf);
        for (i = part_len; i + 0x3f < len; i += 0x40) {
            FUN_0202b9b8(ctx, &data[i]);
        }
    } else {
        i = 0;
    }
    FUN_02065774(&data[i], &ctx->buf[idx], len - i);
}
