// flags: -O4,s
extern short DAT_020ed83c[];
#define W(n) (*(int *)(s + (n)))
void FUN_02040614(char *s) {
    int a, b, c; short sn, cs, ca, sr;
    a = (*(unsigned short *)(s + 128) >> 4) * 2;
    b = (*(unsigned short *)(s + 130) >> 4) * 2;
    sn = DAT_020ed83c[b];
    cs = DAT_020ed83c[b + 1];
    c = (*(unsigned short *)(s + 132) >> 4) * 2;
    ca = DAT_020ed83c[a + 1];
    W(24) = (ca * W(124)) >> 12;
    { int sa = DAT_020ed83c[a]; W(28) = (sa * W(124)) >> 12; }
    W(32) = (ca * W(124)) >> 12;
    W(24) = (W(36) + W(24) * sn) >> 12;
    W(28) += W(40);
    W(32) = (W(44) + W(32) * cs) >> 12;
    sr = DAT_020ed83c[c];
    W(48) = (int)(((long long)sr * cs + 2048) >> 12);
    W(52) = DAT_020ed83c[c + 1];
    W(56) = -(int)(((long long)sr * sn + 2048) >> 12);
    W(36) = W(108);
    W(44) = W(116);
    W(24) += W(108);
    W(28) += W(112);
    W(32) += W(116);
}
