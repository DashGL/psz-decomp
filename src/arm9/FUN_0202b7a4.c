// flags: -O4,p -noThumb
extern int FUN_0202a430(void *, unsigned char *);
extern void FUN_020245b4(unsigned char *, int, int, int, void *);

void FUN_0202b7a4(void *a) {
    unsigned char buf[28];
    unsigned char *p = *(unsigned char **)((char *)a + 0xc);
    if (p[0x455] == 8) {
        int r;
        buf[0] = 0x15;
        buf[1] = 3;
        buf[2] = 0;
        buf[3] = 0;
        buf[4] = 2;
        buf[5] = 1;
        buf[6] = 0;
        r = FUN_0202a430(p, buf);
        FUN_020245b4(buf, r, 0, 0, a);
    }
    p[0x455] = 0;
}
