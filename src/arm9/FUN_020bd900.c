// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p
struct InfoBD900 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};

struct SelfBD900 {
    char pad00[0x1c];
    signed char f1c;
    char pad1d[0xef7];
    int ff14;
    unsigned char ff18;
    char padf19[0x27];
    int ff40;
    int ff44;
    int ff48;
    int ff4c;
    int ff50;
    int ff54;
};

extern const char DAT_020fca10[];
extern struct InfoBD900 DAT_0211b3bc;
extern int PTR_0211b3bc;
extern const char DAT_020fca18[];
extern const char DAT_020fca20[];
extern int DAT_0211b3c8;
extern const char DAT_020f5b98[];
extern const char DAT_020f5ba0[];
extern const char DAT_020f5b90[];
extern const char DAT_020f5ba8[];
extern void FUN_020bd8e0(void);
extern void FUN_020bd7e0(void);

extern int FUN_020c09a4(void);
extern void FUN_020e35d4(int, const char *, void *);
extern unsigned long long FUN_020c0c68(void);
extern int FUN_020038ec(char *, int, const char *, ...);
extern int FUN_020e11a4(int, char *, void *, int, void *, int);

int FUN_020bd900(struct SelfBD900 *self, int a1, int a2, int a3, int a4) {
    char buf[0x80];
    int res = 0;

    if (self->f1c == 4) {
        unsigned long long v;
        self->ff40 = self->ff14 * 10 + (FUN_020c09a4() == 1 ? 1 : 0);
        FUN_020e35d4(0, DAT_020fca10, &self->ff40);
        DAT_0211b3bc.f04 = a1;
        DAT_0211b3bc.f10 = a2;
        DAT_0211b3bc.f00 = a3;
        DAT_0211b3bc.f0c = a4;
        FUN_020e35d4(0, DAT_020fca18, &PTR_0211b3bc);
        FUN_020e35d4(0, DAT_020fca20, &DAT_0211b3c8);
        v = FUN_020c0c68();
        self->ff44 = (int)(v >> 32);
        self->ff48 = (int)(v & 0xffffffffULL);
        FUN_020e35d4(0, DAT_020f5b98, &self->ff44);
        FUN_020e35d4(0, DAT_020f5ba0, &self->ff48);
        self->ff4c = self->ff54;
        self->ff4c ^= self->ff44;
        self->ff4c ^= self->ff48;
        FUN_020e35d4(0, DAT_020f5b90, &self->ff4c);
        FUN_020038ec(buf, 0x7e, DAT_020f5ba8, self->ff40, DAT_0211b3bc.f04, DAT_0211b3bc.f10);
        res = FUN_020e11a4(self->ff18, buf, (void *)FUN_020bd7e0, 0, (void *)FUN_020bd8e0, 0);
        if (res == 1) {
            self->f1c = 9;
        }
    }
    return res;
}
