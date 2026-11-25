// flags: -O4,p
extern unsigned int DAT_0211dc8c[];
void FUN_020e056c(unsigned int a, unsigned int b) {
    if (DAT_0211dc8c[0] != 9) {
        DAT_0211dc8c[0] = a;
        DAT_0211dc8c[1] = b;
    }
}
