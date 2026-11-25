// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// flags: -O4,s
#pragma opt_strength_reduction off
extern void FUN_020a0e1c(void);
extern int FUN_02084bf8(void *);
extern int FUN_02085438(void);
extern int FUN_02086e3c(void);
extern char *FUN_0208724c(int);
extern int FUN_0206d3dc(void *, int *);
extern void FUN_020a1234(int, int);

extern int DAT_0211a658;
extern void *DAT_0211a624;
extern void *DAT_0211a50c;
extern void *DAT_0211a61c;
extern int DAT_0211a51c;
extern int *DAT_02108c64;
extern int DAT_020f4c34[];
extern signed char DAT_0211a3c4[];

struct S644 {
    int f00;
    unsigned short f04;
    char pad06[0x17e];
    unsigned char f184;
};

static inline struct S644 *get_s644(void) {
    return (struct S644 *)(FUN_0208724c(FUN_02086e3c()) + 0x644);
}

void FUN_020a0ea0(void) {
    int sp04[5];
    int sp00;
    unsigned char r0 = 0;
    unsigned char r3;
    int *r1;
    DAT_0211a658 = 0;
    if (DAT_0211a624 != 0) {
        r0 = *(unsigned char *)((char *)DAT_0211a624 + 0x76);
    }
    if (DAT_0211a50c != 0) {
        r3 = *(unsigned char *)((char *)DAT_0211a50c + 0x45);
    } else {
        r3 = 0;
    }
    if (DAT_0211a61c != 0) {
        *(unsigned char *)((char *)DAT_0211a61c + 4) = (unsigned char)(r0 * r3);
    }
    FUN_020a0e1c();
    if (FUN_02084bf8(&DAT_0211a51c) != 0 && FUN_02085438() >= 2) {
        get_s644()->f04 |= 0x80;
    }
    r1 = DAT_02108c64;
    sp04[0] = r1[9];
    sp04[1] = r1[10];
    sp04[2] = r1[11];
    sp04[3] = r1[12];
    sp04[4] = r1[13];
    sp00 = -1;
    if (FUN_0206d3dc(sp04, &sp00) != 0) {
        int r4;
        for (r4 = 0; r4 < 6; r4++) {
            if (sp00 == DAT_020f4c34[r4]) {
                get_s644()->f184 |= 1 << r4;
                break;
            }
        }
    }
    if (sp04[0] == 8) {
        FUN_020a1234(*(signed char *)((char *)DAT_02108c64 + 0x15) - 1, DAT_0211a3c4[0xd]);
    }
}
