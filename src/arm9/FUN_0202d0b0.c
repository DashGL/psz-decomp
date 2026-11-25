// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x194, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;

extern void *(*DAT_02107068)(u32);
extern void (*DAT_02107094)(void *);

extern void FUN_020656b8(void *, int, u32);
extern u32 FUN_0202c918(const u16 *, u32);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_0202cd50(void *, void *, u32);
extern void FUN_0202ced0(int, void *, void *, void *, u32, void *);
extern void FUN_0202cc2c(void *, void *, const void *, u32);

void FUN_0202d0b0(u16 *sl, const void *sp08, const u16 *sb, u32 r8, void *r7) {
    u16 *r4 = (u16 *)DAT_02107068(r8 << 3);
    u16 *r5;
    u32 r6;
    if (r4 == 0) {
        return;
    }
    r5 = r4 + r8;
    FUN_020656b8(sl + 1, 0, (r8 - 1) << 1);
    sl[0] = 1;
    for (r6 = (r8 - FUN_0202c918(sb, r8)) << 4; r6 < (r8 << 4); r6++) {
        if ((sb[r8 - ((int)r6 >> 4) - 1] & (0x8000u >> (r6 & 0xf))) != 0) {
            FUN_02065774(sp08, sl, r8 << 1);
            r6++;
            break;
        }
    }
    if (r6 < (r8 << 4)) {
        u32 fp = r8 << 1;
        do {
            FUN_0202cd50(r4, sl, r8);
            FUN_02065774(r4, sl, fp);
            if (r7 != 0) {
                FUN_0202ced0(0, sl, r7, sl, r8, r5);
            }
            if ((sb[r8 - ((int)r6 >> 4) - 1] & (0x8000u >> (r6 & 0xf))) != 0) {
                FUN_0202cc2c(r4, sl, sp08, r8);
                FUN_02065774(r4, sl, fp);
                if (r7 != 0) {
                    FUN_0202ced0(0, sl, r7, sl, r8, r5);
                }
            }
            r6++;
        } while (r6 < (r8 << 4));
    }
    DAT_02107094(r4);
}
