// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int FUN_020710a4(void *, void *);
#define W(n) (*(int *)(s + (n)))
void FUN_020711bc(char *s) {
    Vec saved = *(Vec *)(s + 108);
    int restore = FUN_020710a4(s, s + 108);
    int a, b, c; short sn, cs, ca, sr;
    a = (*(unsigned short *)(s + 128) >> 4) * 2;
    b = (*(unsigned short *)(s + 130) >> 4) * 2;
    sn = DAT_020ed83c[b];
    cs = DAT_020ed83c[b + 1];
    c = (*(unsigned short *)(s + 132) >> 4) * 2;
    ca = DAT_020ed83c[a + 1]; W(24) = (ca * W(124)) >> 12; { int sa = DAT_020ed83c[a]; W(28) = (sa * W(124)) >> 12; } W(32) = (ca * W(124)) >> 12;
    sr = DAT_020ed83c[c];
    W(48) = (int)(((long long)sr * cs + 2048) >> 12);
    W(52) = DAT_020ed83c[c + 1];
    W(56) = -(int)(((long long)sr * sn + 2048) >> 12);
    W(36) += (W(108) - W(36)) >> 1;
    W(44) += (W(116) - W(44)) >> 1;
    W(24) = (W(36) + W(24) * sn) >> 12;
    W(28) += W(40);
    W(32) = (W(44) + W(32) * cs) >> 12;
    W(24) += W(36);
    W(28) += W(112);
    W(32) += W(44);
    if (restore) { W(108) = saved.x; W(112) = saved.y; W(116) = saved.z; }
}
