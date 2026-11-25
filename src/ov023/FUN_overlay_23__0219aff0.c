// flags: -O4,s
#pragma opt_propagation off
extern int DAT_0219d9a4;
extern int UNK_0219d9a4;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern void FUN_020bc610(int *, const int *, const int *);

static inline int FX_Mul(int v1, int v2) {
    return (int)(((long long)v1 * v2 + 0x800LL) >> 12);
}

void FUN_overlay_23__0219aff0(int *p) {
    char *c = (char *)p[1];
    int ratio;
    int factor;
    int forward;
    unsigned short start;
    unsigned short delta;
    unsigned short angle;
    int ok;

    p[6] += FUN_02036c34(c);
    ok = (p[6] <= DAT_0219d9a4);
    if (ok) {
        int *pr;
        FUN_020bc610(&ratio, p + 6, &UNK_0219d9a4);
        pr = &ratio;
        start = ((unsigned short *)p)[10];
        angle = (unsigned short)FX_Mul(*pr, 0x4000);
        factor = DAT_020ed83c[(angle >> 4) * 2];
        delta = ((unsigned short *)p)[11] - start;
        forward = 1;
        if (delta >= 0x8000) {
            delta = 0x10000 - delta;
            forward = 0;
        }
        if (forward) {
            angle = start + (int)(((long long)factor * (unsigned int)delta + 0x800LL) >> 12);
        } else {
            angle = start - (int)(((long long)factor * (unsigned int)delta + 0x800LL) >> 12);
        }
        *(unsigned short *)(c + 0x44) = angle;
    }
}
