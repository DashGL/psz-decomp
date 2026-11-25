// flags: -O4,p -noThumb
typedef struct { int f0[8]; int f20; } G_25618;
extern G_25618 DAT_02107054;
extern unsigned char DAT_021075aa[];
extern void FUN_02024028(void);
extern void FUN_02023f9c(void);
extern void FUN_02023fc8(int, int, int);
extern unsigned char *FUN_02024de8(unsigned char *, int, int);
extern unsigned char *FUN_02024f74(int, int, unsigned char *, int);
extern void FUN_02024890(unsigned char *, int);
extern void FUN_0202405c(void);
void FUN_02025618(void) {
    unsigned char *buf;
    unsigned char *p;
    FUN_02024028();
    FUN_02023f9c();
    FUN_02023fc8(0x44, 0x43, DAT_02107054.f20);
    buf = (unsigned char *)(unsigned char * volatile)DAT_021075aa;
    p = FUN_02024de8(buf, 7, 0);
    *p++ = 0xff;
    p = FUN_02024f74(0, 0x12c, p, p - buf);
    FUN_02024890(buf, p - buf);
    FUN_0202405c();
}
