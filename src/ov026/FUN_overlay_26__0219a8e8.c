// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
enum { E0 = 0, E1 = 1 };
extern int FUN_overlay_26__0219aadc(void *);
extern int FUN_overlay_26__0219aa08(void *, int *);
extern int FUN_overlay_26__0219aaa0(void *, int *);
extern int FUN_overlay_26__0219aa3c(void *, int *);
extern int FUN_020370b8(void *, int, Vec *);
extern void FUN_overlay_26__0219a9e4(void *);
extern void FUN_02037910(void *, int);
void FUN_overlay_26__0219a8e8(int *self) {
    Vec d;
    int distance;
    long long x, y, z;
    if (FUN_overlay_26__0219aadc(self) == 1) return;
    if (FUN_020370b8((void *)self[1], self[19], &d) == 1) {
        z = (long long)d.z * d.z;
        x = (long long)d.x * d.x;
        y = (long long)d.y * d.y;
        distance = (unsigned)((z + 2048) >> 12) + ((unsigned)((x + 2048) >> 12) + (unsigned)((y + 2048) >> 12));
        if (FUN_overlay_26__0219aa08(self, &distance) == 1) {
            self[21] = 0;
            FUN_02037910(self, self[16]);
        } else if (FUN_overlay_26__0219aaa0(self, &distance) == 1) {
            FUN_02037910(self, self[13]);
        } else if (FUN_overlay_26__0219aa3c(self, &distance) == 1) {
            self[21] = 1;
            FUN_02037910(self, self[16]);
        } else {
            FUN_02037910(self, self[15]);
        }
    } else {
        FUN_overlay_26__0219a9e4(self);
        if (((self[14] == self[2]) ? E1 : E0) == 0) {
            FUN_02037910(self, self[14]);
        }
    }
}
