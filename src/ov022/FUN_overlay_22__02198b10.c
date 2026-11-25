// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    char pad0[0x10];
    int pos[3];
    char pad1[0x148 - 0x1c];
    int timer;
} Obj;
extern int FUN_overlay_22__0219ae68(void *, int, int, const int *);
extern void FUN_overlay_22__0219aed8(void *, int, const Vec *);
void FUN_overlay_22__02198b10(Obj *p, int scale) {
    if (p->timer > 0) {
        p->timer--;
    } else {
        int handle = FUN_overlay_22__0219ae68(p, 27, 0, p->pos);
        Vec vec;
        vec.y = 4096;
        vec.x = scale;
        vec.z = scale;
        FUN_overlay_22__0219aed8(p, handle, &vec);
        p->timer = 10;
    }
}
