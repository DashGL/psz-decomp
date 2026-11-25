// flags: -O4,s
extern const short DAT_020ed83c[];
void FUN_02079534(char *s) {
    char *d = s + 144 + 16 * (*(int *)(s + 136));
    int a = (*(unsigned short *)d >> 4) * 2;
    int b = (*(unsigned short *)(s + 130) >> 4) * 2;
    int sa, ca, sb, cb;
    *(int *)(s + 24) = 0;
    sa = DAT_020ed83c[a];
    *(int *)(s + 28) = (sa * (*(int *)(d + 8))) >> 12;
    ca = DAT_020ed83c[a + 1];
    *(int *)(s + 32) = (ca * (*(int *)(d + 8))) >> 12;
    sb = DAT_020ed83c[b];
    *(int *)(s + 24) = ((*(int *)(s + 32)) * sb) >> 12;
    cb = DAT_020ed83c[b + 1];
    *(int *)(s + 32) = ((*(int *)(s + 32)) * cb) >> 12;
    *(int *)(s + 48) = 0;
    *(int *)(s + 52) = 4096;
    *(int *)(s + 56) = 0;
    *(int *)(s + 36) = *(int *)(s + 108);
    *(int *)(s + 40) = *(int *)(s + 112) + *(int *)(d + 12);
    *(int *)(s + 44) = *(int *)(s + 116);
    *(int *)(s + 24) += *(int *)(s + 108);
    *(int *)(s + 28) += *(int *)(s + 112) + *(int *)(d + 12);
    *(int *)(s + 32) += *(int *)(s + 116);
}
