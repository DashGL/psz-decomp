// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets; argument/return contract corrected.
// Return contract corrected from explicit producer and consumed caller evidence.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8[2];
} Frame_54618;
extern void FUN_02065510(int, Frame_54618 *, int);
extern int FUN_02054404(int, int, int, int, unsigned short, Frame_54618 *);
int FUN_02054618(int a, int b, int c, int d, unsigned short e, unsigned short f) {
    Frame_54618 sp8;
    FUN_02065510(0, &sp8, 0x10);
    sp8.f0 = 3;
    sp8.f4 = f;
    sp8.f6 = f;
    return FUN_02054404(a, b, c, d, e, &sp8);
}
