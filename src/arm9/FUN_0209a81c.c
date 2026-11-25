// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_0209a80c(void *);

void *FUN_0209a81c(char *s) {
    char *p;
    int i;
    *(int *)s = 0;
    *(unsigned char *)(s + 4) = 225;
    *(int *)(s + 12) = 0;
    FUN_0200c938(s + 16, 8);
    *(int *)(s + 24) = 0;
    p = s + 28;
    do {
        FUN_0209a80c(p);
        p += 8;
    } while (p < s + 156);
    *(int *)(s + 156) = 0;
    *(int *)(s + 160) = 0;
    *(int *)(s + 164) = 0;
    *(int *)(s + 168) = 0;
    *(int *)(s + 172) = 0;
    *(int *)s = 1;
    for (i = 0; i < 2; i++) {
        ((int *)(s + 16))[i] = 0;
    }
    *(int *)(s + 8) = 10;
    return s;
}
