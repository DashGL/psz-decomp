// flags: -O4,s
extern char DAT_020f70d0[], DAT_020f70ec[], DAT_020f71c0[], DAT_020f71e4[];
extern unsigned int DAT_0211a1f4;
extern char *DAT_02108d08;
extern void FUN_02039230(void *, int, int, void *, int);
extern void FUN_0208dea8(void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_0203666c(void *);
extern void FUN_0203955c(void *);
extern void FUN_020ab6a4(void *);
extern void FUN_0206e7a0(int);
extern void FUN_0203c5e8(void *, void *);
#define W(n) (*(unsigned int *)(s + (n)))
#define P(n) (*(void **)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
#define B(n) (*(unsigned char *)(s + (n)))
char *FUN_0203c3c0(char *s, int arg, int other, void *key, int fifth) {
    int k, i, j;
    char *p;
    FUN_02039230(s, arg, other, key, fifth);
    FUN_0208dea8(s + 0x24c);
    P(0) = DAT_020f70d0;
    P(0x20) = DAT_020f70ec;
    P(0xf0) = DAT_020f71c0;
    P(0x24c) = DAT_020f71e4;
    W(0x250) = 0; H(0x254) = 0; H(0x256) = 0;
    B(0x258) = 0; B(0x259) = 0; B(0x25a) = 0; B(0x25b) = 0;
    W(0x25c) = 0; W(0x264) = 0; W(0x268) = 0; W(0x26c) = 0;
    H(0x27c) = 0; W(0x28c) = 0; H(0x290) = 0;
    B(0x292) = 0; B(0x293) = 0; W(0x294) = 0;
    FUN_0200c938(s + 0x7f8, 28);
    p = s + 0x814;
    do {
        FUN_0203666c(p);
        p += 100;
    } while (p < s + 0xad0);
    FUN_0200c938(s + 0xad0, 7);
    W(0xafc) = ~0u; W(0xb00) = 0; W(0xb50) = 0; W(0xbac) = ~0u;
    H(0xd8c) = 0; B(0xd8e) = 0; B(0xd8f) = 0; W(0xd90) = 0;
    W(0xe18) = ~0u; B(0xe1c) = 0; B(0xe1d) = 0; H(0xe1e) = 0;
    W(0xe20) = 0; W(0xe24) = 0; W(0xe28) = 0; W(0xe2c) = 0; W(0x100) = 0;
    for (k = 0; k < 4; k++) *(unsigned int *)((s + 4 * k) + 0x298) = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            *(unsigned int *)(((s + 12 * i) + 4 * j) + 0xad8) = j;
            *(unsigned short *)(((s + 6 * i) + 2 * j) + 0x270) = 0;
        }
    }
    W(0x280) = 0; W(0x284) = 0; W(0x288) = 0;
    W(0xaf0) = 0; W(0xaf4) = 0; W(0xaf8) = 0;
    FUN_0203955c(s + 0x2a8);
    for (i = 0; i < 80; i++) FUN_0203955c(s + 0x2b8 + 16 * i);
    W(0x250) |= 4;
    W(0xf8) |= 1;
    W(0xf8) |= 0x08000000;
    FUN_020ab6a4(s);
    if (DAT_0211a1f4) FUN_0206e7a0(arg);
    p = DAT_02108d08;
    if (p) {
        void *source = *(void **)(p + 0x4c0);
        if (source) FUN_0203c5e8(s + 0xd94, source);
    }
    return s;
}
