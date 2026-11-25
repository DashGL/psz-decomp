// flags: -O4,p
typedef unsigned int U;
typedef unsigned char B;
typedef unsigned short H;
#define W(p, o) (*(U *)((B *)(p) + (o)))
#define S(p, o) (*(H *)((B *)(p) + (o)))
extern const char DAT_0210174c[];
extern B *FUN_020e961c(void), *FUN_020e16c0(int), *FUN_020d514c(U, U, void *);
extern U *FUN_020e1664(int);
extern int FUN_020e1624(void), FUN_020e7000(U), FUN_020d350c(U, void *, void *, void *, int, int, U, int);
extern void FUN_020e8a78(void);
extern void FUN_020e4a2c(int, int), FUN_020d3754(U, B *), FUN_020e72d0(int);
#pragma thumb off
extern int FUN_020662b4(void *, int, const char *, ...);
#pragma thumb reset
void FUN_020e4800(U handle, int status, U unused2, U unused3) {
    B *a, *b, *c, *d, *e, *address, *record;
    U *slot;
    int index, result;
    char token[12];
    (void)unused2;
    (void)unused3;
    if (!FUN_020e961c() || (W(FUN_020e961c(), 0x1a0) != 7 && W(FUN_020e961c(), 0x1a0) != 12)) return;
    switch (status) {
    case 5:
        return;
    case 6:
        a = FUN_020e961c();
        a[12] = (B)(a[12] + 1);
        if (FUN_020e961c()[12] > 5) {
            FUN_020e961c()[12] = 0;
            a = FUN_020e961c();
            b = FUN_020e961c();
            FUN_020e7000(W(a + 4 * b[20], 0xf4));
            break;
        }
        a = FUN_020e961c();
        FUN_020662b4(token, 12, DAT_0210174c, W(a, 0x200));
        a = FUN_020e961c();
        b = FUN_020e961c();
        c = FUN_020e961c();
        d = FUN_020e961c();
        e = FUN_020e961c();
        address = FUN_020d514c(W(b + 4 * c[20], 0x210), S(d + 2 * e[20], 0x290), 0);
        b = FUN_020e961c();
        result = FUN_020d350c(*(U *)W(a, 4), 0, address, token, -1, 5000, W(b, 8), 0);
        if (result == 1) {
            FUN_020e8a78();
            break;
        }
        if (result) {
            a = FUN_020e961c();
            b = FUN_020e961c();
            if (!FUN_020e7000(W(a + 4 * b[20], 0xf4))) return;
        }
        break;
    default:
        a = FUN_020e961c();
        b = FUN_020e961c();
        if (!FUN_020e7000(W(a + 4 * (b[13] + 1), 0xf4))) return;
        break;
    case 0:
        index = FUN_020e1624();
        if (index == -1) {
            FUN_020e4a2c(6, (int)0xfffeabc4u);
            break;
        }
        slot = FUN_020e1664(index);
        record = FUN_020e16c0(index);
        *slot = handle;
        a = FUN_020e961c();
        a[13] = (B)(a[13] + 1);
        record[0] = (B)index;
        S(record, 2) = 0;
        W(record, 4) = 0;
        a = FUN_020e961c();
        b = FUN_020e961c();
        record[1] = (a + b[13])[0x2d0];
        FUN_020d3754(handle, record);
        if (W(FUN_020e961c(), 0x1a0) == 12) FUN_020e72d0(0);
        else FUN_020e72d0(1);
        break;
    }
}
