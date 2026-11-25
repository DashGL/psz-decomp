// flags: -O4,s
typedef struct { int a, b; } Pair;
extern int *DAT_0213f2c0;
extern Pair DAT_0213e0cc[5];
extern void FUN_overlay_12__0212bd78(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));
void FUN_overlay_12__0212b124(void) {
    int *self = DAT_0213f2c0;
    if (self) {
        FUN_overlay_12__0212bd78(self);
        self[123] = FUN_02087254(FUN_02086e3c());
        FUN_overlay_12__0212b19c(self, 0, 0, -1, 0, 0);
        *(Pair *)(self + 18) = DAT_0213e0cc[2];
        *(Pair *)(self + 20) = DAT_0213e0cc[4];
    }
}
