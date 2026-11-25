// flags: -O4,p -noThumb
struct Entry8_138b0 {
    unsigned short f00;
    unsigned short f02;
    unsigned short f04;
    unsigned short f06;
};

struct Slot32_138b0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    unsigned short f10[8];
};

struct Entry24_138b0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};

struct Dest138b0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};

extern unsigned int DAT_02104754[];
extern struct Entry8_138b0 DAT_021047e4[];
extern struct Entry24_138b0 DAT_021048e4[];
extern struct Entry24_138b0 DAT_02104be4[];
extern struct Slot32_138b0 DAT_02104ee4[];
extern struct Dest138b0 DAT_020f66d4;

extern void FUN_0206557c(int, void *, int);

static inline int *GetMtx(void) {
    if (DAT_02104754[1] == 0) {
        return &DAT_02104be4[DAT_02104754[3]].f00;
    } else {
        int c = DAT_02104754[3];
        DAT_020f66d4.f18 = DAT_021048e4[c].f10;
        DAT_020f66d4.f1c = DAT_021048e4[c].f14;
        return &DAT_020f66d4.f08;
    }
}

void FUN_020138b0(void) {
    struct Entry8_138b0 *e = &DAT_021047e4[(unsigned short)DAT_02104754[3]];
    unsigned short f02;
    unsigned short idx;
    int *src;
    struct Slot32_138b0 *slot;
    int i;

    if (!((e->f04 == 1 || e->f04 == 2) ? 1 : 0)) {
        return;
    }
    idx = *(unsigned short *)&DAT_02104754[0];
    if (idx < 0x1f) {
        *(unsigned short *)&DAT_02104754[0] = idx + 1;
    }
    f02 = e->f02;
    e->f00 = idx;
    FUN_0206557c(-1, DAT_02104ee4[idx].f10, 0x10);
    src = GetMtx();
    slot = &DAT_02104ee4[DAT_021047e4[(unsigned short)DAT_02104754[3]].f00];
    slot->f00 = src[0];
    slot->f04 = src[1];
    slot->f08 = src[2];
    slot->f0c = src[3];
    for (i = (unsigned short)*(volatile unsigned int *)&DAT_02104754[3]; i >= 0; i--) {
        if (DAT_021047e4[i].f02 != f02) {
            return;
        }
        DAT_021047e4[i].f04 = 3;
        DAT_021047e4[i].f00 = idx;
    }
}
