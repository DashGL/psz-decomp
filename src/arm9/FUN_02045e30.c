// flags: -O4,s
struct Row { signed char a, b, c, d; };
extern struct Row DAT_02108e94[];
unsigned int FUN_02045e30(unsigned int row, unsigned int stage, unsigned int value) {
    unsigned int r = value;
    switch (stage) {
    case 0:
        r = value;
        break;
    case 1:
        r = value + DAT_02108e94[row - 1].a;
        break;
    case 2:
        r = value + (DAT_02108e94[row - 1].a + DAT_02108e94[row - 1].b);
        break;
    case 3:
        r = value + (DAT_02108e94[row - 1].a + DAT_02108e94[row - 1].b + DAT_02108e94[row - 1].c);
        break;
    }
    return r;
}
