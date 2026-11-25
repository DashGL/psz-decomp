// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x158, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S_2ac8c {
    int f0;
    int f4;
    int f8;
    unsigned char *fc;
};

extern void *(*DAT_02107068)(int);
extern void (*DAT_02107094)(void *);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02029f4c(void *, void *, int);
extern void FUN_0202a028(void *, void *, int);
extern void FUN_0202a6a0(void *, void *, int);
extern int FUN_0202a430(void *, void *);
extern void FUN_020245b4(void *, int, int, int, void *);

void FUN_0202ac8c(struct S_2ac8c *p0) {
    unsigned char *r5 = p0->fc;
    unsigned char *r4 = (unsigned char *)DAT_02107068(0x83);
    int len;
    if (r4 == 0) {
        r5[0x455] = 9;
        return;
    }
    r4[0] = 0x14;
    r4[1] = 3;
    r4[2] = 0;
    r4[3] = 0;
    r4[4] = 1;
    r4[5] = 1;
    FUN_020656b8(r5 + 0x1cc, 0, 8);
    r4[6] = 0x16;
    r4[7] = 3;
    r4[8] = 0;
    r4[9] = 0;
    r4[0xa] = 0x28;
    r4[0xb] = 0x14;
    r4[0xc] = 0;
    r4[0xd] = 0;
    r4[0xe] = 0x24;
    FUN_02065774(r5 + 0x3a4, r5 + 0x3fc, 0x58);
    FUN_02029f4c(r5, r4 + 0xf, 0);
    FUN_02065774(r5 + 0x3fc, r5 + 0x3a4, 0x58);
    FUN_02065774(r5 + 0x2ec, r5 + 0x348, 0x5c);
    FUN_0202a028(r5, r4 + 0x1f, 0);
    FUN_02065774(r5 + 0x348, r5 + 0x2ec, 0x5c);
    FUN_0202a6a0(r5, r4 + 0xb, 0x28);
    len = FUN_0202a430(r5, r4 + 6);
    FUN_020245b4(r4, len + 6, 0, 0, p0);
    DAT_02107094(r4);
}
