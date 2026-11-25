// near: 14/304b diff (0x130/0x130), 0 bad relocs — register coloring and instruction scheduling in TLS alert handler
// flags: -O4,p -noThumb
struct Rng2aaec {
    unsigned long long x;
    unsigned long long a;
    unsigned long long c;
};
extern unsigned char DAT_02108a80;
extern struct Rng2aaec DAT_021070bc;
extern unsigned char DAT_02108bf8[];
extern void FUN_0202ac1c(void *, int);
extern void FUN_0202c694(void *);
extern int FUN_020683d4(void);
extern void FUN_0202c6e8(void *, void *, int);
extern void FUN_0202c808(void *, void *);
extern void FUN_020683e8(int);

void FUN_0202aaec(unsigned char *out, int len) {
    unsigned int seed;
    unsigned char digest[0x14];
    char ctx[0x5c];
    int count;
    int i;

    if (DAT_02108a80 == 0) {
        DAT_021070bc.x = DAT_021070bc.a * DAT_021070bc.x + DAT_021070bc.c;
        seed = (unsigned int)(DAT_021070bc.x >> 32);
        FUN_0202ac1c(&seed, 4);
    }
    count = 0;
    i = 0x14;
    while (count < len) {
        unsigned char b;
        if (i == 0x14) {
            int irq;
            int j;
            unsigned int carry;
            FUN_0202c694(ctx);
            irq = FUN_020683d4();
            FUN_0202c6e8(ctx, DAT_02108bf8, 0x14);
            FUN_0202c808(ctx, digest);
            carry = 1;
            for (j = 0x13; j >= 0; j--) {
                seed = DAT_02108bf8[j] + digest[j] + carry;
                DAT_02108bf8[j] = (unsigned char)seed;
                carry = seed >> 8;
            }
            FUN_020683e8(irq);
            i = 0;
        }
        b = digest[i++];
        if (b != 0) {
            out[count++] = b;
        }
    }
}
