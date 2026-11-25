// flags: -O4,s
typedef struct {
    void *vtbl;
    unsigned char pad4[8];
    void *f12;
    unsigned char pad16[16];
    int f32;
    int f36;
    unsigned short f40;
    unsigned short f42;
    int f44;
    unsigned char f48;
    unsigned char f49;
    unsigned char f50[2];
    int f52, f56, f60, f64, f68, f72, f76, f80, f84;
    unsigned short f88, f90, f92, f94;
    int f96, f100, f104, f108, f112;
    unsigned short f116, f118, f120, f122;
    int arr7c[3];
    int f136, f140, f144, f148;
    unsigned char pad152[240 - 152];
    int f240;
    int arrf4[8];
    int f276, f280;
} Eff;
extern void *UNK_02108d08, *UNK_020fc620;
extern char UNK_020fc654[];
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern void FUN_020b9cb0(void *, void *), FUN_020b0cc8(void *, int), FUN_0203efe0(void *, int, int), FUN_020c189c(int, int), FUN_020c1a78(int, int);
extern void *FUN_0208555c(int);
extern int FUN_0203b820(void *);
Eff *FUN_020b100c(Eff *s, int owner, int slot, int mode, short value) {
    void *manager, *actor;
    int i;
    FUN_020b9cb0(s, UNK_02108d08);
    s->vtbl = UNK_020fc654;
    s->f32 = 0; s->f36 = 0; s->f40 = 65535; s->f42 = 65535;
    s->f48 = 255; s->f49 = 0;
    FUN_0200c938(s->f50, 2);
    s->f88 = 0; s->f90 = 0; s->f92 = mode; s->f94 = value;
    s->f96 = 2048; s->f100 = 4096; s->f104 = 4096;
    s->f116 = 0; s->f118 = 15; s->f120 = 0; s->f122 = 0;
    FUN_0200c938(s->arr7c, 12);
    s->f144 = 0; s->f148 = 0; s->f240 = -1;
    FUN_0200c938(s->arrf4, 32);
    s->f276 = 0; s->f280 = 0;
    s->f12 = UNK_020fc620;
    manager = UNK_02108d08;
    s->f44 = owner; s->f32 = 0;
    s->f52 = 0; s->f64 = 0; s->f76 = 0;
    s->f56 = 0; s->f68 = 0; s->f80 = 0;
    s->f60 = 0; s->f72 = 0; s->f84 = 0;
    for (i = 0; i < 3; i++) s->arr7c[i] = 0;
    for (i = 0; i < 8; i++) s->arrf4[i] = -1;
    if (slot >= 0 && slot < 4) s->f48 = slot;
    FUN_020b0cc8(s, mode);
    if (manager) {
        FUN_0203efe0(manager, (unsigned char)s->f48, mode);
        s->f112 = 1;
    } else s->f112 = 0;
    FUN_020c189c(0, s->f44);
    switch (mode) {
    case 1: FUN_020c1a78(58, s->f44); break;
    case 2: FUN_020c1a78(59, s->f44); s->f122 = 128; break;
    case 3: FUN_020c1a78(60, s->f44); s->f122 = 140; break;
    case 4:
        actor = FUN_0208555c(s->f44);
        if (actor && FUN_0203b820(actor) != 4) { FUN_020c1a78(61, s->f44); s->f122 = 186; }
        else { FUN_020c1a78(62, s->f44); s->f122 = 181; }
        s->f118 = 0;
        break;
    }
    return s;
}
