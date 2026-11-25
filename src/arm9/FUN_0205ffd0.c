// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02061278(int);

struct S5ffd0 {
    unsigned char pad0[0x14e8];
    int arr4[0x9b];
    short arr2[0x100];
};
extern struct S5ffd0 *DAT_021180ac;

int FUN_0205ffd0(int a0, unsigned int a1) {
    short r4; int r5; int r6;
    r6 = FUN_020683d4();
    switch (a1) {
    case 0: r5 = 10; r4 = 4; break;
    case 1: r5 = 10; r4 = 3; break;
    case 2: r5 = 14; r4 = 2; break;
    case 3: r5 = 7;  r4 = 5; break;
    default:
        FUN_020683e8(r6);
        return 0;
    }
    if (DAT_021180ac != 0 && FUN_02061278(a0) != 0) {
        if (DAT_021180ac->arr4[a0 - 1] == r5) { DAT_021180ac->arr2[a0 - 1] = r4; FUN_020683e8(r6); return 1; }
    }
    FUN_020683e8(r6);
    return 0;
}
