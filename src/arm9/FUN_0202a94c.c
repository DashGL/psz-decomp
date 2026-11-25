// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

extern void *(*DAT_02107068)(u32);
extern void (*DAT_02107094)(void *);

extern u8 *FUN_0202430c(u32 *, void *);
extern void FUN_020243ec(int, void *);
extern int FUN_0202a634(void *, u32, void *);
extern void FUN_020298a4(void *, void *);
extern void FUN_0202a6a0(void *, void *, u32);
extern void FUN_0202a6cc(void *, void *);

int FUN_0202a94c(u8 *r5) {
    u32 sp00;
    u8 *r4 = *(u8 **)(r5 + 0xc);
    u8 *r0;
    u8 *r6;
    do {
        r0 = FUN_0202430c(&sp00, r5);
        if (sp00 == 0) {
            r4[0x455] = 9;
            return 9;
        }
    } while (sp00 < 5);
    if (r0[0] == 0x80) {
        if (r4[0x454] != 0 && r4[0x455] == 0) {
            sp00 = r0[1];
            FUN_020243ec(2, r5);
            r6 = (u8 *)DAT_02107068(sp00);
            if (r6 == 0) {
                r4[0x455] = 9;
                return 9;
            }
            if (FUN_0202a634(r6, sp00, r5) == 0 && r6[0] == 1) {
                FUN_020298a4(r4, r6 + 1);
            } else {
                r4[0x455] = 9;
            }
            FUN_0202a6a0(r4, r6, sp00);
            DAT_02107094(r6);
        } else {
            r4[0x455] = 9;
        }
    } else {
        sp00 = (r0[3] << 8) + r0[4] + 5;
        if (sp00 > 0x4805) {
            r4[0x455] = 9;
            return 9;
        }
        r6 = (u8 *)DAT_02107068(sp00);
        if (r6 == 0) {
            r4[0x455] = 9;
            return 9;
        }
        if (FUN_0202a634(r6, sp00, r5) != 0) {
            DAT_02107094(r6);
            r4[0x455] = 9;
            return 9;
        }
        FUN_0202a6cc(r4, r6);
    }
    return r4[0x455];
}
