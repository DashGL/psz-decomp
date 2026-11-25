extern unsigned char DAT_0211e5f4[];
extern unsigned char DAT_0211e5f9[];
extern unsigned char DAT_0211e5fe[];
extern unsigned char DAT_0211e600[];
#pragma thumb off
extern void FUN_02065774(void *, void *, unsigned int);
#pragma thumb on
typedef struct {
    unsigned long long f0;
    unsigned long long f8;
    unsigned short f10;
    unsigned short f12;
} Out_e9ebc;
void FUN_020e9ebc(Out_e9ebc *out) {
    FUN_02065774(DAT_0211e5f4, &out->f0, 6);
    out->f0 &= 0x7ffffffffffULL;
    FUN_02065774(DAT_0211e5f9, &out->f8, 6);
    out->f8 >>= 3;
    out->f8 &= 0x7ffffffffffULL;
    FUN_02065774(DAT_0211e5fe, &out->f10, 2);
    out->f10 = (int)out->f10 >> 6;
    out->f10 &= 0x3ff;
    FUN_02065774(DAT_0211e600, &out->f12, 2);
}
