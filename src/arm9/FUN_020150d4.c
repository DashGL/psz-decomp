// flags: -O4,p -noThumb
enum { E0 = 0, E1 = 1 };
#pragma thumb on
extern void FUN_0205ce8c(unsigned, unsigned, unsigned);
#pragma thumb off
void FUN_020150d4(unsigned char *table) {
    int mode = table[*(volatile unsigned *)0x04000000 & 7];
    unsigned flag = ((*(volatile unsigned *)0x04000000 & 8) ? E1 : E0) != 0 ? E1 : E0;
    if (mode >= 8) mode -= 8;
    FUN_0205ce8c(1, mode, flag);
}
