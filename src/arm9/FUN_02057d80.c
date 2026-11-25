// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x154, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S_57d80 {
    unsigned char pad0[0x14];
    unsigned int count_lo;
    unsigned int count_hi;
    unsigned int buffered;
    unsigned char block[0x40];
};

extern void FUN_02065774(const void *src, void *dst, unsigned int len);
extern void (*DAT_020f95b8)(struct S_57d80 *, const void *, unsigned int);

void FUN_02057d80(struct S_57d80 *ctx, const unsigned char *data, unsigned int len) {
    unsigned char *block = ctx->block;
    unsigned int new_lo;
    unsigned int used;
    if (len == 0) {
        return;
    }
    new_lo = ctx->count_lo + (len << 3);
    if (new_lo < ctx->count_lo) {
        ctx->count_hi++;
    }
    ctx->count_hi += len >> 29;
    ctx->count_lo = new_lo;
    used = ctx->buffered;
    if (used != 0) {
        if (used + len >= 0x40) {
            unsigned int fill = 0x40 - used;
            FUN_02065774(data, block + used, fill);
            len -= fill;
            data += fill;
            DAT_020f95b8(ctx, block, 0x40);
            ctx->buffered = 0;
        } else {
            FUN_02065774(data, block + used, len);
            ctx->buffered += len;
            return;
        }
    }
    if (len >= 0x40) {
        unsigned int full = len & ~0x3fU;
        len -= full;
        if (((unsigned int)data & 3) == 0) {
            DAT_020f95b8(ctx, data, full);
            data += full;
        } else {
            do {
                FUN_02065774(data, block, 0x40);
                data += 0x40;
                DAT_020f95b8(ctx, block, 0x40);
                full -= 0x40;
            } while ((int)full > 0);
        }
    }
    ctx->buffered = len;
    if (len != 0) {
        FUN_02065774(data, block, len);
    }
}
