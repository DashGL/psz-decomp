// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x194, exact bytes and relocation targets.
// flags: -O4,s -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *(*DAT_02107068)(u32);
extern void (*DAT_02107094)(void *);
extern volatile u16 DAT_020f69cc[];

extern u32 FUN_02028a8c(void);
extern void FUN_0202aaec(void *, int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02028898(void *, u32, u16);
extern void FUN_020245b4(void *, int, int, int, void *);
extern void FUN_0202a6a0(void *, void *, int);

void FUN_0202ade4(u8 *r7) {
    u8 *r4 = *(u8 **)(r7 + 0xc);
    u8 *r5 = (u8 *)DAT_02107068(0x98);
    u8 *r0;
    u32 t;
    u32 r6;
    int r1;
    if (r5 == 0) {
        r4[0x455] = 9;
        return;
    }
    r5[9] = 3;
    r5[0xa] = 0;
    t = FUN_02028a8c();
    r4[0x34] = (u8)(t >> 24);
    r4[0x35] = (u8)(t >> 16);
    r4[0x36] = (u8)(t >> 8);
    r4[0x37] = (u8)t;
    FUN_0202aaec(r4 + 0x38, 0x1c);
    FUN_02065774(r4 + 0x34, r5 + 0xb, 0x20);
    FUN_02028898(r4, *(u32 *)(r7 + 0x1c), *(u16 *)(r7 + 0x18));
    if (r4[0x30] == 0) {
        r5[0x2b] = 0;
        r0 = r5 + 0x2c;
    } else {
        r5[0x2b] = 0x20;
        FUN_02065774(r4 + 0x74, r5 + 0x2c, 0x20);
        r0 = r5 + 0x4c;
    }
    r0[0] = 0;
    r0[1] = 4;
    r0 += 2;
    for (r6 = 0; r6 < 2; r6++) {
        r0[0] = (u8)((int)DAT_020f69cc[r6] >> 8);
        r0[1] = (u8)DAT_020f69cc[r6];
        r0 += 2;
    }
    r0[0] = 1;
    r1 = (int)(r0 + 2 - r5);
    r6 = (u32)(r1 - 5);
    r0[1] = 0;
    r1 = (int)(r6 - 4);
    r5[0] = 0x16;
    r5[1] = 3;
    r5[2] = 0;
    r5[3] = (u8)((int)r6 >> 8);
    r5[4] = (u8)r6;
    r5[5] = 1;
    r5[6] = (u8)(r1 >> 16);
    r5[7] = (u8)(r1 >> 8);
    r5[8] = (u8)r1;
    FUN_020245b4(r5, (int)r6 + 5, 0, 0, r7);
    FUN_0202a6a0(r4, r5 + 5, (int)r6);
    DAT_02107094(r5);
}
