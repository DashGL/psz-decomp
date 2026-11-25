// flags: -O4,p
typedef struct { int addr; } InAddr;
extern int DAT_0211d4c8;
extern char DAT_0211d4cc[];
extern char DAT_020feae4[];
extern char DAT_020feaec[];
extern char DAT_020feaf0[];
#pragma thumb off
extern int FUN_0202862c(InAddr);
extern void FUN_02066274(char *, char *, ...);
#pragma thumb reset
char *FUN_020d514c(int a, int b, char *c) {
    if (c == 0) {
        DAT_0211d4c8 ^= 1;
        c = DAT_0211d4cc + DAT_0211d4c8 * 0x16;
    }
    if (a != 0) {
        InAddr in;
        in.addr = a;
        if (b != 0) {
            FUN_02066274(c, DAT_020feae4, FUN_0202862c(in), b);
        } else {
            FUN_02066274(c, DAT_020feaec, FUN_0202862c(in));
        }
    } else if (b != 0) {
        FUN_02066274(c, DAT_020feaf0, b);
    } else {
        c[0] = 0;
    }
    return c;
}
