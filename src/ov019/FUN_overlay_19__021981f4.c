// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_02036c34(void *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, Vec *);

void FUN_overlay_19__021981f4(unsigned char *self, Vec *delta) {
    int scale = FUN_02036c34(self);
    long long x = (long long)delta->x * scale;
    long long y = (long long)delta->y * scale;
    long long z = (long long)delta->z * scale;
    Vec scaled, position;
    FUN_02035408(&scaled, (int)((x + 2048) >> 12), (int)((y + 2048) >> 12), (int)((z + 2048) >> 12));
    {
        Vec *pos = (Vec *)(self + 56);
        FUN_02035408(&position, pos->x + scaled.x, pos->y + scaled.y, pos->z + scaled.z);
    }
    FUN_02036384(self, &position);
}
