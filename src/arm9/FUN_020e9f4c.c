// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_0211e5e8[];
extern char DAT_0211e5f4[];
extern void FUN_020ea648(int);
extern void FUN_0205fd54(char *, int);
extern int FUN_020ea514(int, int, char *);
extern void FUN_02068728(void);
extern void FUN_02065774(const void *, void *, int);
extern unsigned short FUN_0205fe7c(char *, char *, int);
extern void FUN_020ea56c(int, int, char *);
extern int FUN_020ea5b4(char *, int, int, char *);
extern int FUN_020ea5e4(void);

int FUN_020e9f4c(int param_1, char *param_2) {
    int r4 = DAT_0211e5e8[2];
    int i;
    FUN_020ea648(param_1);
    FUN_0205fd54(param_2 + 0x200, 0xa001);
    for (i = 0; i < 2; i++, r4 += 0x100) {
        if (FUN_020ea514(r4, 0x100, param_2) == 0) {
            FUN_02068728();
            return 0;
        }
        FUN_02065774(DAT_0211e5f4, param_2 + 0xf0, 0xe);
        *(unsigned short *)(param_2 + 0xfe) = FUN_0205fe7c(param_2 + 0x200, param_2, 0xfe);
        do {
            FUN_020ea56c(r4, 0x100, param_2);
        } while (FUN_020ea5b4(param_2, r4, 0x100, param_2 + 0x100) == 0);
    }
    if (FUN_020ea5e4() != 0) {
        return 1;
    }
    return 0;
}
