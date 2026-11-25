// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0[3];
    char *fc;
} G_847c8;
extern G_847c8 DAT_0211a500;
extern int DAT_0211a51c;
extern const char DAT_020fa950[];
extern int FUN_02078188(int);
extern int FUN_02084bf8(int *);
extern int FUN_02084cc0(int *);
extern void *FUN_020ba894(int);
extern void *FUN_020c3ca0(void *, const char *);
extern void FUN_02084830(void *, void *, unsigned char);
void FUN_020847c8(int a, unsigned char *b) {
    char *r4;
    if (DAT_0211a500.fc != 0 && FUN_02078188(a) != 0) {
        if (FUN_02084bf8(&DAT_0211a51c) == 0 || a == FUN_02084cc0(&DAT_0211a51c)) {
            r4 = DAT_0211a500.fc;
            if (*(void **)(r4 + 0x40) == 0) {
                void *p = FUN_020ba894(0x58);
                if (p != 0) {
                    p = FUN_020c3ca0(p, DAT_020fa950);
                }
                *(void **)(r4 + 0x40) = p;
            }
            if (*(void **)(r4 + 0x40) != 0) {
                FUN_02084830(r4 + ((a + 4) << 3), *(void **)(r4 + 0x40), b[1]);
            }
        }
    }
}
