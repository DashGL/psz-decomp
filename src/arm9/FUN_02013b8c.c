// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
extern unsigned char UNK_02104754[], UNK_021048e4[], UNK_021048f4[], UNK_021048f8[], UNK_020f66d4[], UNK_020f66dc[];
extern void *FUN_020149e4(void *);
extern u32 FUN_0201342c(void *, u16);
typedef void (*Render)(void *, void *, int, int, void *);
#define CONTEXT (*(unsigned char **)(UNK_02104754 + 8))
#define WORD(p, o) (*(u32 *)((unsigned char *)(p) + (o)))
#define HALF(p, o) (*(u16 *)((unsigned char *)(p) + (o)))
void FUN_02013b8c(unsigned char *record, int a, int b) {
    void *map, *descriptor;
    unsigned char *ctx, *object;
    u32 value, index, old;
    map = FUN_020149e4(CONTEXT);
    if (map) {
        value = FUN_0201342c(map, (u16)((HALF(record, 0x3c) & 0xf000) >> 12));
        WORD(record, 0x3c) = (WORD(record, 0x3c) & ~0xf000) | ((value & 15) << 12);
    }
    if (*(volatile u32 *)(CONTEXT + 0x84)) {
        if (WORD(CONTEXT, 0x84) & 1) WORD(record, 0x3c) = (WORD(record, 0x3c) & ~0xc00) | ((HALF(CONTEXT, 0x88) & 3) << 10);
        if (WORD(CONTEXT, 0x84) & 2) WORD(record, 0x3c) = (WORD(record, 0x3c) & ~0xf000) | ((HALF(CONTEXT, 0x8a) & 15) << 12);
        if (WORD(CONTEXT, 0x84) & 16) {
            old = WORD(record, 0x3c);
            value = ((old << 16) >> 28) + HALF(CONTEXT, 0x94);
            WORD(record, 0x3c) = (old & ~0xf000) | ((value & 15) << 12);
        }
        if (WORD(CONTEXT, 0x84) & 4) {
            if (WORD(CONTEXT, 0x90)) WORD(record, 0x38) |= 0x1000;
            else WORD(record, 0x38) &= ~0x1000;
        }
        if (WORD(CONTEXT, 0x84) & 8) {
            int old_nib = (HALF(record, 0x3c) & 0xf000) >> 12;
            WORD(record, 0x38) = (WORD(CONTEXT, 0x8c) << 10) | (WORD(record, 0x38) & ~0xc00);
            HALF(record, 0x3c) = (HALF(record, 0x3c) & ~0xf000) | (old_nib << 12);
        }
    }
    ctx = CONTEXT;
    object = *(unsigned char **)(ctx + 0x74);
    if (!*(Render *)(object + 0x40)) return;
    if (!WORD(UNK_02104754, 4)) {
        descriptor = UNK_021048e4 + WORD(UNK_02104754, 12) * 24;
    } else {
        index = WORD(UNK_02104754, 12);
        *(volatile u32 *)(UNK_020f66d4 + 0x18) = WORD(UNK_021048f4, index * 24);
        WORD(UNK_020f66d4, 0x1c) = *(volatile u32 *)(UNK_021048f8 + index * 24);
        descriptor = UNK_020f66dc;
    }
    (*(Render *)(object + 0x40))(ctx, object, a, b, descriptor);
}
