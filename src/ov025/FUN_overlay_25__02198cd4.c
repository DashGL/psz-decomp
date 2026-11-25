// flags: -O4,s
typedef struct { int x, y, z; } Vec_8cd4;
typedef struct { int scale; Vec_8cd4 moved, step, direction, target; } Frame_8cd4;
extern int FUN_overlay_25__021992c4(void *, void *);
extern int FUN_overlay_25__02198d6c(void *, void *);
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(void *, void *, void *);
extern void *FUN_02035408(void *, int, int, int);
extern void FUN_02036384(void *, void *);
extern const short DAT_020ed83c[];

void FUN_overlay_25__02198cd4(int *self) {
    Frame_8cd4 f;
    int index;
    if (FUN_overlay_25__021992c4((void *)self[4], &f.target)) {
        FUN_overlay_25__02198d6c(self, &f.target);
    }
    index = ((int)*(unsigned short *)(self + 17) >> 4) * 2;
    f.direction.x = DAT_020ed83c[index];
    f.direction.y = 0;
    f.direction.z = DAT_020ed83c[index + 1];
    f.scale = (int)((unsigned long long)((long long)FUN_02036c34(self) * 410 + 2048) >> 12);
    FUN_02091cc0(&f.step, &f.direction, &f.scale);
    {
        Vec_8cd4 *pos = (Vec_8cd4 *)(self + 14);
        FUN_02035408(&f.moved, pos->x + f.step.x, pos->y + f.step.y, pos->z + f.step.z);
    }
    FUN_02036384(self, &f.moved);
}
