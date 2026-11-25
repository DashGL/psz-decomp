// flags: -O4,p -noThumb
extern volatile unsigned short * const DAT_020ec024[];
extern void FUN_020188ec(int *, int *, int);
extern void FUN_0206740c(void *, int);
extern void FUN_02015c98(int, void *, int, int, int, int, int, int, int, int);

typedef struct {
    unsigned short w;
    unsigned short h;
    int f4;
    int f8;
    int fc;
} S;

void FUN_02015768(int a0, S *a1) {
    
    int sp1c, sp18;
    int bank, base, ptr;
    int w, h;
    bank = (*DAT_020ec024[a0] & 0x1f00) >> 8;
    if (a0 > 3) {
        base = 0x06200000;
    } else {
        base = 0x06000000 + (((*(volatile unsigned int *)0x04000000 & 0x38000000u) >> 27) << 16);
    }
    ptr = base + (bank << 11);
    w = (unsigned int)a1->w >> 3;
    h = (unsigned int)a1->h >> 3;
    FUN_020188ec(&sp1c, &sp18, a0);
    if (sp1c <= w) w = sp1c;
    if (sp18 <= h) h = sp18;
    FUN_0206740c(&a1->fc, a1->f8);
    FUN_02015c98(ptr, a1, 0, 0, 0, 0, sp1c, sp18, w, h);

}
