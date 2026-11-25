// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0206b740(int);
extern void FUN_0206b6ec(int, int, int);
extern void FUN_0206b8e0(int);

struct State_0206bbd4 {
    int f0[4];
    unsigned int f10;
    int f14;
};
extern struct State_0206bbd4 DAT_0211a180;

int FUN_0206bbd4(int arg0, int arg1, int arg2, int arg3) {
    switch (arg0) {
    case 1:
        if (arg2 == 0 && *(volatile unsigned int *)0x027ffc3c - DAT_0211a180.f10 <= 7) {
            return 0;
        }
        if (arg1 != 0) {
            if (arg3 != 0) {
                FUN_0206b740(arg1);
            } else {
                FUN_0206b6ec(arg1, 0, 0);
            }
        }
        *(volatile unsigned short *)0x04000304 |= 1;
        FUN_0206b8e0(DAT_0211a180.f14);
        break;
    case 0:
        FUN_0206b8e0(0);
        *(volatile unsigned short *)0x04000304 &= ~1;
        DAT_0211a180.f10 = *(volatile unsigned int *)0x027ffc3c;
        if (arg1 != 0) {
            if (arg3 != 0) {
                FUN_0206b740(arg1);
            } else {
                FUN_0206b6ec(arg1, 0, 0);
            }
        }
        break;
    }
    return 1;
}
