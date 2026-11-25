// flags: -O4,s
typedef struct { short v[7]; } Idx7;
typedef struct { unsigned int v[7]; } Out7;
typedef struct { unsigned short v[7]; } Dst7;
extern char DAT_020f8ed0[];
extern char DAT_020f8ed4[];
extern char DAT_020f8eec[];
extern char DAT_020f8ef0[];
extern struct { int pad[14]; unsigned int f38; } DAT_02108dec;
extern char DAT_02108db2[];
extern char DAT_02108e20[];
extern struct { void *f0; void *f4; void *f8; void *fc; void *f10; } DAT_02108d6c;
extern Idx7 DAT_0210bb68[];
extern Out7 DAT_0210d1e8[];
extern Dst7 DAT_0210b340[];
extern struct { unsigned short f0, f2, f4, f6, f8; } DAT_02108dac;
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020bc2dc(void *, void *, int);
extern int FUN_020bc3c0(void *, void *, int);
extern unsigned int FUN_020bc508(void *, int);
extern void FUN_02045e90(void *, void *, int);
extern void FUN_02045fd8(void *, unsigned int);

void FUN_020451d4(void) {
    void *first = FUN_020ba894(132), *second;
    Idx7 indices;
    int i, n;
    if (first) first = FUN_020bc2dc(first, DAT_020f8ed0, 0);
    if (first && FUN_020bc3c0(first, DAT_020f8ed4, 0)) {
        DAT_02108dec.f38 = FUN_020bc508(first, 0);
        FUN_02045e90(DAT_02108db2, DAT_02108e20, 0);
    }
    second = FUN_020ba894(132);
    if (second) second = FUN_020bc2dc(second, DAT_020f8eec, 0);
    DAT_02108d6c.f4 = second;
    if (second && FUN_020bc3c0(second, DAT_020f8ef0, 0)) {
        for (i = 0; i < 11; i++) {
            unsigned int *out;
            indices = DAT_0210bb68[i];
            out = DAT_0210d1e8[i].v;
            for (n = 0; n < 7; n++) {
                if (n != 1 && indices.v[n] >= 0) {
                    unsigned int value = FUN_020bc508(DAT_02108d6c.f4, indices.v[n]);
                    if (n < 7) out[n] = value;
                }
            }
            FUN_02045e90(DAT_0210b340[i].v, out, 0);
            if (indices.v[1] >= 0) FUN_02045fd8(DAT_0210b340[i].v, DAT_02108dac.f8);
        }
    }
    DAT_02108d6c.f10 = first;
}
