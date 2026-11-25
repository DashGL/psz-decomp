// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
} S8_9a33c;
typedef struct {
    int f0;
    int f4;
    int f8;
} S12_9a33c;
extern void FUN_020c0488(char *);
extern int FUN_02044c84(char *, char *, char *, unsigned short);
extern void FUN_020c0484(char *, int);
extern void FUN_0200c938(void *, int);
extern int FUN_02044bd4(char *, char *, S12_9a33c *, S8_9a33c *);
extern void *FUN_020be450(void);
extern void FUN_020be4f8(void *, int, int);
void FUN_0209a33c(char *a, int b) {
    char sp20[0x28];
    char sp14[0xc];
    S12_9a33c sp8;
    S8_9a33c sp0;
    FUN_020c0488(sp14);
    if (FUN_02044c84(sp20, a + 4, a + 0x10, *(unsigned short *)(a + 0x1c)) != 0) {
        FUN_020c0484(sp14, 0x10);
        FUN_0200c938(&sp8, 0xc);
        sp8.f4 = 3;
        FUN_0200c938(&sp0, 8);
        sp0.f4 = b;
        if (FUN_02044bd4(a, sp14, &sp8, &sp0) != 0) {
            FUN_020be4f8(FUN_020be450(), *(int *)a, 2);
        }
    }
}
