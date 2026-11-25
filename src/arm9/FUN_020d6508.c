// flags: -O4,p
extern unsigned int *DAT_020feb98;
void FUN_020d6508(unsigned int *p, unsigned int value) {
    if (!p) p = DAT_020feb98;
    p[42] = value;
}
