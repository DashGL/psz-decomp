// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern unsigned char *FUN_0202e424(void);
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
extern void FUN_02065774(const void *, void *, int);
extern int FUN_020548c0(void *, int, void *, unsigned short);
extern void FUN_020669dc(void *);

extern int DAT_02108c1c;
extern int DAT_02108c14;
extern struct {
    unsigned char pad[0x24];
    int f24;
} DAT_02108c10;
extern void FUN_020300a4(void);

int FUN_0202ff1c(int r4, const void *sb, int r8, const void *r6, int sp20) {
    int r5 = FUN_020683d4();
    int total;
    unsigned char *r7;
    if (FUN_0202e424() == 0) {
        FUN_020683e8(r5);
        return -1;
    }
    FUN_0206719c(&DAT_02108c1c);
    r7 = FUN_0202e424();
    if (r7 == 0) {
        FUN_02067220(&DAT_02108c1c);
        FUN_020683e8(r5);
        return -1;
    }
    if (*(int *)(r7 + 0x2260) != 9 || r7[0x226b] == 1) {
        FUN_02067220(&DAT_02108c1c);
        FUN_020683e8(r5);
        return -4;
    }
    FUN_02065774(sb, r7 + 0xf00, r8);
    if (sp20 > 0) {
        FUN_02065774(r6, r7 + 0xf00 + r8, sp20);
    }
    total = r8 + sp20;
    switch (FUN_020548c0((void *)FUN_020300a4, r4, r7 + 0xf00, (unsigned short)total)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        FUN_02067220(&DAT_02108c1c);
        FUN_020683e8(r5);
        return -5;
    case 2:
        FUN_020669dc(&DAT_02108c14);
        switch (DAT_02108c10.f24) {
        case 0:
            break;
        case 1:
        default:
            FUN_02067220(&DAT_02108c1c);
            FUN_020683e8(r5);
            return -5;
        }
        break;
    }
    FUN_02067220(&DAT_02108c1c);
    FUN_020683e8(r5);
    return total;
}
