// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
extern int FUN_02079114(void);
extern int FUN_0208b09c(void *, char *);
extern void FUN_020c331c(int, int, int, int);
extern int FUN_02077f3c(void);
extern int FUN_02078038(int);
extern int FUN_020848e0(unsigned char, signed char);
extern void FUN_02079160(int, void *, int, int, int, int, int, int, int);

struct Pair8 {
    int a;
    int b;
};

extern int DAT_020f3e04[];

void FUN_0208ae24(void *a0, char *a1) {
    struct Pair8 sp1c;
    char *sp18;
    int sp14 = FUN_02079114();
    int r4;
    int r7;
    int r0;
    if (sp14 == 0) {
        return;
    }
    r4 = 0;
    r7 = FUN_0208b09c(a0, a1);
    sp18 = a1 + 2;
    switch ((unsigned char)sp18[r7]) {
    case 0x15:
        r4 = 0x40;
        break;
    case 0x16:
        r4 = 0x41;
        break;
    case 0x17:
        r4 = 0x42;
        break;
    case 0x18:
        r4 = 0x43;
        break;
    case 0x19:
        r4 = 0x44;
        break;
    case 0x1a:
        r4 = 0x60;
        break;
    }
    FUN_020c331c(0x49, 0x0b0000, 0x0fb000, *(int *)((char *)a0 + 0x20));
    FUN_020c331c(r4, 0x0ba000, 0x0fb000, *(int *)((char *)a0 + 0x20));
    FUN_020c331c(6, 0x0d8000, 0x107000, FUN_02078038(FUN_02077f3c()));
    r0 = FUN_020848e0((unsigned char)sp18[r7], *(signed char *)(a1 + r7 + 5));
    sp1c = *(struct Pair8 *)((char *)DAT_020f3e04 + 0x64);
    FUN_02079160(sp14, &sp1c, 2, 2, r0, -1, -1, 8, 0);
    FUN_020c331c(2, 0x0f0000, 0x107000, FUN_02078038(FUN_02077f3c()));
}
