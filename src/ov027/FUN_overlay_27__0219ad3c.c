//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
extern "C" {
extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_overlay_27__0219adb8(void *, Vec *);
extern void FUN_02037910(void *, int);
extern void FUN_overlay_27__0219ad94(void *);
void FUN_overlay_27__0219ad3c(int *self) {
    Vec v;
    if ((self[2] == self[4] ? 1 : 0) != 0) {
        if (FUN_020370b8((void *)self[1], self[17], &v) == 1) {
            if (FUN_overlay_27__0219adb8(self, &v) == 1) {
                FUN_02037910(self, self[13]);
            } else {
                FUN_02037910(self, self[16]);
            }
        } else {
            FUN_overlay_27__0219ad94(self);
            FUN_02037910(self, self[16]);
        }
    }
}
}
