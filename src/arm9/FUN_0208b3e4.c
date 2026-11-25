// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    unsigned short f8;
    char pad[6];
    char f10[8];
} Frame_8b3e4;
typedef struct {
    int f0[5];
    int f14;
    int f18;
} G_8b3e4;
extern G_8b3e4 DAT_020f3e84;
extern void FUN_02071d0c(void *);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c32b4(void *, int);
void FUN_0208b3e4(char *a, int b) {
    Frame_8b3e4 sp0;
    int i;
    FUN_02071d0c(&sp0.f8);
    sp0.f0 = DAT_020f3e84.f14;
    sp0.f4 = DAT_020f3e84.f18;
    for (i = 0; i < 7; sp0.f0 += 0xa000, i++) {
        if (i < b) {
            if (i < 5) {
                sp0.f8 = 0x28;
            } else {
                sp0.f8 = 0x2a;
            }
        } else if (i < 5) {
            sp0.f8 = 0x29;
        } else {
            continue;
        }
        FUN_0208971c(sp0.f10, &sp0);
        FUN_020c32b4(&sp0.f8, *(int *)(a + 0x20));
    }
}
