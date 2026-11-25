// flags: -noThumb
typedef struct {
    int pad0[7];
    unsigned char *volatile ptr;
    int pad1;
    unsigned char f24;
    unsigned char f25;
    unsigned char f26;
} S;
extern S DAT_02112600;
void FUN_020625b4(void) {
    *(volatile unsigned short *)(DAT_02112600.ptr + 0x4b0) = 1;
    DAT_02112600.f26 = *(volatile unsigned char *)(DAT_02112600.ptr + 0x4b4);
    DAT_02112600.f24 = 5;
}
