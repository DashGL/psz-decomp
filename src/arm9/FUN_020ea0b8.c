// flags: -O4,p
typedef struct {
    unsigned char buf[4][0x100];
    unsigned char tmp[0x100];
    unsigned char ctx[0x100];
} S_ea0b8;
extern struct { int a; int b; int c; } DAT_0211e5e8;
extern unsigned short FUN_0205fe7c(void *, void *, int);
extern void FUN_020ea56c(int, int, void *);
extern int FUN_020ea5b4(void *, int, int, void *);
extern int FUN_020ea5e4(void);

int FUN_020ea0b8(S_ea0b8 *a) {
    int r4 = DAT_0211e5e8.c;
    unsigned char *p = a->buf[0];
    int i;
    for (i = 0; i < 4; p += 0x100, i++, r4 += 0x100) {
        *(unsigned short *)(p + 0xfe) = FUN_0205fe7c(a->ctx, p, 0xfe);
        do {
            FUN_020ea56c(r4, 0x100, p);
        } while (FUN_020ea5b4(p, r4, 0x100, a->tmp) == 0);
    }
    if (FUN_020ea5e4() != 0) {
        return 1;
    }
    return 0;
}
