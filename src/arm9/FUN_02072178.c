// flags: -O4,s
extern short DAT_020ed83c[];
#define W(n) (*(int *)(s + (n)))

void FUN_02072178(char *s) {
    int a, b, c, sn, cs, ca, sr;
    a = ((int)*(unsigned short *)(s + 0x80) >> 4) * 2;
    b = ((int)*(unsigned short *)(s + 0x82) >> 4) * 2;
    sn = DAT_020ed83c[b];
    cs = DAT_020ed83c[b + 1];
    c = ((int)*(unsigned short *)(s + 0x84) >> 4) * 2;
    ca = DAT_020ed83c[a + 1];
    W(0x18) = (ca * W(0x7c)) >> 12;
    { int sa = DAT_020ed83c[a]; W(0x1c) = (sa * W(0x7c)) >> 12; }
    W(0x20) = (ca * W(0x7c)) >> 12;
    W(0x18) = (W(0x18) * sn + W(0x24)) >> 12;
    W(0x1c) = W(0x1c) + W(0x28);
    W(0x20) = (W(0x20) * cs + W(0x2c)) >> 12;
    sr = DAT_020ed83c[c];
    W(0x30) = (int)(((long long)sr * cs + 2048) >> 12);
    W(0x34) = DAT_020ed83c[c + 1];
    W(0x38) = -(int)(((long long)sr * sn + 2048) >> 12);

    W(0x24) = W(0x6c);
    W(0x28) = W(0x70) + W(0x8c);
    W(0x2c) = W(0x74);
    W(0x18) += W(0x6c);
    W(0x1c) += W(0x70);
    W(0x20) += W(0x74);
}
