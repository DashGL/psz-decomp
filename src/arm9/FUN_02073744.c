// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_02036094(void *);
extern void FUN_020737a0(void *);
extern void FUN_020360a4(void *, int, int, int);
extern int FUN_02073198(void);
extern int FUN_02086e3c(void);
extern int FUN_020870c4(int);
extern void FUN_020c0ca8(void *);
extern int FUN_020c0788(void);
extern void FUN_020b3bd8(void *, int, int, void *);
extern void FUN_020bce3c(void *);
extern char DAT_0211a230[];
typedef struct {
    int f0;
    int f4;
    int f8[20];
} S_73744;
void FUN_02073744(void) {
    int sp0[3];
    S_73744 s;
    int r4;
    FUN_02036094(&s);
    FUN_020737a0(s.f8);
    FUN_020360a4(&s, 6, 2, 0x58);
    s.f4 = -1;
    s.f4 = FUN_02073198();
    r4 = FUN_020870c4(FUN_02086e3c());
    FUN_020c0ca8(sp0);
    FUN_020b3bd8(s.f8, FUN_020c0788(), r4, sp0);
    FUN_020bce3c(&s);
    DAT_0211a230[0xd] = 0x1e;
}
