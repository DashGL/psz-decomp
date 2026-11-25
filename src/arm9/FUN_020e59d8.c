// flags: -O4,p
extern char *FUN_020e961c(void);
extern int FUN_020e5b38(int, int, int, const int *, int);
extern int FUN_020e5be0(int, int, int, const char *);
#pragma thumb off
extern int FUN_020662b4(char *, int, const char *, ...);
extern void FUN_02065774(const void *, void *, int);
extern long long FUN_02067e0c(void);
extern void FUN_0206552c(const void *, void *, int);
#pragma thumb on

extern const char DAT_0210174c[];
extern const char DAT_02101838[];

int FUN_020e59d8(int p0, int p1, int p2, unsigned short p3, const int *p4, int p5) {
    char buf28[0x200];
    char buf18[0x10];
    int i;
    int len = 0;
    int res;

    if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0 ||
        ((*(unsigned char *)(FUN_020e961c() + 0x15) == 3 || *(unsigned char *)(FUN_020e961c() + 0x1a6) != 0) && p0 == 6)) {
        res = FUN_020e5b38(p0, p2, p3, p4, p5);
    } else {
        if (p4 != 0 && p5 != 0) {
            len = FUN_020662b4(buf28, 0x200, DAT_0210174c, p4[0]);
            for (i = 1; i < p5; i++) {
                int n = FUN_020662b4(buf18, 0x10, DAT_02101838, p4[i]);
                if ((unsigned int)(len + n + 1) > 0x200) {
                    break;
                }
                FUN_02065774(buf18, buf28 + len, n);
                len += n;
            }
        }
        buf28[len] = 0;
        res = FUN_020e5be0(*(int *)FUN_020e961c(), p0, p1, buf28);
    }
    if (p0 == 2 || p0 == 6 || (unsigned char)(p0 + 0xf8) <= 1) {
        *(unsigned char *)(FUN_020e961c() + 0x3cc) = p0;
        *(unsigned short *)(FUN_020e961c() + 0x3ce) = p3;
        *(int *)(FUN_020e961c() + 0x3d0) = p2;
        *(int *)(FUN_020e961c() + 0x454) = p1;
        *(int *)(FUN_020e961c() + 0x458) = p5;
        *(long long *)(FUN_020e961c() + 0x45c) = FUN_02067e0c();
        if (p4 != 0 && p5 != 0) {
            FUN_0206552c(p4, FUN_020e961c() + 0x3d4, p5 << 2);
        }
    }
    return res;
}
