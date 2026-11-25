// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x160, exact bytes and relocation targets.
extern char *FUN_020e961c(void);
extern long long FUN_02067e0c(void);
extern void *FUN_020d8b30(void *, int);
extern int FUN_020d81b0(void *, const char *, int);
extern int FUN_020d8244(void *);
extern unsigned short FUN_020d8248(void *);
extern int FUN_020e59d8(int, int, int, int, const int *, int);

extern const char DAT_02101794[];

int FUN_020e6b94(int p0, int p1) {
    int vals[3];
    int count;
    int type;
    if (p1 != 0 || (*(int *)(FUN_020e961c() + 0x1c) == 0 && *(unsigned short *)(FUN_020e961c() + 0x1a) == 0)) {
        *(int *)(FUN_020e961c() + 0x1bc) = 1;
        *(long long *)(FUN_020e961c() + 0x1c0) = FUN_02067e0c();
        *(int *)(FUN_020e961c() + 0xf4) = p0;
        *(int *)(FUN_020e961c() + 0x204) = 0;
        return 0;
    }
    if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0) {
        void *r6 = FUN_020d8b30(*(void **)(FUN_020e961c() + 0xe4), 0);
        char *s0 = FUN_020e961c();
        char *s1, *s2, *s3;
        *(int *)(s0 + 0xf4) = FUN_020d81b0(r6, DAT_02101794, 0);
        s1 = FUN_020e961c();
        *(int *)(s1 + 0x24) = FUN_020d8244(r6);
        s2 = FUN_020e961c();
        *(unsigned short *)(s2 + 0xa4) = FUN_020d8248(r6);
        s3 = FUN_020e961c();
        *(int *)(s3 + 0x204) = *(int *)(FUN_020e961c() + 0xf4);
        count = 1;
    } else {
        if (*(unsigned char *)(FUN_020e961c() + 0x15) == 1) {
            *(int *)(FUN_020e961c() + 0xf4) = p0;
        }
        *(int *)(FUN_020e961c() + 0x204) = p0;
        vals[1] = *(int *)(FUN_020e961c() + 0x1c);
        vals[2] = *(unsigned short *)(FUN_020e961c() + 0x1a);
        count = 3;
    }
    *(int *)(FUN_020e961c() + 0x1c8) = 6000;
    *(long long *)(FUN_020e961c() + 0x1cc) = FUN_02067e0c();
    *(int *)(FUN_020e961c() + 0x1bc) = 0;
    if (*(int *)(FUN_020e961c() + 0x208) != 0) {
        type = 11;
    } else {
        type = 1;
    }
    vals[0] = *(unsigned char *)(FUN_020e961c() + 0x15);
    {
        char *s4 = FUN_020e961c();
        char *s5 = FUN_020e961c();
        return FUN_020e59d8(type, p0, *(int *)(s4 + 0x24), *(unsigned short *)(s5 + 0xa4), vals, count);
    }
}
