// Verified 2026-11-13: full276-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
typedef void *(*Alloc_020da80c)(int, int);
struct S_020da80c {
    char pad[0xd0a];
    unsigned char f0;
    unsigned char f1_0 : 2;
    unsigned char f1_2 : 6;
    unsigned char f2_0 : 4;
    unsigned char f2_4 : 2;
    unsigned char f2_6 : 2;
};
extern void FUN_02065510(int, void *, int);
extern void *FUN_020dab60(int, int);
extern unsigned int FUN_020e9e9c(unsigned int);
extern int FUN_0202d788(void *, int);
extern void FUN_020dabc4(void);
extern void *DAT_0211dbb4[];

int FUN_020da80c(int *arg0) {
    int r;

    DAT_0211dbb4[3] = ((Alloc_020da80c)arg0[0])(1, 0x24);
    FUN_02065510(0, DAT_0211dbb4[3], 0x24);
    ((int *)DAT_0211dbb4[3])[0] = arg0[0];
    ((int *)DAT_0211dbb4[3])[1] = arg0[1];
    ((unsigned char *)DAT_0211dbb4[3])[9] = 1;
    ((unsigned char *)DAT_0211dbb4[3])[0x16] = 1;
    ((unsigned char *)DAT_0211dbb4[3])[8] = 1;
    DAT_0211dbb4[4] = FUN_020dab60(0x10, 0xd18);
    DAT_0211dbb4[0] = FUN_020dab60(2, 0x2300);
    DAT_0211dbb4[1] = FUN_020dab60(4, 0x58);
    DAT_0211dbb4[2] = FUN_020dab60(8, 0xc);
    FUN_02065510(0, DAT_0211dbb4[4], 0xd18);
    FUN_02065510(0, DAT_0211dbb4[0], 0x2300);
    FUN_02065510(0, DAT_0211dbb4[1], 0x58);
    FUN_02065510(0, DAT_0211dbb4[2], 0xc);
    ((struct S_020da80c *)DAT_0211dbb4[4])->f0 = *((unsigned char *)arg0 + 8);
    ((struct S_020da80c *)DAT_0211dbb4[4])->f1_0 = *((unsigned char *)arg0 + 9);
    ((int *)DAT_0211dbb4[2])[0] = arg0[0];
    ((int *)DAT_0211dbb4[2])[1] = arg0[1];
    ((int *)DAT_0211dbb4[2])[2] = 0;
    ((struct S_020da80c *)DAT_0211dbb4[4])->f2_0 = *((unsigned char *)arg0 + 10);
    ((struct S_020da80c *)DAT_0211dbb4[4])->f2_4 = *((unsigned char *)arg0 + 11);
    FUN_020e9e9c((unsigned int)DAT_0211dbb4[4]);
    r = FUN_0202d788(DAT_0211dbb4[0], 0x2300);
    if (r == 1 || r > 4) {
        FUN_020dabc4();
        return 0;
    }
    return 1;
}
