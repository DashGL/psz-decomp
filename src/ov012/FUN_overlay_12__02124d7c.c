// flags: -O4,s
typedef struct {
    unsigned int unk0;
    unsigned int count[2];
    unsigned int state[4];
    unsigned char buf[64];
} MD5Ctx;
extern unsigned char DAT_0213dc24[];
extern void FUN_overlay_12__02124cf0(MD5Ctx *, const unsigned char *, unsigned int);
extern void FUN_overlay_12__0212449c(MD5Ctx *, unsigned int *, unsigned int *);

void FUN_overlay_12__02124d7c(MD5Ctx *ctx, unsigned char *digest) {
    unsigned int block[16];
    unsigned int idx;
    unsigned int pad_len;
    unsigned int i, j;
    block[14] = ctx->count[0];
    block[15] = ctx->count[1];
    idx = (ctx->count[0] >> 3) & 0x3f;
    pad_len = ((int)idx < 56) ? (56 - idx) : (120 - idx);
    FUN_overlay_12__02124cf0(ctx, DAT_0213dc24, pad_len);
    for (i = 0, j = 0; i < 14; i++, j += 4) {
        block[i] = ((unsigned int)ctx->buf[j]) | (((unsigned int)ctx->buf[j + 3] << 24) | ((unsigned int)ctx->buf[j + 2] << 16) | ((unsigned int)ctx->buf[j + 1] << 8));
    }
    FUN_overlay_12__0212449c(ctx, ctx->state, block);
    for (i = 0, j = 0; i < 4; i++, j += 4) {
        digest[j] = (unsigned char)ctx->state[i];
        digest[j + 1] = (unsigned char)(ctx->state[i] >> 8);
        digest[j + 2] = (unsigned char)(ctx->state[i] >> 16);
        digest[j + 3] = (unsigned char)(ctx->state[i] >> 24);
    }
}
