// flags: -O4,p -noThumb
typedef struct {
    int f0;
    int f4[3];
    void (*f10)(int);
    int f14;
    int f18;
    int f1c;
} G_65370;
extern G_65370 DAT_021180f8;
extern void FUN_02065e30(int);
extern void FUN_02065c30(int, int);
void FUN_02065370(void) {
    void (*fn)(int);
    int arg;
    FUN_02065e30(0x200000);
    *(volatile unsigned int *)0x04000600 = (DAT_021180f8.f18 << 30) | (*(volatile unsigned int *)0x04000600 & ~0xc0000000u);
    FUN_02065c30(0x200000, DAT_021180f8.f1c);
    DAT_021180f8.f0 = 0;
    fn = DAT_021180f8.f10;
    arg = DAT_021180f8.f14;
    if (fn != 0) {
        fn(arg);
    }
}
