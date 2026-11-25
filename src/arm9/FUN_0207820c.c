// flags: -O4,s
struct A_0207820c {
    short f0;
    volatile short f2;
    volatile int f4;
};
struct B_0207820c {
    volatile int f0;
    volatile int f4;
};
extern struct A_0207820c DAT_0211a3b8;
extern struct B_0207820c DAT_020fa284;
extern int DAT_0211a3d4[4];
extern void FUN_02078c80(int);
void FUN_0207820c(void) {
    int i;
    DAT_0211a3b8.f2 = 0;
    DAT_020fa284.f4 = -1;
    DAT_0211a3b8.f4 = 0;
    DAT_020fa284.f0 = -1;
    FUN_02078c80(1);
    for (i = 0; i < 4; i++) {
        DAT_0211a3d4[i] = 0;
    }
}
