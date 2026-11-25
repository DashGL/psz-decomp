// flags: -O4,s
extern void FUN_020e4a2c(unsigned int, unsigned int);
unsigned int FUN_020e88f8(unsigned int code, unsigned int detail) {
    unsigned int mapped = code;
    if (!mapped) {
        return 0;
    }
    switch (code) {
    case 1:
        mapped = 6;
        detail = 0xffffffce;
        break;
    case 2:
        mapped = 6;
        detail = 0xffffffe2;
        break;
    case 3:
        mapped = 6;
        detail = 0xffffffec;
        break;
    case 4:
        mapped = 6;
        detail = 0xffffffd8;
        break;
    case 5:
        mapped = 9;
        detail = 0xffffffff;
        break;
    case 6:
        mapped = 9;
        detail = 0xfffffffe;
        break;
    }
    FUN_020e4a2c(mapped, detail - 0x14c08);
    return code;
}
