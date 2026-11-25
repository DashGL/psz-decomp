// flags: -O4,s
enum { E0 = 0, E1 = 1 };

typedef struct {
    int x, y, z;
} Vec;

extern volatile int DAT_0219fc1c[];
extern int DAT_020fc988;
extern void FUN_overlay_20__0219ca7c(void *, Vec *);
extern void FUN_overlay_20__02198e78(void *, Vec *, int);

void FUN_overlay_20__0219c7a4(int *self)
{
    Vec target;
    Vec path[4];
    int *owner = (int *)self[1];
    Vec *position = (Vec *)(owner + 14);
    int lo, hi, height;

    FUN_overlay_20__0219ca7c(self, &target);
    path[0] = *position;
    path[1] = *position;
    height = DAT_0219fc1c[11];
    path[1].y = height;
    if (((position->z > DAT_020fc988) ? E1 : E0) != 0) {
        *(volatile int *)&path[1].z = DAT_0219fc1c[12];
        lo = DAT_0219fc1c[7];
        hi = DAT_0219fc1c[8];
    } else {
        path[1].z = -DAT_0219fc1c[12];
        lo = -DAT_0219fc1c[8];
        hi = -DAT_0219fc1c[7];
    }
    path[2] = target;
    path[2].y = height;
    path[2].x = DAT_0219fc1c[14];
    if (((target.z < lo) ? E1 : E0) != 0) {
        path[2].z = lo;
    } else if (((target.z > hi) ? E1 : E0) != 0) {
        path[2].z = hi;
    }
    path[3] = path[2];
    *(volatile int *)&path[3].x = DAT_0219fc1c[10];
    path[3].y = DAT_0219fc1c[9];
    FUN_overlay_20__02198e78(owner, path, 4);
}
