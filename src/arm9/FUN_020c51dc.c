// FUN_020c51dc @ 0x020c51dc (0x9a, thumb) - ported from FUN_020a6378 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c51dc @ 0x020a6378 (0x9a true + 0x2 pad, Thumb) — PRS LZ77 decompressor.
 * Exact match to DashGL/ArchiveUnpacker src/prs.ts:
 *   - Initializes ctx->ctrl_left = 1, ctx->ctrl = 0, ctx->src = src.
 *   - Copies literal bytes via FUN_020c5278(ctx) while control bit FUN_020c5294(ctx) is 1.
 *   - Next control bit 1: long-distance back-reference (b1, b2; b1==0 && b2==0 -> end;
 *     off = (b2 << 5) + (b1 >> 3) - 0x2000; len = (b1 & 7) ? (b1 & 7) + 2 : FUN_020c5278(ctx) + 10).
 *   - Next control bit 0: short-distance back-reference (2 bits -> len 2..5;
 *     off = FUN_020c5278(ctx) - 0x100).
 *   - Copies len bytes from out[off] to *out++, returns decompressed size (out - dst).
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct PrsCtx {
    int ctrl_left;
    u32 ctrl;
    u8 *src;
    u8 *staging_trigger;
    u8 *staging_buf;
};

extern u32 FUN_020c5278(struct PrsCtx *);
extern int FUN_020c5294(struct PrsCtx *);

u32 FUN_020c51dc(struct PrsCtx *ctx, u8 *dst, u8 *src) {
    u8 *out;
    int off, len;
    ctx->ctrl_left = 1;
    ctx->ctrl = 0;
    ctx->src = src;
    out = dst;
    for (;;) {
        while (FUN_020c5294(ctx)) {
            *out++ = FUN_020c5278(ctx);
        }
        if (FUN_020c5294(ctx)) {
            u32 b1 = FUN_020c5278(ctx);
            u32 b2 = FUN_020c5278(ctx);
            if ((b2 | b1) == 0) {
                break;
            }
            off = (b2 << 5) + (b1 >> 3) - 0x2000;
            if (b1 & 7) {
                len = (b1 & 7) + 2;
            } else {
                len = FUN_020c5278(ctx) + 10;
            }
        } else {
            int b1 = FUN_020c5294(ctx);
            int b2 = FUN_020c5294(ctx);
            len = (b1 << 1) + 2 + b2;
            off = FUN_020c5278(ctx) - 0x100;
        }
        do {
            *out = out[off];
            out++;
        } while (--len != 0);
    }
    return out - dst;
}
