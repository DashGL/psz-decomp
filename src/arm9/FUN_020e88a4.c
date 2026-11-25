// flags: -O4,s
extern void FUN_020e4a2c(unsigned int, unsigned int);
unsigned int FUN_020e88a4(unsigned int code, unsigned int detail) {
    unsigned int mapped = code;
    if (!mapped) return 0;
    switch (code) {
    case 1:
        mapped = 9;
        detail = 0xffffffff;
        break;
    case 2:
        mapped = 9;
        detail = 0xfffffffe;
        break;
    case 3:
        mapped = 6;
        detail = 0xfffffff6;
        break;
    case 4:
        mapped = 6;
        detail = 0xffffffec;
        break;
    }
    FUN_020e4a2c(mapped, detail - 0x13c68);
    return code;
}
