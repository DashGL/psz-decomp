// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int angle;
    Vec position;
} Frame;

extern void FUN_overlay_22__0219aa30(void *, void *, unsigned short, unsigned short, unsigned short);
extern void FUN_overlay_22__0219a05c(void *, int);
extern int FUN_overlay_22__0219a9a8(void *, int, void *, void *);
extern int FUN_overlay_22__0219ae68(void *, int, int, void *);
extern void FUN_overlay_22__0219af24(void *, int, int, int);
extern void FUN_overlay_22__0219ada4(void *, int, int, void *);

void FUN_overlay_22__0219e9c4(int *self)
{
    Frame f;
    if (self[18] < 60) {
        int angle = ((unsigned short *)self)[22] - 273;
        if (angle < 0) angle = 0;
        ((unsigned short *)self)[22] = angle;
        self[5] -= 341;
        FUN_overlay_22__0219aa30(self, self + 4, ((unsigned short *)self)[20], ((unsigned short *)self)[21], ((unsigned short *)self)[22]);
    } else if (self[18] == 60) {
        FUN_overlay_22__0219a05c(self, 0);
    }
    f.position = *(Vec *)(self + 4);
    *(unsigned short *)&f.angle = 0;
    FUN_overlay_22__0219a9a8(self, 0, &f.position, &f.angle);
    if (self[18] == 60) {
        int handle = FUN_overlay_22__0219ae68(self, 20, 0, &f.position);
        FUN_overlay_22__0219af24(self, handle, 16, 1);
        FUN_overlay_22__0219ada4(self, 3, 3, &f.position);
    }
    if (self[18] < 60 && self[18] % 15 == 0) {
        int handle = FUN_overlay_22__0219ae68(self, 19, 0, &f.position);
        FUN_overlay_22__0219af24(self, handle, 16, 1);
    }
}
