// flags: -O4,s
void FUN_overlay_21__0219ea70(unsigned int *p) {
    unsigned int *owner = (unsigned int *)p[1], *child = (unsigned int *)p[2];
    unsigned int a, b;
    int diff, i;
    p[5] = owner[59];
    ((unsigned short *)p)[8] = 0;
    a = child[48];
    b = child[34];
    p[7] = b;
    diff = (int)(b - a);
    if (diff < 0) diff += 8;
    owner[58] = diff > 4;
    for (i = 0; i < 2; i++) ((unsigned int *)(p[5] + i * 188))[100] = 11;
    p[6] = ~0U;
    p[3] = 1;
}
