// flags: -O4,s
extern void FUN_02035010(void *);
void *FUN_02035028(char *s) {
    char *p, *p2;
    *(unsigned short *)(s + 4) = 0;
    *(unsigned int *)(s + 8) = 0;
    *(unsigned int *)(s + 12) = 0;
    p = s + 0x10;
    do { FUN_02035010(p); p += 52; } while (p < s + 0x24c);
    p2 = s + 0x24c;
    do { FUN_02035010(p2); p2 += 52; } while (p2 < s + 0x2b4);
    return s;
}
