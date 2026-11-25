// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0[2];
    unsigned char f8;
    unsigned char f9;
} Sub_24388;
typedef struct {
    char pad[0xa4];
    Sub_24388 *fa4;
} Mid_24388;
typedef struct {
    int f0;
    Mid_24388 *f4;
} G_24388;
extern G_24388 DAT_021181a0;
extern int FUN_020242b8(int *, Sub_24388 *);
extern int FUN_0202b388(int *, Sub_24388 *);
extern int FUN_0202430c(int *, Sub_24388 *);
int FUN_02024388(int *a) {
    Sub_24388 *r1 = DAT_021181a0.f4->fa4;
    if (r1 != 0) {
        if ((unsigned char)(r1->f8 + 0xf6) <= 1) {
            return FUN_020242b8(a, r1);
        }
        if (r1->f9 != 0) {
            return FUN_0202b388(a, r1);
        }
        return FUN_0202430c(a, r1);
    }
    *a = 0;
    return 0;
}
