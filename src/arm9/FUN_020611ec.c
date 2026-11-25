// flags: -O4,p -noThumb
extern unsigned int DAT_021125f4;
extern char *DAT_021180ac;

void FUN_020611ec(unsigned int index) {
    unsigned short b, a;
    char *base;
    if (!(DAT_021125f4 & (1u << index))) return;
    base = DAT_021180ac + index * 0x5d4;
    if (!*(unsigned char *)(base + 0x1d52) || !*(unsigned short *)(base + 0x1d4c)) return;
    a = *(unsigned short *)(base + 0x1d48);
    b = *(unsigned short *)(base + 0x1d4a);
    if (b <= a && a <= b + 2) {
        *(unsigned short *)(base + 0x1d48) = (unsigned short)(a + 1);
        return;
    }
    *(unsigned short *)(base + 0x1d48) = b;
}
