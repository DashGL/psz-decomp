// flags: -O4,s
typedef unsigned char u8;
typedef struct { u8 b[4]; } Header4;
typedef struct {
    u8 pad0[5];
    u8 f5;
    u8 pad6[2];
    unsigned short f8_low : 6;
    unsigned short f8_kind : 4;
    unsigned short f8_hi : 6;
} Def_ov12;

extern Def_ov12 *FUN_02084568(u8 *);
extern u8 *FUN_02084798(int, int);
extern void *FUN_overlay_12__021362c4(int, int), *FUN_02079114(void);
extern void FUN_02071d0c(void *), FUN_02090b44(void *);
extern void FUN_020c331c(int, int, int, void *);
extern int FUN_0209cbe4(void *, int), FUN_0209cbb8(void *, int, int);
extern void FUN_020c3788(void *, const void *, int, int, int);
extern void FUN_0207920c(void *, int, int, int, unsigned short, int, int);
extern void *FUN_02077f3c(void), *FUN_02078038(void *);

void FUN_overlay_12__02137178(char *self)
{
    unsigned descriptor[4];
    char attribute[23];
    char name[21];
    Header4 header;
    int kind, kind2;
    u8 *technique;
    Def_ov12 *definition;
    void *empty, *digits;
    int refresh;

    header = *(Header4 *)(self + 316);
    definition = FUN_02084568(header.b);
    if (!definition) return;
    empty = FUN_overlay_12__021362c4(2, 3);
    digits = FUN_02079114();
    if (*(int *)(self + 360) != 0 || *(int *)(self + 340) != 0) {
        refresh = 1;
    } else {
        refresh = 0;
    }
    FUN_02071d0c(descriptor);
    FUN_02090b44(descriptor);
    kind = definition->f5 & 31;
    if (kind == 21) kind = 0;
    FUN_020c331c(58, 0xb0000, 0xfb000, *(void **)(self + 72));
    if (kind) {
        if (refresh && FUN_0209cbe4(attribute, kind)) FUN_020c3788(self + 196, attribute, 0, 12, 2);
        FUN_020c331c(33, 0xe0000, 0x107000, *(void **)(self + 72));
        FUN_0207920c(digits, 0xf0000, 0x107000, 2, 1, definition->f5 >> 5, 0);
    } else if (refresh) {
        FUN_020c3788(self + 256, empty, 72, 12, 2);
    }
    kind2 = definition->f8_kind;
    if (kind2 == 4) kind2 = 0;
    technique = FUN_02084798(header.b[1], kind2);
    FUN_020c331c(61, 0xb0000, 0x113000, *(void **)(self + 72));
    if (kind2) {
        if (refresh && FUN_0209cbb8(name, header.b[1], kind2)) FUN_020c3788(self + 196, name, 2, 36, 2);
        FUN_020c331c(71, 0xb0000, 0x12b000, *(void **)(self + 72));
        FUN_0207920c(digits, 0xe0000, 0x137000, 2, 3, technique[2], 0);
        FUN_020c331c(47, 0xb0000, 0x143000, *(void **)(self + 72));
        FUN_0207920c(digits, 0xd8000, 0x14f000, 2, 3, technique[0], 0);
        FUN_020c331c(2, 0xf0000, 0x14f000, FUN_02078038(FUN_02077f3c()));
        FUN_020c331c(50, 0xb0000, 0x15b000, *(void **)(self + 72));
        FUN_0207920c(digits, 0xd8000, 0x167000, 2, 3, technique[1], 0);
        FUN_020c331c(2, 0xf0000, 0x167000, FUN_02078038(FUN_02077f3c()));
    } else if (refresh) {
        FUN_020c3788(self + 256, empty, 72, 36, 2);
    }
}
