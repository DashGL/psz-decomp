// flags: -O4,s
extern int DAT_020f988c[];
extern int DAT_020f98a8[];
extern int DAT_020f997c[];
extern void *DAT_02108cf4;
extern void FUN_020387bc(void *, void *, int, int, int, int, int);
extern void FUN_0206e760(void *);
extern void FUN_0207f4ec(void *, int);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0208652c(void *, int);
extern void FUN_02039534(void *, void *);
extern void FUN_0203955c(void *);
extern void FUN_0203526c(void *, int, void *);

typedef struct {
    unsigned int f000;          // 0x000
    unsigned char pad004[0x1c];
    unsigned int f020;          // 0x020
    unsigned char pad024[0xcc];
    unsigned int f0f0;          // 0x0f0
    unsigned int f0f4;          // 0x0f4
    unsigned int f0f8;          // 0x0f8
    unsigned int f0fc;          // 0x0fc
    unsigned int f100;          // 0x100
    unsigned int f104;          // 0x104
    unsigned int f108;          // 0x108
    unsigned int f10c;          // 0x10c
    unsigned int f110;          // 0x110
    unsigned int f114;          // 0x114
    unsigned int f118;          // 0x118
    unsigned int f11c;          // 0x11c
    unsigned int f120;          // 0x120
    unsigned int f124;          // 0x124
    unsigned int f128;          // 0x128
    unsigned int f12c;          // 0x12c
    unsigned int f130;          // 0x130
    unsigned short f134;        // 0x134
    unsigned short f136;        // 0x136
    unsigned short f138;        // 0x138
    unsigned short f13a;        // 0x13a
    unsigned short f13c;        // 0x13c
    unsigned short f13e;        // 0x13e
    unsigned char f140;         // 0x140
    signed char f141;           // 0x141
    unsigned char f142;         // 0x142
    unsigned char f143;         // 0x143
    int f144;                   // 0x144
    unsigned char f148;         // 0x148
    unsigned char f149;         // 0x149
    unsigned char f14a;         // 0x14a
    unsigned char f14b;         // 0x14b
    unsigned short f14c;        // 0x14c
    unsigned short f14e;        // 0x14e
    unsigned short f150;        // 0x150
    unsigned short f152;        // 0x152
    unsigned short f154;        // 0x154
    unsigned short f156;        // 0x156
    unsigned char f158[0x24];   // 0x158
    unsigned char f17c[4];      // 0x17c
    unsigned char f180[0x10];   // 0x180
    unsigned char f190[0x10];   // 0x190
    unsigned char f1a0[0x10];   // 0x1a0
    unsigned int f1b0;          // 0x1b0
    unsigned int f1b4;          // 0x1b4
    unsigned int f1b8[3];       // 0x1b8
    unsigned int f1c4;          // 0x1c4
    unsigned int f1c8;          // 0x1c8
    unsigned int f1cc;          // 0x1cc
    unsigned int f1d0;          // 0x1d0
    int f1d4[4];                // 0x1d4
    unsigned char f1e4[4];      // 0x1e4
    unsigned char f1e8[4];      // 0x1e8
    unsigned int f1ec;          // 0x1ec
    unsigned int f1f0;          // 0x1f0
    unsigned short f1f4;        // 0x1f4
    unsigned short f1f6;        // 0x1f6
    unsigned int f1f8;          // 0x1f8
    unsigned char f1fc;         // 0x1fc
    unsigned char f1fd;         // 0x1fd
    unsigned char f1fe;         // 0x1fe
    signed char f1ff;           // 0x1ff
    unsigned char f200;         // 0x200
    unsigned char f201;         // 0x201
    unsigned char f202;         // 0x202
    unsigned char f203;         // 0x203
    unsigned char f204;         // 0x204
    unsigned char f205;         // 0x205
    unsigned short f206;        // 0x206
    unsigned int f208;          // 0x208
    unsigned int f20c;          // 0x20c
    unsigned int f210;          // 0x210
    unsigned int f214;          // 0x214
    unsigned int f218[8];       // 0x218
    unsigned int f238;          // 0x238
    int f23c;                   // 0x23c
    unsigned int f240;          // 0x240
    unsigned char f244;         // 0x244
    unsigned char f245;         // 0x245
    unsigned char f246;         // 0x246
    unsigned char f247;         // 0x247
    int f248;                   // 0x248
} Obj;

