// FUN_020c5278 @ 0x020c5278 (0x1a, thumb) - ported from FUN_020a6414 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned char u8;
typedef unsigned int u32;

struct PrsCtx {
    u32 ctrl_left;
    u32 ctrl;
    u8 *src;
    u8 *staging_trigger;
    u8 *staging_buf;
};

int FUN_020c5278(struct PrsCtx *ctx) {
    if (ctx->src == ctx->staging_trigger) {
        ctx->src = ctx->staging_buf;
    }
    return *ctx->src++ ^ 0x95;
}
