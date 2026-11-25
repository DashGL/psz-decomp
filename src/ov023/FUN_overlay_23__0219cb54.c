//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
extern "C" {
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);
void FUN_overlay_23__0219cb54(unsigned char *self, const Vec *delta) {
    Vec next;
    const Vec *pos = (const Vec *)(self + 0x38);
    FUN_02035408(&next, pos->x + delta->x, pos->y + delta->y, pos->z + delta->z);
    FUN_02036384(self, &next);
}
}
