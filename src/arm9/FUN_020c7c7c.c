// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
struct G {
    int f0;
    int f4;
    char pad[8];
    char f10;
    char f11[4];
    char f15[0x3b];
    int f50;
    int f54;
    int f58;
};

extern char DAT_0211cfc8[];
extern struct G DAT_0211cf6c;
extern signed char DAT_0211d008[];
extern char DAT_020fcd44[];
extern char DAT_0211cf74[];
extern void FUN_02003c8c(char *, const char *);
extern void FUN_020c781c(void);
extern void FUN_02066274(char *, const char *, const char *);
extern int FUN_020c7c00(const char *, int, char *);
extern int FUN_020c7468(int, int, int);
extern int FUN_02003c70(const char *);
extern void FUN_020014d4(char *, const char *, int);
extern void FUN_020c7c48(void);

void FUN_020c7c7c(const char *r4) {
    char buf[0x40];
    int r5;
    FUN_02003c8c(DAT_0211cfc8, r4);
    DAT_0211cf6c.f4 = -1;
    FUN_020c781c();
    r5 = DAT_0211d008[0];
    if (r5 == 0) {
        FUN_02066274(buf, DAT_020fcd44, r4);
    }
    if (FUN_020c7c00(r5 ? (const char *)DAT_0211d008 : buf, 0x6cfc, DAT_0211cf74) != 0) {
        int fd = FUN_020c7468(2, 2, 0);
        DAT_0211cf6c.f4 = fd;
        if (fd != -1) {
            DAT_0211cf6c.f10 = 9;
            r5 = FUN_02003c70(r4);
            FUN_020014d4(DAT_0211cf6c.f15, r4, r5 + 1);
            DAT_0211cf6c.f50 = r5 + 6;
            FUN_020c7c48();
            DAT_0211cf6c.f58 = 0;
        }
    }
}
