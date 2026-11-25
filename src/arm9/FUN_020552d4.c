// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02055548(void *, unsigned short, void *, int);
extern void FUN_020654dc(void *, int, int);
extern void FUN_020654b4(int, int, int);
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);

struct Elem552d4 {
    unsigned short f00;
    unsigned short f02;
    unsigned char f04[0x1fc];
};

struct S552d4 {
    struct Elem552d4 arr[4];
    char pad800[8];
    unsigned short f808;
    char pad80a[4];
    unsigned short f80e;
    unsigned short f810;
    char pad812[6];
    unsigned short f818;
};

void FUN_020552d4(struct S552d4 *a0, int a1, void *a2) {
    unsigned short r7 = (unsigned short)(1 << a1);
    unsigned short r4;
    int r1;
    if ((a0->f80e & r7) == 0) {
        return;
    }
    r4 = a0->f808;
    if ((a0->arr[r4].f00 & r7) == 0) {
        if (a0->f818 != 1) {
            return;
        }
        r4 = (r4 + 1) & 3;
        if ((a0->arr[r4].f00 & r7) == 0) {
            return;
        }
    }
    r1 = FUN_02055548(a0, a0->f80e, a0->arr[r4].f04, a1);
    if (a2 != 0) {
        FUN_020654dc(a2, r1, a0->f810);
    } else {
        FUN_020654b4(0, r1, a0->f810);
    }
    int r0 = FUN_020683d4();
    a0->arr[r4].f00 &= ~r7;
    a0->arr[r4].f02 |= r7;
    FUN_020683e8(r0);
}
