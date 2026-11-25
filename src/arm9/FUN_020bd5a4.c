// flags: -O4,s
extern void FUN_020e07e0(void *);
extern int FUN_020e07a8(void);
extern int FUN_020e04a4(int);
extern void FUN_020c0c0c(void);
extern int FUN_020c0724(void);
extern int FUN_020c072c(void);
extern void FUN_020e0c50(void *, int, int, int, int, int, int, int, int);
extern void FUN_020e36d8(int, void *, int);
extern void FUN_020e1098(void *, int, void *, int);
extern void FUN_020bd628(void);
extern const int DAT_020f5b30[];
extern char DAT_020f5b64[];

void FUN_020bd5a4(char *a) {
    FUN_020e07e0(a);
    if (FUN_020e07a8() != 0 && FUN_020e04a4(0) == 0) {
        int r4;
        FUN_020c0c0c();
        FUN_020c0c0c();
        r4 = FUN_020c0724();
        FUN_020e0c50(a + 0x54, r4, 0x2d0c, DAT_020f5b30[0x10], DAT_020f5b30[0x11], 0, 0, FUN_020c072c(), 0x40);
        FUN_020e36d8(0, DAT_020f5b64, 8);
        FUN_020e1098(a + 0xecc, 0, (void *)FUN_020bd628, 0);
        a[0x1c] = 2;
    }
}
