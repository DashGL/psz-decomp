// flags: -O4,p -noThumb
extern char *FUN_0202e424(void);
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
void *FUN_0202fe9c(unsigned short *a) {
    void *r7 = 0;
    unsigned short r4 = 0;
    char *r6 = FUN_0202e424();
    int r0 = FUN_020683d4();
    if (r6 != 0 && *(int *)(r6 + 0x2260) == 9 && (unsigned char)r6[0x226b] == 0) {
        r4 = *(unsigned short *)(r6 + 0x214a);
        r7 = r6 + 0x214c;
    }
    FUN_020683e8(r0);
    if (a != 0) {
        *a = r4;
    }
    return r7;
}
