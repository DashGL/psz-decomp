// flags: -O4,s
typedef struct { void **items; int count; } Sequence;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
extern char DAT_0219f99c[];
extern int DAT_0219f984[];
extern void FUN_02037760(void *), FUN_overlay_20__021990e0(void *);
extern void *FUN_020ba894(int), *FUN_020ba8a0(int);
extern void *FUN_overlay_20__02199594(void *);
extern void *FUN_overlay_20__021995b8(void *);
extern void *FUN_overlay_20__021995cc(void *);
extern void *FUN_overlay_20__021995e0(void *);
extern void *FUN_overlay_20__021995f4(void *);
extern void *FUN_overlay_20__02199608(void *);
extern void *FUN_overlay_20__0219961c(void *);
extern void *FUN_overlay_20__02199630(void *);
extern void *FUN_overlay_20__02199644(void *);
extern void *FUN_overlay_20__02199658(void *);
extern void *FUN_overlay_20__0219966c(void *);
extern void *FUN_overlay_20__02199680(void *);
extern void *FUN_overlay_20__02199694(void *);
extern void *FUN_overlay_20__021996a8(void *);
extern void *FUN_overlay_20__021996bc(void *);
extern void *FUN_overlay_20__021996d0(void *);
extern void *FUN_overlay_20__021996e4(void *);
extern void *FUN_overlay_20__021996f8(void *);
extern void *FUN_overlay_20__0219970c(void *);
extern void *FUN_overlay_20__02199720(void *);

