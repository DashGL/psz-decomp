// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x118, exact bytes and relocation targets.
// flags: -O4,p
#pragma opt_propagation off
extern int FUN_020d81b0(void *, void *, int);
extern double FUN_020d8224(void *, void *, double);
extern char *FUN_020d8158(void *, void *, const char *);
extern int FUN_02003e24(const char *, const char *);
extern int FUN_020083f4(const char *, const char *);
extern char *DAT_0211dbac;
extern const char DAT_02100090[];

int FUN_020d8b8c(void *a, void *b) {
    char *list = DAT_0211dbac;
    int off = 0x59c;
    int res;
    switch (*(int *)(list + 0x69c)) {
    case 0:
        res = FUN_020d81b0(a, list + off, 0) - FUN_020d81b0(b, list + off, 0);
        break;
    case 1: {
        double d = FUN_020d8224(a, list + off, 0.0) - FUN_020d8224(b, list + off, 0.0);
        if (*(int *)(DAT_0211dbac + 0x6a0) == 0) {
            d = 0.0 - d;
        }
        if ((float)d > 0.0f) {
            return 1;
        }
        return -((float)d < 0.0f);
    }
    case 2:
        res = FUN_02003e24(FUN_020d8158(a, list + off, DAT_02100090), FUN_020d8158(b, list + off, DAT_02100090));
        break;
    case 3:
        res = FUN_020083f4(FUN_020d8158(a, list + off, DAT_02100090), FUN_020d8158(b, list + off, DAT_02100090));
        break;
    default:
        return 0;
    }
    if (*(int *)(DAT_0211dbac + 0x6a0) == 0) {
        res = -res;
    }
    return res;
}
