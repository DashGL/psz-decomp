// flags: -O4,s
// flags: -O4,s
typedef struct {
    short unused, total, fixed, sample;
    const unsigned char *keys;
} Policy;

typedef struct {
    Policy policies[10];
    int thresholds[10];
} PolicyTable;

typedef struct {
    unsigned long long x;
    unsigned long long mul;
    unsigned long long add;
} RandCtx;

extern unsigned DAT_0211a504;
extern void *DAT_0211a508;
extern unsigned char DAT_0211a500, DAT_0211a502, DAT_0211a501;

extern void *FUN_020c149c(unsigned, unsigned);
extern void *FUN_02086e3c(void);
extern void *FUN_020870c4(void *);
extern void *FUN_020ba8a0(unsigned);
extern void FUN_020ba8b4(void *);
extern void FUN_overlay_12__02134764(void *);
extern void FUN_overlay_12__02134428(void *, void *, const void *);

#pragma always_inline on
static inline unsigned math_rand32(RandCtx *ctx, unsigned max) {
    ctx->x = ctx->mul * ctx->x + ctx->add;
    if (max == 0) {
        return (unsigned)(ctx->x >> 32);
    } else {
        return (unsigned)(((ctx->x >> 32) * max) >> 32);
    }
}

int FUN_overlay_12__02134274(unsigned *self) {
    int success;
    int level;
    int index;
    const PolicyTable *tbl;
    const Policy *policy;
    int total;
    int *permutation;
    int sample;
    int fixed;
    char *output;

    if (!self[5] || !self[6]) return 0;
    self[7] = (unsigned)FUN_020c149c(DAT_0211a504, 0);
    if (!self[7]) return 0;

    DAT_0211a508 = (void *)self[7];
    DAT_0211a500 = 1;
    DAT_0211a502 = 8;
    DAT_0211a501 = 0;

    success = 0;
    level = ((unsigned char *)FUN_020870c4(FUN_02086e3c()))[86];
    if ((unsigned)level > 100) level = 100;
    tbl = (const PolicyTable *)self[6];
    for (index = 0; index < 10; index++) {
        if (level <= tbl->thresholds[index]) goto found;
    }
    index = 0;
found:
    policy = &tbl->policies[index];
    total = policy->total;
    permutation = 0;
    sample = policy->sample;
    if (sample > 0) {
        permutation = (int *)FUN_020ba8a0((unsigned)total * 4);
        if (permutation) {
            int i;
            for (i = 0; i < total; i++) permutation[i] = i;
            for (i = 0; i < sample; i++) {
                int other = i + math_rand32((RandCtx *)self[7], (unsigned)(total - i));
                int *pa = &permutation[i];
                int *pb = &permutation[other];
                int temp = *pa;
                *pa = *pb;
                *pb = temp;
            }
        } else {
            sample = 0;
        }
    }

    fixed = policy->fixed;
    output = (char *)FUN_020ba8a0((unsigned)(fixed + sample) * 20);
    if (output) {
        char *cursor = output;
        int count = 0;
        int i;
        for (i = 0; i < fixed; i++) {
            FUN_overlay_12__02134764(cursor);
            FUN_overlay_12__02134428(self, cursor, policy->keys + 4 * i);
            cursor += 20;
            count++;
        }
        for (i = 0; i < sample; i++) {
            FUN_overlay_12__02134764(cursor);
            FUN_overlay_12__02134428(self, cursor, policy->keys + 4 * (fixed + permutation[i]));
            cursor += 20;
            count++;
        }
        self[2] = count;
        self[3] = (unsigned)output;
        success = 1;
    }

    if (permutation) FUN_020ba8b4(permutation);
    DAT_0211a508 = 0;
    DAT_0211a500 = 0;
    return success;
}
