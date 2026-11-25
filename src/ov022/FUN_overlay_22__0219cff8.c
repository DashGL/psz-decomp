// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_021a1788[];
extern int DAT_021a13f8[];
extern int DAT_021a1400[];
extern int DAT_020ed09c;
extern int FUN_overlay_22__0219a94c(void *, int, void *, void *);
extern int FUN_overlay_22__0219ae68(void *, int, int, void *);
extern void FUN_overlay_22__0219af24(void *, int, int, int);
extern void FUN_overlay_22__0219aebc(void *, int, void *);
extern void FUN_overlay_22__0219aea0(void *, void *);
void FUN_overlay_22__0219cff8(int *self, int enabled) {
    if (enabled == 1) {
        Vec position = *(Vec *)(self + 4);
        int f = DAT_021a1788[3];
        if (!(f & 1)) {
            DAT_021a13f8[2] = 0;
            DAT_021a13f8[3] = 3072;
            DAT_021a13f8[4] = -2048;
            DAT_021a1788[3] = f | 1;
        }
        FUN_overlay_22__0219a94c(self, 0, &position, DAT_021a1400);
        if (self[52] == DAT_020ed09c) {
            self[52] = FUN_overlay_22__0219ae68(self, 15, 1, &position);
            FUN_overlay_22__0219af24(self, self[52], 16, 1);
        } else {
            FUN_overlay_22__0219aebc(self, self[52], &position);
        }
    } else {
        FUN_overlay_22__0219aea0(self, self + 52);
    }
}