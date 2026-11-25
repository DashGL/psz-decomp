// flags: -O4,p -noThumb
extern unsigned char DAT_02108c3c;
extern unsigned char DAT_02108c40[];
void FUN_020301ac(int value) {
    unsigned char code;
    if (value & 2) {
        code = (unsigned char)(value >> 2);
    } else {
        code = (unsigned char)((value >> 2) + 25);
    }
    DAT_02108c40[DAT_02108c3c % 16] = code;
    if (DAT_02108c3c < 16) {
        DAT_02108c3c++;
    } else {
        DAT_02108c3c = (unsigned char)((DAT_02108c3c + 1) % 16 + 16);
    }
}
