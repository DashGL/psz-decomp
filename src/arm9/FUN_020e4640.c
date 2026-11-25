// flags: -O4,p
typedef unsigned int U;
typedef unsigned char B;
typedef unsigned short H;
typedef unsigned long long U64;
typedef struct {
    B pad0[8];
    U f8;
    B padc;
    B idx;
    B pade[0xf4 - 0x0e];
    U ids[32];
    B pad174[0x18c - 0x174];
    U64 f18c;
    B pad194[0x1a0 - 0x194];
    U state;
    B pad1a4[5];
    B flag1a9;
    B pad1aa[6];
    H f1b0;
    B pad1b2[0x210 - 0x1b2];
    U addrs[32];
    H ports[32];
    B vals[32];
} Conn;
extern const B DAT_0210175c[], DAT_02101768[], DAT_02101774[];
extern Conn *FUN_020e961c(void);
extern B *FUN_020e16c0(int);
extern U *FUN_020e1664(int);
extern int FUN_020e1624(void), FUN_020d34fc(U, U);
extern void FUN_020d3504(U, const B *, int, ...), FUN_020e4a2c(int, int), FUN_020e4a0c(void), FUN_020d3754(U, B *), FUN_020e72d0(int);
#pragma thumb off
extern U FUN_02005738(const B *, B **, int);
#pragma thumb reset
void FUN_020e4640(U unused, U handle, U address, U port, int delay, const B *token, U unused_last) {
    B *record;
    U *slot;
    U id;
    int index, half;
    (void)unused; (void)unused_last;
    if (!FUN_020e961c() || FUN_020e961c()->state != 7 || FUN_020e961c()->flag1a9) {
        FUN_020d3504(handle, DAT_0210175c, -1);
        return;
    }
    index = FUN_020e1624();
    if (index == -1) {
        FUN_020d3504(handle, DAT_02101768, -1);
        FUN_020e4a2c(6, (int)0xfffeabc4u);
        return;
    }
    if (address != FUN_020e961c()->addrs[FUN_020e961c()->idx] ||
        port != FUN_020e961c()->ports[FUN_020e961c()->idx]) {
        if (token[0] && FUN_020e961c()->ids[FUN_020e961c()->idx] == FUN_02005738(token, 0, 10)) {
            FUN_020e961c()->addrs[FUN_020e961c()->idx] = address;
            FUN_020e961c()->ports[FUN_020e961c()->idx] = (H)port;
        } else {
            FUN_020d3504(handle, DAT_02101774, -1);
            return;
        }
    }
    FUN_020e961c()->f18c = 0;
    if (!FUN_020d34fc(handle, FUN_020e961c()->f8)) {
        FUN_020e4a2c(6, (int)0xfffec5e6u);
        return;
    }
    FUN_020e4a0c();
    if (!FUN_020e961c()->idx) {
        half = delay >> 1;
        if (half >= 65535) half = 65535;
        FUN_020e961c()->f1b0 = (H)half;
    }
    slot = FUN_020e1664(index);
    record = FUN_020e16c0(index);
    *slot = handle;
    FUN_020e961c()->idx++;
    record[0] = (B)index;
    record[1] = FUN_020e961c()->vals[FUN_020e961c()->idx - 1];
    *(H *)(record + 2) = 0;
    *(U *)(record + 4) = 0;
    FUN_020d3754(handle, record);
    FUN_020e72d0(2);
}
