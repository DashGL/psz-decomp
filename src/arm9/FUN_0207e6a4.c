// flags: -O4,s
typedef struct { unsigned char b[6]; } Six;
typedef struct { int x, y, z; } Vec;
extern int DAT_020f2bbc[];
extern int DAT_020f2bc8[];
extern unsigned short DAT_020f2a16[];
extern unsigned short DAT_020f2a1c[];
extern char DAT_0211c844[];
extern void FUN_0207a514(void *, void *, int, int, int);
extern void FUN_0207a3f4(void *, int, int, int);
extern int FUN_0207b860(void *, int);

void FUN_0207e6a4(char *s, void *p, int n) {
    int kind, base, range, a, b, scale;
    Six copy, desc;
    Vec zero;

    FUN_0207a514(s, p, n, 1, 5);
    *(int *)(s + 268) = 1;
    base = 4096;
    range = 0;
    a = 0;
    b = 0;
    kind = *(int *)(s + 280);
    if (kind >= 0 && kind < 3) {
        base = (DAT_020f2bbc[kind] << 12) / 10;
        range = (DAT_020f2bc8[kind] << 12) / 10;
        a = DAT_020f2a16[kind];
        b = DAT_020f2a1c[kind];
    }
    *(int *)(s + 272) += FUN_0207b860(DAT_0211c844, 20) - 20;
    FUN_0207a3f4(&desc, 1, *(int *)(s + 276), 1);
    copy = desc;
    {
        int t = (*(int *)(s + 76) * copy.b[2]) / *(int *)(s + 272);
        *(int *)(s + 72) = 3 * (t * *(int *)(s + 76));
    }
    *(int *)(s + 384) = base + FUN_0207b860(DAT_0211c844, range);
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    *(Vec *)(s + 80) = zero;
    *(unsigned short *)(s + 284) = 16384 - (unsigned short)FUN_0207b860(DAT_0211c844, 2 * a);
    {
        unsigned short v = (unsigned short)(-b + FUN_0207b860(DAT_0211c844, 2 * b));
        *(unsigned short *)(s + 286) = v + *(unsigned short *)(s + 106);
    }
    *(int *)(s + 380) = 8;
    *(int *)(s + 172) = 2;
}
