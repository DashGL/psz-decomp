// flags: -O4,s
#pragma thumb off
extern void FUN_0205e86c(int, unsigned int, unsigned int, unsigned int);
extern void FUN_0205e924(void *);
#pragma thumb reset

void FUN_02034478(char *s, int enabled)
{
    unsigned char *p = *(unsigned int *)(s + 460) ? (unsigned char *)s + 416 : 0;
    if (enabled && p) {
        unsigned int color;
        FUN_0205e86c(1, p[0], p[1], *(unsigned int *)(p + 4));
        color = (p[8] | (p[9] << 5) | (p[10] << 10)) & 65535;
        color |= p[11] << 16;
        *(volatile unsigned int *)0x04000358 = color;
        FUN_0205e924(p + 12);
    } else {
        FUN_0205e86c(0, 0, 0, 0);
    }
}
