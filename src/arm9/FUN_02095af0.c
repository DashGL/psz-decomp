// flags: -O4,s
extern int FUN_0203ae60(void *), FUN_02070098(void *, int), FUN_020700d4(void *, int);

void FUN_02095af0(char *s) {
    if (FUN_0203ae60(s)) {
        *(short *)(s + 308) = 0;
        *(short *)(s + 310) = 0;
    } else if (*(unsigned short *)(s + 308) > 150) {
        int equal = *(unsigned short *)(s + 308) == *(unsigned short *)(s + 310);
        int kind = *(signed char *)(s + 68);
        int hp = 0, mp = 0;
        int a, b;
        if (kind == 2) hp += equal ? 204 : 40;
        if (kind == 1) mp += equal ? 204 : 40;
        a = (int)(((long long)*(unsigned short *)(s + 92) * hp + 2048) >> 12);
        b = (int)(((long long)*(unsigned short *)(s + 94) * mp + 2048) >> 12);
        if (a > 0) FUN_02070098(s, (short)a);
        if (b > 0) FUN_020700d4(s, (short)b);
        *(short *)(s + 308) = 0;
        *(short *)(s + 310) = 0;
    }
    (*(unsigned short *)(s + 308))++;
    switch (*(int *)(s + 576)) {
    case 0:
        (*(unsigned short *)(s + 310))++;
        break;
    case 14:
        break;
    }
}