Obj *FUN_02039230(Obj *s, char *source, int id, char *key, void *last) {
    int i;
    void *iface;
    FUN_020387bc(s, source, id, id, *(unsigned char *)(key + 1), (int)(*(unsigned int *)(key + 4) & 15) - 1, 2);
    FUN_0206e760(&s->f0f0);
    s->f000 = (unsigned int)DAT_020f988c;
    s->f020 = (unsigned int)DAT_020f98a8;
    s->f0f0 = (unsigned int)DAT_020f997c;
    s->f0f8 = 0;
    s->f100 = 0;
    s->f104 = 0;
    s->f108 = 696;
    s->f10c = 409;
    s->f134 = 0;
    s->f138 = 0;
    s->f13a = 0;
    s->f13c = 0;
    s->f13e = 0;
    s->f140 = 0;
    s->f141 = -1;
    s->f143 = 0;
    s->f144 = -1;
    s->f148 = 0;
    s->f149 = 0;
    s->f14a = 0;
    s->f14b = 0;
    s->f14c = 0;
    FUN_0207f4ec(s->f158, id);
    s->f1b0 = 0;
    s->f1b4 = 0;
    FUN_0200c938(s->f1b8, 12);
    *(unsigned int *)(((unsigned int)s + 0x1c4) & 0xFFFFFFFFFFFFFFFFULL) = 0;
    s->f1c8 = 0;
    s->f1d0 = 0;
    s->f1ec = *(unsigned char *)(source + 72);
    s->f1f0 = 100;
    s->f1f4 = 0;
    s->f1f6 = 0;
    s->f1f8 = 0;
    s->f1fc = 0;
    s->f1fd = 0;
    s->f1fe = 0;
    s->f1ff = -1;
    s->f200 = 0;
    s->f201 = 0;
    s->f202 = 0;
    s->f203 = 0;
    s->f204 = 0;
    s->f206 = 0;
    s->f208 = 0;
    s->f20c = 1;
    s->f210 = 4096;
    s->f214 = 0;
    s->f238 = 0;
    s->f23c = -1;
    s->f240 = 0;
    s->f244 = 0;
    s->f245 = 0;
    s->f246 = 0;
    s->f247 = 0;
    s->f248 = -4096;
    s->f110 = 0;
    s->f114 = 0;
    s->f118 = 0;
    s->f104 = 0;
    s->f11c = 0;
    s->f120 = 0;
    s->f11c = 0;
    s->f128 = 0;
    s->f12c = 0;
    s->f130 = 0;
    s->f0f4 |= 2;
    for (i = 0; i < 8; i++) s->f218[i] = 0;
    for (i = 0; i < 3; i++) s->f1b8[i] = 0;
    for (i = 0; i < 4; i++) {
        s->f1d4[i] = -1;
        s->f1e4[i] = 0;
    }
    s->f1e8[0] = 10;
    s->f1e8[1] = 10;
    s->f1e8[2] = 10;
    s->f1e8[3] = 10;
    s->f0fc = id;
    FUN_0208652c(&s->f14e, s->f0fc);
    if (s->f14e > *(unsigned short *)(source + 56)) {
        s->f14e = *(unsigned short *)(source + 56);
        s->f154 = 0;
    }
    if (s->f150 > *(unsigned short *)(source + 58)) {
        s->f150 = *(unsigned short *)(source + 58);
        s->f154 = 0;
    }
    FUN_02039534(s->f180, key);
    FUN_0203955c(s->f190);
    iface = s;
    if (s) iface = &s->f0f0;
    FUN_0203526c(DAT_02108cf4, s->f0fc, iface);
    FUN_02039534(s->f1a0, last);
    s->f0f8 |= 2;
    s->f0f8 |= 1;
    for (i = 0; i < 2; i++) s->f17c[i] = 0;
    return s;
}
