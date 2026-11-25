// flags: -O4,p
extern unsigned int *DAT_020feb98;
void FUN_020d64f4(unsigned int *p, unsigned int value) {
    if (!p) p = DAT_020feb98;
    p[41] = value;
}
