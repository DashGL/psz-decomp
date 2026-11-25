// flags: -O4,s
void FUN_overlay_18__0211e648(unsigned int *s, unsigned int a, unsigned int b) {
    if (b <= a) s[0] = b;
    else s[0] = 0;
    s[1] = a;
}
