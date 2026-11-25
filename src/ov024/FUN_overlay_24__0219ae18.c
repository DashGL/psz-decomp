//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
extern "C" {
extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_overlay_24__0219ae94(void *, Vec *);
extern void FUN_02037910(void *, int);
extern void FUN_overlay_24__0219ae70(void *);
void FUN_overlay_24__0219ae18(int *self) {
    Vec v;
    if ((self[2] == self[4] ? 1 : 0) != 0) {
        if (FUN_020370b8((void *)self[1], self[17], &v) == 1) {
            if (FUN_overlay_24__0219ae94(self, &v) == 1) {
                FUN_02037910(self, self[13]);
            } else {
                FUN_02037910(self, self[16]);
            }
        } else {
            FUN_overlay_24__0219ae70(self);
            FUN_02037910(self, self[16]);
        }
    }
}
}
