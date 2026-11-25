// flags: -O4,s
typedef struct { int a, b; } Pair;
extern int *DAT_overlay_12__0213f2c0;
extern const Pair DAT_overlay_12__0213e0cc[];
extern int FUN_overlay_12__0212bd6c(void *), FUN_overlay_12__0212bd5c(void *), FUN_overlay_12__0212bd4c(void *), FUN_02087254(void *);
extern void *FUN_02086e3c(void);
extern void FUN_overlay_12__0212bd78(void *), FUN_overlay_12__0212a934(void *), FUN_overlay_12__02129f34(void *), FUN_overlay_12__0212b0d4(void);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));
enum { E0 = 0, E1 = 1 };
void FUN_overlay_12__0212ae08(void)
{
    int *self = DAT_overlay_12__0213f2c0;
    if (!self) return;
    if (((self[115] != 0) ? E1 : E0) != 0) return;
    if (FUN_overlay_12__0212bd6c(self)) {
        if (((self[114] != 0) ? E1 : E0) != 0) {
            if (FUN_overlay_12__0212bd5c(self)) {
                FUN_overlay_12__0212bd78(self);
                self[123] = FUN_02087254(FUN_02086e3c());
                FUN_overlay_12__0212b19c(self, 0, 0, -1, 0, 0);
                *(Pair *)(self + 18) = DAT_overlay_12__0213e0cc[9];
                *(Pair *)(self + 20) = DAT_overlay_12__0213e0cc[8];
            } else {
                FUN_overlay_12__0212a934(self);
                FUN_overlay_12__0212b19c(self, 15, 1, -1, FUN_overlay_12__0212b0d4, 0);
                FUN_overlay_12__02129f34(self);
            }
        } else {
            if (FUN_overlay_12__0212bd4c(self)) {
                self[123] = FUN_02087254(FUN_02086e3c());
                FUN_overlay_12__0212b19c(self, 0, 0, -1, 0, 0);
                *(Pair *)(self + 18) = DAT_overlay_12__0213e0cc[7];
                *(Pair *)(self + 20) = DAT_overlay_12__0213e0cc[0];
            } else {
                FUN_overlay_12__0212a934(self);
                FUN_overlay_12__0212b19c(self, 15, 1, -1, FUN_overlay_12__0212b0d4, 0);
                FUN_overlay_12__02129f34(self);
            }
        }
    } else {
        self[122] = 1;
    }
}
