// flags: -O4,p
extern int FUN_0207f4b4(void *);
extern void FUN_020b47c8(int, unsigned int, void *, void *);
void FUN_0204f7dc(char *s) {
    int valid = 0; unsigned int temp[3]; if (FUN_0207f4b4(s + 0x14)) valid = 1; if (valid) { int kind = *(signed char *)(s + 8); unsigned int a = *(unsigned int *)(s + 0xc), c = *(unsigned int *)(s + 0x10); temp[0] = a; temp[1] = 0; temp[2] = c; FUN_020b47c8(kind, *(unsigned short *)(s + 0xa), temp, s + 0x14); }
}
