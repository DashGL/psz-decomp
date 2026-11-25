//cpp
// flags: -O4,s
struct Damage {
    short h[5];
    signed char b0, b1, b2, b3, b4;
    unsigned char u0, u1, u2, u3;
    signed char s0, s1, s2, s3, s4;
};
struct Context { unsigned int w[3]; };
enum { E0 = 0, E1 = 1, E_INT = 0x10000 };

struct Self {
    virtual void v00(void); virtual void v01(void); virtual void v02(void); virtual void v03(void);
    virtual void v04(void); virtual void v05(void); virtual void v06(void); virtual void v07(void);
    virtual void v08(void); virtual void v09(void); virtual void v10(void); virtual void v11(void);
    virtual void v12(void); virtual void v13(void); virtual void v14(void); virtual void v15(void);
    virtual void v16(void); virtual void v17(void); virtual void v18(void); virtual void v19(void);
    virtual void v20(Damage *, Context *);
};

extern "C" {
extern void FUN_0203606c(void *), FUN_02036094(void *), FUN_020360a4(void *, int, int, int), FUN_020360b8(void *), FUN_02036100(void *, void *), FUN_020360cc(void *), FUN_020bce3c(void *), FUN_02036148(void *, void *), FUN_02037610(void *, unsigned int, int, int, int);
#pragma thumb off
extern int FUN_02000ec4(int);
#pragma thumb on
extern int FUN_0208555c(unsigned int), FUN_020781b0(unsigned int);
extern signed char *DAT_02108c64;

#define copy_dmg(dst, src) do { \
    (dst)->h[0] = (src)->h[0]; (dst)->h[1] = (src)->h[1]; (dst)->h[2] = (src)->h[2]; (dst)->h[3] = (src)->h[3]; (dst)->h[4] = (src)->h[4]; \
    (dst)->b0 = (src)->b0; (dst)->b1 = (src)->b1; (dst)->b2 = (src)->b2; (dst)->b3 = (src)->b3; (dst)->b4 = (src)->b4; \
    (dst)->u0 = (src)->u0; (dst)->u1 = (src)->u1; (dst)->u2 = (src)->u2; (dst)->u3 = (src)->u3; \
    (dst)->s0 = (src)->s0; (dst)->s1 = (src)->s1; (dst)->s2 = (src)->s2; (dst)->s3 = (src)->s3; (dst)->s4 = (src)->s4; \
} while (0)

void FUN_02035d10(Self *self, Damage *input, Context *source) {
    char *s = (char *)self;
    Damage d;
    Context ctx;
    copy_dmg(&d, input);
    ctx = *source;
    if ((d.h[4] & 0x100) ? E1 : E0) {
        unsigned int request1[3];
        FUN_0203606c(request1);
        ((unsigned char *)request1)[8] = 1;
        request1[1] = *(unsigned int *)(s + 12);
        ((unsigned char *)request1)[9] = ((signed char *)&ctx)[9];
        FUN_020bce3c(request1);
    } else if ((d.h[4] & 4) ? E1 : E0) {
        unsigned int request2[3];
        FUN_0203606c(request2);
        ((unsigned char *)request2)[8] = 0;
        request2[1] = *(unsigned int *)(s + 12);
        ((unsigned char *)request2)[9] = ((signed char *)&ctx)[9];
        FUN_020bce3c(request2);
    } else {
        int first, second, dead;
        if ((d.h[4] & 32) ? E1 : E0) {
            int delta = (int)(*(unsigned int *)(s + 52) - 1);
            if (delta < 0) delta = 0;
            d.h[0] = (short)(-delta);
        }
        self->v20(&d, &ctx);
        first = (d.h[4] & 1) ? E1 : E0;
        second = (d.h[4] & 2) ? E1 : E0;
        if (!((d.h[4] & 16) ? E1 : E0) && (int)(*(unsigned int *)(s + 52) + (int)d.h[0]) <= 0) dead = 1; else dead = 0;
        if (first || second || dead) {
            int amount, kind, sub;
            int localid;
            amount = FUN_02000ec4(d.h[0]);
            localid = DAT_02108c64[21];
            kind = d.s0;
            sub = d.s1;
            unsigned int packed[6];
            FUN_02036094(packed);
            FUN_020360a4(packed, 4, 1, 24);
            packed[1] = ~0u;
            packed[2] &= 0xffffc000;
            packed[2] &= 0xffc03fff;
            packed[2] &= 0xfc3fffff;
            packed[2] &= 0xc3ffffff;
            packed[2] &= 0xbfffffff;
            packed[2] &= 0x7fffffff;
            FUN_020360b8(packed + 3);
            packed[1] = *(unsigned int *)(s + 12);
            FUN_02036100(packed + 3, &ctx);
            packed[2] = (packed[2] & 0xffffc000) | ((unsigned int)amount & 0x3fff);
            packed[2] = (packed[2] & 0xffc03fff) | (((unsigned int)localid & 255) << 14);
            packed[2] = (packed[2] & 0xfc3fffff) | (((unsigned int)kind & 15) << 22);
            packed[2] = (packed[2] & 0xc3ffffff) | (((unsigned int)sub & 15) << 26);
            if (second) packed[2] = (packed[2] & 0x7fffffff) | 0x80000000;
            else if (first) packed[2] |= 0x40000000;
            FUN_020bce3c(packed);
            if (FUN_0208555c(ctx.w[0]))
                FUN_02037610(s, ctx.w[0], *(int *)(s + 52), *(short *)(s + 24), d.b1);
            return;
        } else {
            unsigned int full[11];
            FUN_02036094(full);
            FUN_020360cc(full + 2);
            FUN_020360a4(full, 4, 2, 44);
            full[1] = ~0u;
            FUN_020360cc(full + 2);
            FUN_020360b8(full + 8);
            full[1] = *(unsigned int *)(s + 12);
            copy_dmg((Damage *)(full + 2), &d);
            FUN_02036100(full + 8, &ctx);
            if ((((signed char *)&ctx)[10] == 1 ? E1 : E0) && !FUN_020781b0(ctx.w[0]))
                FUN_020bce3c(full);
            else
                FUN_02036148(s, full);
            if (FUN_0208555c(ctx.w[0])) {
                int amount = FUN_02000ec4(d.h[0]);
                FUN_02037610(s, ctx.w[0], amount, *(short *)(s + 24), d.b1);
            }
        }
    }
}
}
