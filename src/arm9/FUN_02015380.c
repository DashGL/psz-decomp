// flags: -O4,p -noThumb
extern unsigned short DAT_020ebeec[];
unsigned int FUN_02015380(unsigned int i) {
    unsigned int offset = DAT_020ebeec[i];
    if (offset && (*(volatile unsigned short *)(0x04000000 + offset) & 0x2000)) i += 2;
    return i;
}
