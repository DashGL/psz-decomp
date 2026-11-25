// flags: -O4,s -noThumb
typedef struct {
    unsigned int f00;
    unsigned int f04;
    unsigned int f08;
    unsigned int f0c;
    unsigned int f10;
    unsigned int f14;
    int f18;
    int f1c;
    int f20;
} State;
extern State DAT_02118600;
extern unsigned int DAT_02118624[];
extern unsigned char DAT_021188e0[];
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_02069a60(unsigned int);
extern void FUN_0206740c(void *, unsigned int);
extern int FUN_020688c0(unsigned int, unsigned int, unsigned int);
extern void FUN_02069fec(void);
unsigned int FUN_02069c30(unsigned int flags) {
    unsigned int saved = FUN_020683d4();
    if (DAT_02118600.f08 == 0) {
        FUN_020683e8(saved);
        return 1;
    }
    if (DAT_02118600.f1c >= 8) {
        if (!(flags & 1)) {
            FUN_020683e8(saved);
            return 0;
        }
        do {
            FUN_02069a60(1);
        } while (DAT_02118600.f1c >= 8);
        if (DAT_02118600.f08 == 0) {
            FUN_020683e8(saved);
            return 1;
        }
    }
    FUN_0206740c(DAT_021188e0, 0x1800);
    if (FUN_020688c0(7, DAT_02118600.f08, 0) < 0) {
        if (!(flags & 1)) {
            FUN_020683e8(saved);
            return 0;
        }
        while (DAT_02118600.f1c >= 8 || FUN_020688c0(7, DAT_02118600.f08, 0) < 0) {
            FUN_020683e8(saved);
            FUN_02069a60(0);
            saved = FUN_020683d4();
            FUN_0206740c(DAT_021188e0, 0x1800);
            if (DAT_02118600.f08 == 0) {
                FUN_020683e8(saved);
                return 1;
            }
        }
    }
    DAT_02118624[DAT_02118600.f18] = DAT_02118600.f08; if (++DAT_02118600.f18 > 8) { DAT_02118600.f18 = 0; }
    DAT_02118600.f08 = 0;
    DAT_02118600.f0c = 0;
    DAT_02118600.f1c++;
    DAT_02118600.f20++;
    FUN_020683e8(saved);
    if (flags & 2) {
        FUN_02069fec();
    }
    return 1;
}
