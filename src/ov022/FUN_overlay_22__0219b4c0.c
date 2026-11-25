// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_021a1748[];
extern int DAT_021a11fc[];
extern int DAT_021a122c[];
extern int DAT_020ed09c;
extern int FUN_overlay_22__0219a94c(void *, int, void *, void *);
extern int FUN_overlay_22__0219ae68(void *, int, int, void *);
extern void FUN_overlay_22__0219af24(void *, int, int, int);
extern void FUN_overlay_22__0219aebc(void *, int, void *);
extern void FUN_overlay_22__0219aea0(void *, void *);
void FUN_overlay_22__0219b4c0(int *self, int enabled) {
    if (enabled == 1) {
        Vec position = *(Vec *)(self + 4);
        int f = DAT_021a1748[14];
        if (!(f & 1)) {
            DAT_021a11fc[12] = 0;
            DAT_021a11fc[13] = 2048;
            DAT_021a11fc[14] = -2048;
            DAT_021a1748[14] = f | 1;
        }
        FUN_overlay_22__0219a94c(self, 12, &position, DAT_021a122c);
        if (self[25] == DAT_020ed09c) {
            self[25] = FUN_overlay_22__0219ae68(self, 15, 1, &position);
            FUN_overlay_22__0219af24(self, self[25], 16, 1);
        } else {
            FUN_overlay_22__0219aebc(self, self[25], &position);
        }
    } else {
        FUN_overlay_22__0219aea0(self, self + 25);
    }
}