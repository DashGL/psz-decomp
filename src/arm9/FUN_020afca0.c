// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,s
struct Vec3 {
    int x, y, z;
};
extern const struct Vec3 DAT_020fc958;
extern int *DAT_0211a9a8[];
extern void FUN_02036848(struct Vec3 *, int *);
extern int FUN_0205c520(int, int);
extern void FUN_02083a70(void *, int);
extern void FUN_02036348(void *, struct Vec3 *, void *);
extern void FUN_02036368(void *);

void FUN_020afca0(void *param_1, int *param_2) {
    struct Vec3 v = DAT_020fc958;
    int i;
    for (i = 0; i < param_2[14]; i++) {
        int *p = DAT_0211a9a8[i];
        if (p != 0) {
            FUN_02036848(&v, p + 3);
        }
    }
    if (param_2[14] != 0) {
        int n = param_2[14];
        int fixed = (int)(n > 0 ? (float)(n << 12) + 0.5f : (float)(n << 12) - 0.5f);
        FUN_02083a70(&v, FUN_0205c520(0x1000, fixed));
    }
    FUN_02036348(param_1, &v, param_2 + 3);
    FUN_02036368(param_1);
    FUN_02083a70(param_1, 0xcd);
}
