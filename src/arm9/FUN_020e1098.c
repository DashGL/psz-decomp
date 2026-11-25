// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p
struct S18 {
    char pad0[0x24];
    int f24;
    char pad1[6];
    unsigned short str[0x1a];
    char pad2[6];
    int f68;
    int f6c;
    int f70;
    int f74;
};
extern struct S18 *DAT_0211dcbc;
extern int FUN_020e0558(void);
extern void FUN_020654b4(int, void *, int);
extern unsigned int FUN_020e0c38(const unsigned short *);
extern void FUN_020654dc(const void *, void *, int);
extern int FUN_020e088c(void);
extern void FUN_020e1ebc(int, int);
extern void FUN_020e170c(int);
extern void FUN_020c7c7c(int);

int FUN_020e1098(const unsigned short *param_1, int param_2, int param_3, int param_4) {
    unsigned int len;
    if (param_1 == 0) {
        return 0;
    }
    if (FUN_020e0558() != 0 || DAT_0211dcbc->f24 != 0) {
        return 0;
    }
    DAT_0211dcbc->f70 = param_3;
    DAT_0211dcbc->f74 = param_4;
    if (param_1 == 0 || *param_1 == 0) {
        len = 0;
    } else {
        FUN_020654b4(0, DAT_0211dcbc->str, 0x34);
        if (FUN_020e0c38(param_1) <= 0x19u) {
            len = FUN_020e0c38(param_1);
        } else {
            len = 0x19;
        }
        FUN_020654dc(param_1, DAT_0211dcbc->str, len << 1);
    }
    DAT_0211dcbc->str[len] = 0;
    if (FUN_020e088c() != 4) {
        FUN_020e1ebc(2, -0xea6a);
        return 1;
    }
    FUN_020e170c(1);
    FUN_020c7c7c(DAT_0211dcbc->f68);
    return 1;
}
