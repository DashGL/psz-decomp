// flags: -O4,s
extern void FUN_overlay_12__0212449c(void *, unsigned int *, unsigned int *);

struct MD5Ctx {
    unsigned int pad;
    unsigned int count_lo;
    unsigned int count_hi;
    unsigned int state[4];
    unsigned char buf[64];
};

void FUN_overlay_12__02124cf0(struct MD5Ctx *ctx, const unsigned char *data, int len) {
    unsigned int block[16];
    unsigned int *state;
    unsigned int idx;

    idx = (ctx->count_lo >> 3) & 0x3f;
    if (ctx->count_lo + ((unsigned int)len << 3) < ctx->count_lo) {
        ctx->count_hi++;
    }
    ctx->count_lo += (unsigned int)len << 3;
    ctx->count_hi += len >> 29;
    state = ctx->state;
    while (len-- != 0) {
        ctx->buf[idx++] = *data++;
        if (idx == 64) {
            unsigned int i, j;
            for (i = 0, j = 0; i < 16; i++, j += 4) {
                block[i] = (unsigned int)ctx->buf[j] |
                           (((unsigned int)ctx->buf[j + 1] << 8) |
                            (((unsigned int)ctx->buf[j + 3] << 24) |
                             ((unsigned int)ctx->buf[j + 2] << 16)));
            }
            FUN_overlay_12__0212449c(ctx, state, block);
            idx = 0;
        }
    }
}
