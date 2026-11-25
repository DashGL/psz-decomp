// flags: -O4,s
extern char DAT_020f99a8[];
extern short DAT_020ed83c[];
extern void FUN_020407cc(void *);
#define W(n) (*(int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
void *FUN_020715a8(char *s) {
    int a, b, c, sb, cb, sa, ca, sc;
    FUN_020407cc(s);
    *(void **)s = DAT_020f99a8;
    W(136) = 0; W(140) = 0;
    H(144) = 0; H(146) = 32768;
    W(152) = 0; W(160) = 0; W(164) = 0;
    H(128) = 2048; H(130) = 0; H(132) = 0;
    W(124) = 20480; W(156) = 20480; W(148) = 0;
    a = 2 * (H(128) >> 4); b = 2 * (H(130) >> 4);
    sb = DAT_020ed83c[b]; cb = DAT_020ed83c[b + 1];
    c = 2 * (H(132) >> 4);
    ca = DAT_020ed83c[a + 1];
    W(24) = (ca * W(124)) >> 12;
    sa = DAT_020ed83c[a];
    W(28) = (sa * W(124)) >> 12;
    W(32) = (ca * W(124)) >> 12;
    W(24) = (W(36) + W(24) * sb) >> 12;
    W(28) += W(40);
    W(32) = (W(44) + W(32) * cb) >> 12;
    sc = DAT_020ed83c[c];
    W(48) = (int)(((long long)sc * cb + 2048) >> 12);
    W(52) = DAT_020ed83c[c + 1];
    W(56) = -(int)(((long long)sc * sb + 2048) >> 12);
    W(36) = W(108); W(44) = W(116);
    W(24) += W(108); W(28) += W(112); W(32) += W(116);
    W(120) |= 1;
    return s;
}
