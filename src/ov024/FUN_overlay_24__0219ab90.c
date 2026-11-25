//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
extern "C" {
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);
void FUN_overlay_24__0219ab90(unsigned char *self, const Vec *dir) {
    Vec delta;
    Vec next;
    int scale = FUN_02036c34(self);
    FUN_02091cc0(&delta, dir, &scale);
    const Vec *pos = (const Vec *)(self + 0x38);
    FUN_02035408(&next, pos->x + delta.x, pos->y + delta.y, pos->z + delta.z);
    FUN_02036384(self, &next);
}
}
