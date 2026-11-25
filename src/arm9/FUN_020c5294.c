// FUN_020c5294 @ 0x020c5294 (0x22, thumb) - ported from FUN_020a6430 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned char u8;
typedef unsigned int u32;

struct PrsCtx {
    int ctrl_left;
    u32 ctrl;
    u8 *src;
    u8 *staging_trigger;
    u8 *staging_buf;
};

extern u8 FUN_020c5278(struct PrsCtx *);

int FUN_020c5294(struct PrsCtx *ctx) {
    int bit;
    if (--ctx->ctrl_left == 0) {
        ctx->ctrl = FUN_020c5278(ctx);
        ctx->ctrl_left = 8;
    }
    bit = ctx->ctrl & 1;
    ctx->ctrl >>= 1;
    return bit;
}
