// flags: -O4,s
typedef struct { int a, b; } Pair;
extern int *DAT_0213f2c0;
extern const Pair DAT_0213e0cc[];
extern void FUN_overlay_12__0212b4f4(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void *, int);
void FUN_overlay_12__0212b0d4(void) {
    int *p = DAT_0213f2c0;
    if (p) {
        FUN_overlay_12__0212b4f4(p);
        p[123] = FUN_02087254(FUN_02086e3c());
        FUN_overlay_12__0212b19c(p, 0, 0, -1, 0, 0);
        *(Pair *)(p + 18) = DAT_0213e0cc[12];
        *(Pair *)(p + 20) = DAT_0213e0cc[1];
    }
}
