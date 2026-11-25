// Verified 2026-11-13: full100-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
} S_c8758;
typedef struct {
    char c[16];
} Copy16_c8758;
typedef struct {
    int f0[4];
    Copy16_c8758 f10;
    char pad[0x1c];
} Frame_c8758;
extern S_c8758 *FUN_020c7e54(void);
extern int FUN_020c6f30(int, Frame_c8758 *, void *, int, int);
extern void FUN_020c7e74(void);
extern void FUN_020c6eec(int, int);
int FUN_020c8758(char *a) {
    Frame_c8758 sp4;
    int index;
    S_c8758 *r4 = FUN_020c7e54();
    if (r4->fc == 0) {
        return 3;
    }
    if (a == 0 || a[0] == 0) {
        return 0xa;
    }
    sp4.f10 = *(Copy16_c8758 *)a;
    if ((index = FUN_020c6f30(r4->f8, &sp4, (void *)FUN_020c7e74, 0, 0)) != -1) {
        FUN_020c6eec(r4->f8, index);
    }
    return 0;
}