void *FUN_overlay_20__021990f8(void *self) {
    void *child;
    int i, j;

    FUN_02037760(self);
    P(self, 0) = DAT_0219f99c;
    I(self, 0x90) = 0;
    I(self, 0x94) = 0;
    I(self, 0x98) = 0;
    I(self, 0x9c) = 0;
    I(self, 0xa0) = 0;
    I(self, 0xa8) = 0;
    I(self, 0xac) = 0;
    I(self, 0xb0) = DAT_0219f984[0];
    I(self, 0xb4) = DAT_0219f984[1];
    I(self, 0xb8) = 0;
    I(self, 0xbc) = DAT_0219f984[2];
    I(self, 0xc0) = -1;
    I(self, 0xc4) = 0;
    I(self, 0xc8) = 1;
    I(self, 0xcc) = 0;
    I(self, 0xd0) = 0;
    I(self, 0xd4) = 0;
    I(self, 0xd8) = 0;
    I(self, 0xdc) = 0;
    I(self, 0xe0) = 0;
    I(self, 0xe4) = 0;
    I(self, 0xe8) = 0;
    I(self, 0xec) = 0;
    I(self, 0xf0) = 0;
    I(self, 0xf4) = 0;
    I(self, 0xf8) = 0;
    I(self, 0xfc) = 0;
    I(self, 0x100) = 0;
    I(self, 0x104) = 0;
    I(self, 0x108) = 0;
    I(self, 0x10c) = 0;
    I(self, 0x110) = 0;
    I(self, 0x114) = 0;
    I(self, 0x118) = 0;
    I(self, 0x11c) = 0;
    I(self, 0x120) = 0;
    FUN_overlay_20__021990e0((char *)self + 0x30);
    FUN_overlay_20__021990e0((char *)self + 0x60);
    B(self, 0x60) |= 1;
    B(self, 0x61) = 0;
    B(self, 0x60) |= 2;
    B(self, 0x60) |= 4;
    child = FUN_020ba894(12); if (child) child = FUN_overlay_20__02199594(child); P(self, 0xcc) = child;
    child = FUN_020ba894(12); if (child) child = FUN_overlay_20__021995b8(child); P(self, 0xd0) = child;
    child = FUN_020ba894(12); if (child) child = FUN_overlay_20__021995cc(child); P(self, 0xd4) = child;
    child = FUN_020ba894(40); if (child) child = FUN_overlay_20__021995e0(child); P(self, 0xd8) = child;
    child = FUN_020ba894(44); if (child) child = FUN_overlay_20__021995f4(child); P(self, 0xdc) = child;
    child = FUN_020ba894(20); if (child) child = FUN_overlay_20__02199608(child); P(self, 0xe0) = child;
    child = FUN_020ba894(36); if (child) child = FUN_overlay_20__0219961c(child); P(self, 0xe4) = child;
    child = FUN_020ba894(64); if (child) child = FUN_overlay_20__02199630(child); P(self, 0xe8) = child;
    child = FUN_020ba894(76); if (child) child = FUN_overlay_20__02199644(child); P(self, 0xec) = child;
    child = FUN_020ba894(40); if (child) child = FUN_overlay_20__02199658(child); P(self, 0xf0) = child;
    child = FUN_020ba894(52); if (child) child = FUN_overlay_20__0219966c(child); P(self, 0xf4) = child;
    child = FUN_020ba894(28); if (child) child = FUN_overlay_20__02199680(child); P(self, 0xf8) = child;
    child = FUN_020ba894(12); if (child) child = FUN_overlay_20__02199694(child); P(self, 0xfc) = child;
    child = FUN_020ba894(36); if (child) child = FUN_overlay_20__021996a8(child); P(self, 0x100) = child;
    child = FUN_020ba894(16); if (child) child = FUN_overlay_20__021996bc(child); P(self, 0x104) = child;
    child = FUN_020ba894(32); if (child) child = FUN_overlay_20__021996d0(child); P(self, 0x108) = child;
    child = FUN_020ba894(28); if (child) child = FUN_overlay_20__021996e4(child); P(self, 0x10c) = child;
    child = FUN_020ba894(12); if (child) child = FUN_overlay_20__021996f8(child); P(self, 0x110) = child;
    child = FUN_020ba894(68); if (child) child = FUN_overlay_20__0219970c(child); P(self, 0x114) = child;
    child = FUN_020ba894(20); if (child) child = FUN_overlay_20__02199720(child); P(self, 0x118) = child;
    {
        void *a0[] = { P(self, 0xcc), P(self, 0xe4), P(self, 0xfc) };
        void *a1[] = { P(self, 0x110) };
        void *a2[] = { P(self, 0xfc), P(self, 0x10c), P(self, 0x100) };
        void *a3[] = { P(self, 0xfc) };
        void *a4[] = { P(self, 0x118) };
        void *a5[] = { P(self, 0x10c), P(self, 0xf4) };
        void *a6[] = { P(self, 0x10c), P(self, 0xf0) };
        void *a7[] = { P(self, 0x10c), P(self, 0xf8) };
        void *a8[] = { P(self, 0x114) };
        void *a9[] = { P(self, 0xdc), P(self, 0xe0), P(self, 0xe8) };
        void *a10[] = { P(self, 0xdc), P(self, 0xe0), P(self, 0xec), P(self, 0xe4) };
        void *a11[] = { P(self, 0xdc), P(self, 0xe0), P(self, 0x108), P(self, 0xe4) };
        void *a12[] = { P(self, 0xd4) };
        void *a13[] = { P(self, 0x10c), P(self, 0xf8), P(self, 0xf0) };
        void *a14[] = { P(self, 0x114), P(self, 0xf0) };
        void *a15[] = { P(self, 0x10c), P(self, 0xf0), P(self, 0xf0) };
        Sequence table[] = {
            { a0, 3 }, { a1, 1 }, { a2, 3 }, { a3, 1 },
            { a4, 1 }, { a5, 2 }, { a6, 2 }, { a7, 2 },
            { a8, 1 }, { a9, 3 }, { a10, 4 }, { a11, 4 },
            { a12, 1 }, { a13, 3 }, { a14, 2 }, { a15, 3 }
        };
        P(self, 0x11c) = FUN_020ba8a0(128);
        I(self, 0x120) = 16;
        for (i = 0; i < 16; i++) {
            Sequence *src = &table[i];
            Sequence *arr = (Sequence *)P(self, 0x11c);
            Sequence *dst = &arr[i];
            int count = (dst->count = src->count);
            arr[i].items = FUN_020ba8a0(count * 4);
            for (j = 0; j < count; j++) {
                dst->items[j] = src->items[j];
            }
        }
    }
    I(self, 0x124) = -1;
    I(self, 0x128) = -1;
    return self;
}
