//cpp
// flags: -O4,s
extern "C" {
extern unsigned char *DAT_02108d04;
int FUN_0203d02c(void) {
    unsigned char *p = DAT_02108d04;
    if (p != 0) {
        if (*(signed char *)(p + 0x44) == 2 || ((*(unsigned int *)(p + 0xf8) & 0x100000) ? 1 : 0) != 0) {
            return 1;
        }
    }
    return 0;
}
}
