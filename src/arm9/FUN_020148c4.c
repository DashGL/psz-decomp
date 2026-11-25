// flags: -O4,p -noThumb
#pragma opt_propagation off
struct State148c4 {
    unsigned short f0;
    volatile unsigned short f2;
    int f4;
    int f8;
    int fc;
};
struct Entry148c4 {
    unsigned short f0;
    volatile unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};
extern struct State148c4 DAT_02104754;
extern char DAT_021048e4[];
extern char DAT_02104be4[];
extern unsigned short DAT_020f66d4;
extern struct Entry148c4 DAT_021047e4[];
extern void FUN_020149f8(int *, void *, void *);

static inline int check_flag(void) {
    return DAT_02104754.f4 == 0 && DAT_020f66d4 != 0xfffe;
}
static inline unsigned short alloc_id(void) {
    unsigned short t = DAT_02104754.f2;
    DAT_02104754.f2 = (unsigned short)(t + 1);
    return t;
}

void FUN_020148c4(int a, int b) {
    int m[6];
    struct State148c4 *s = &DAT_02104754;
    int z = 0;
    int off = s->fc * 24;
    m[1] = a;
    m[0] = b;
    m[3] = b;
    m[2] = -a;
    m[4] = z;
    m[5] = z;
    FUN_020149f8(m, DAT_021048e4 + off, DAT_021048e4 + off);
    FUN_020149f8(m, DAT_02104be4 + DAT_02104754.fc * 24, DAT_02104be4 + DAT_02104754.fc * 24);
    if (!check_flag()) {
        DAT_020f66d4 = (unsigned short)DAT_02104754.fc;
    }
    {
        struct Entry148c4 *e = &DAT_021047e4[(unsigned short)DAT_02104754.fc];
        switch (e->f4) {
        case 0:
        case 2:
        case 3:
            e->f2 = alloc_id();
            e->f4 = 1;
            break;
        case 1:
            break;
        }
    }
}
