// flags: -O4,p -noThumb
struct ThreadInfo_020665a0 {
    int f0;
    int f4;
    void *f8;
    int fc;
    unsigned char pad10[0x14];
    unsigned short f24;
    unsigned short f26;
    void *f28;
    void *f2c;
    unsigned char pad30[0x68];
    int f98;
    unsigned char pad9c[0x08];
    int fa4;
    unsigned char pada8[0xb0];
    int f158;
    int f15c;
    int f160;
    int f164;
    int f168;
    unsigned char pad16c[0x18];
    unsigned int *f184;
    unsigned int f188;
    int f18c;
    int f190;
    int f194;
};
extern struct ThreadInfo_020665a0 DAT_0211817c;
extern unsigned char DAT_021181a4[];
extern unsigned char DAT_00000000[];
extern unsigned char DAT_02118270[];
extern unsigned char DAT_027e0000[];
extern unsigned char DAT_00000800[];
extern unsigned char DAT_021181a0[];
extern unsigned char DAT_021181b0[];
extern void FUN_02066d58(void);
extern unsigned char DAT_021183f8[];
extern unsigned int FUN_02066d30(int);
extern void FUN_020666f8(void *a, void (*b)(void), int c, void *d, int e, int f);

void FUN_020665a0(void) {
    unsigned int sp_hi;
    unsigned int sp_lo;

    if (DAT_0211817c.fc != 0) {
        return;
    }
    DAT_0211817c.fc = 1;
    DAT_0211817c.f8 = DAT_021181a4;
    DAT_0211817c.f164 = 0x10;
    DAT_0211817c.f160 = 0;
    DAT_0211817c.f158 = 1;
    DAT_0211817c.f15c = 0;
    DAT_0211817c.f168 = 0;
    DAT_0211817c.f2c = DAT_02118270;
    DAT_0211817c.f28 = DAT_02118270;
    if ((int)DAT_00000000 <= 0) {
        sp_lo = 0x027e0080 - (int)DAT_00000000;
    } else {
        sp_lo = (unsigned int)DAT_027e0000 + 0x3f80 - (int)DAT_00000800 - (int)DAT_00000000;
    }
    sp_hi = (unsigned int)DAT_027e0000 + 0x3f80 - (int)DAT_00000800;
    DAT_0211817c.f188 = sp_hi;
    DAT_0211817c.f184 = (unsigned int *)sp_lo;
    DAT_0211817c.f18c = 0;
    *(unsigned int *)(sp_hi - 4) = 0xfddb597d;
    *DAT_0211817c.f184 = 0x7bf9dd5b;
    DAT_0211817c.f194 = 0;
    DAT_0211817c.f190 = 0;
    DAT_0211817c.f24 = 0;
    DAT_0211817c.f26 = 0;
    *(void **)0x027fffa0 = DAT_021181a0;
    FUN_02066d30(0);
    FUN_020666f8(DAT_021181b0, FUN_02066d58, 0, DAT_021183f8, 0xc8, 0x1f);
    DAT_0211817c.fa4 = 0x20;
    DAT_0211817c.f98 = 1;
}
