// flags: -noThumb
// near: nd=116 bad=1 len=0x168/tsz=0x164 — logic understood, register coloring / scheduling residual
extern int FUN_02064840(void);
extern unsigned int FUN_02066c60(void *);
extern int FUN_020683d4(void);
extern void FUN_02066a94(void *);
extern void FUN_020683e8(int);

struct Node_64888 {
    struct Node_64888 *next;
    unsigned int active : 1;
    unsigned int prio : 31;
    int f8;
    int fc;
};

struct Ctx_64888 {
    char pad[0xc0];
    struct Node_64888 * volatile fc0;
    struct Node_64888 fc4;
};

extern struct Ctx_64888 *DAT_021180e0;

void FUN_02064888(struct Node_64888 *p0, int p1, int p2, unsigned int p3) {
    struct Ctx_64888 *ctx = DAT_021180e0;
    int intr;
    if (!FUN_02064840()) {
        return;
    }
    if (p0->active) {
        return;
    }
    if (p3 > 0x1f) {
        unsigned int cur = FUN_02066c60(ctx);
        if (p3 == 0x20) {
            p3 = cur ? (cur - 1) : 0;
        } else if (p3 == 0x21) {
            p3 = (cur < 0x1f) ? (cur + 1) : 0x1f;
        } else if (p3 == 0x22) {
            p3 = cur;
        } else {
            p3 = 0x1f;
        }
    }
    intr = FUN_020683d4();
    p0->active = 1;
    p0->prio = p3;
    p0->f8 = p1;
    p0->fc = p2;
    if (ctx->fc0 == 0) {
        if (p0 == &ctx->fc4) {
            DAT_021180e0 = 0;
        }
        ctx->fc0 = p0;
        FUN_02066a94(ctx);
    } else {
        struct Node_64888 *cur = ctx->fc0;
        if (p0 == &ctx->fc4) {
            struct Node_64888 *n = cur->next;
            while (n != 0) {
                cur = n;
                n = cur->next;
            }
            cur->next = p0;
            DAT_021180e0 = 0;
        } else if (p3 < cur->prio) {
            ctx->fc0 = p0;
            p0->next = cur;
        } else {
            struct Node_64888 *n;
            while ((n = cur->next) != 0 && p3 >= n->prio) {
                cur = n;
            }
            p0->next = n;
            cur->next = p0;
        }
    }
    FUN_020683e8(intr);
}
