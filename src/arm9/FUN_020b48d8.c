// flags: -O4,s
typedef struct { unsigned int a, b, c; } Vec020b48d8;
extern void FUN_0207f418(void *);
extern void FUN_02048578(void *, int);
extern struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
    char *f14;
} DAT_0211aa74;
extern const Vec020b48d8 DAT_020fc958;
extern Vec020b48d8 DAT_0211aa8c;
extern char DAT_0211aa9e;
void FUN_020b48d8(void) {
    char *p = DAT_0211aa74.f14;
    if (p) {
        *(int *)(p + 72) = 0;
        DAT_0211aa74.f14 = 0;
    }
    DAT_0211aa8c = DAT_020fc958;
    FUN_0207f418(&DAT_0211aa9e);
    DAT_0211aa74.f14 = 0;
    if (DAT_0211aa74.f8) {
        FUN_02048578(DAT_0211aa74.f8, 0);
    }
}
