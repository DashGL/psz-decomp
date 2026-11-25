// flags: -O4,s
typedef struct { short s0, s1, s2, s3; int d2, d3; } Desc;
extern char UNK_0211a51c[];
extern int FUN_02084bf8(void *), FUN_02084c1c(void *);
#pragma thumb off
extern int FUN_02053860(void);
extern void FUN_020144f0(void), FUN_02014714(void);
#pragma thumb on
extern void FUN_020c32b4(void *, void *);
extern void *FUN_02077f3c(void), *FUN_02077fec(void *), *FUN_02078038(void *);
void FUN_02091708(void) {
    Desc d;
    unsigned short frame;
    if (FUN_02084bf8(UNK_0211a51c)) {
        FUN_020144f0();
        d.s0 = 0; d.s1 = 0; d.s2 = 0;
        d.d2 = 4096;
        d.d3 = 0x16f000;
        frame = FUN_02053860();
        if (FUN_02084c1c(UNK_0211a51c)) {
            d.s0 = frame + 6;
            FUN_02077fec(FUN_02077f3c());
            FUN_020c32b4(&d, FUN_02077fec(FUN_02077f3c()));
        } else {
            d.s0 = frame + 50;
            FUN_02078038(FUN_02077f3c());
            FUN_020c32b4(&d, FUN_02078038(FUN_02077f3c()));
        }
        FUN_02014714();
    }
}