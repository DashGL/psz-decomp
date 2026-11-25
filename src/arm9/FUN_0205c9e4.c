// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
extern int FUN_0205c520(int, int);
extern short data_020f183c[];
u16 FUN_0205c9e4(int y, int x) {
    int numerator, base, add;
    if (y > 0) {
        if (x > 0) {
            if (x > y) { numerator = y; base = 0; add = 1; }
            else if (x < y) { numerator = x; x = y; base = 16384; add = 0; }
            else return 8192;
        } else if (x < 0) {
            x = (int)(0u - (u32)x);
            if (x < y) { numerator = x; x = y; base = 16384; add = 1; }
            else if (x > y) { numerator = y; base = 32768; add = 0; }
            else return 24576;
        } else return 16384;
    } else if (y < 0) {
        y = (int)(0u - (u32)y);
        if (x < 0) {
            x = (int)(0u - (u32)x);
            if (x > y) { numerator = y; base = -32768; add = 1; }
            else if (x < y) { numerator = x; x = y; base = -16384; add = 0; }
            else return 40960;
        } else if (x > 0) {
            if (x < y) { numerator = x; x = y; base = -16384; add = 1; }
            else if (x > y) { numerator = y; base = 0; add = 0; }
            else return 57344;
        } else return 49152;
    } else {
        if (x >= 0) return 0;
        else return 32768;
    }
    if (!x) return 0;
    if (add) return (u16)(base + data_020f183c[FUN_0205c520(numerator, x) >> 5]);
    return (u16)(base - data_020f183c[FUN_0205c520(numerator, x) >> 5]);
}
