// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    unsigned int f8;
    int fc;
    int f10;
    unsigned long long f14;
} G_0d064;
extern G_0d064 DAT_02101dd4;
extern int DAT_0211a51c;
#pragma thumb off
extern unsigned long long FUN_02067e0c(void);
#pragma thumb reset
extern int FUN_02084bf8(int *);
void FUN_0200d064(void) {
    unsigned long long now = FUN_02067e0c();
    if (DAT_02101dd4.f8 / 1000u <= 0x0036ee44u) {
        if (FUN_02084bf8(&DAT_0211a51c) != 0 || DAT_02101dd4.f10 == 0) {
            DAT_02101dd4.f8 += (unsigned int)(((now - DAT_02101dd4.f14) << 6) / 0x82eau);
        }
    }
    DAT_02101dd4.f14 = now;
}
