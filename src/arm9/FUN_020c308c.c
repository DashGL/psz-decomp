// flags: -O4,p
// veneer: 8
extern unsigned char DAT_0211c8f0[];
extern unsigned char DAT_0211c90c[];
extern unsigned char DAT_0211c9b8[];
extern unsigned char DAT_0211c970[];
extern unsigned char DAT_0211c928[];
extern unsigned char DAT_0211ca50[];
extern unsigned char DAT_0211caf0[];
extern void FUN_020c33f0(void);
extern void FUN_020132ec(void *);
extern void FUN_020130e8(void *);
extern void FUN_02012c34(void);
extern int FUN_02012cf4(void *, int, int, int, int, int);
extern void FUN_020c3120(void *, void *, void *);
extern void FUN_02012c00(int);
extern void FUN_02020558(void *, int);
extern void FUN_02014b34(void *, unsigned int, void (*)(void));

void FUN_020c308c(void) {
    FUN_020132ec(DAT_0211c8f0);
    FUN_020132ec(DAT_0211c90c);
    FUN_020130e8(DAT_0211c8f0);
    FUN_020130e8(DAT_0211c90c);
    FUN_02012c34();
    FUN_02012cf4(DAT_0211c8f0, 0, 0x80, 0, 0x20, 0);
    FUN_02012cf4(DAT_0211c90c, 0, 0x80, 0, 0x20, 1);
    FUN_020c3120(DAT_0211c9b8, DAT_0211c970, DAT_0211c928);
    FUN_02012c00(0x7f);
    FUN_02020558(DAT_0211ca50, 10);
    FUN_02014b34(DAT_0211caf0, 10, FUN_020c33f0);
}
