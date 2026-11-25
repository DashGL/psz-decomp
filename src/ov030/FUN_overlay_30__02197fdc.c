// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec difference, target, position; } Frame;
extern unsigned long long DAT_0211c844[3];
extern int FUN_overlay_30__02198544(void *);
extern int FUN_overlay_30__021989b0(void *, void *);
extern unsigned short FUN_overlay_30__02198568(void *, void *);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_30__02197fdc(int *self) {
    Frame f;
    int *owner = (int *)self[1];
    int *state = (int *)self[2];
    int animation = 4;
    if (FUN_overlay_30__02198544(owner) == 1) {
        unsigned long long n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        DAT_0211c844[0] = n;
        if ((unsigned int)(((n >> 32) * 100ull) >> 32) < 50) {
            animation = 5;
        } else {
            f.position = *(Vec *)(owner + 14);
            if (FUN_overlay_30__021989b0(state, &f.target) == 1) {
                f.difference.x = f.target.x - f.position.x;
                f.difference.y = f.target.y - f.position.y;
                f.difference.z = f.target.z - f.position.z;
                if (FUN_overlay_30__02198568(owner, &f.difference) > 4096) {
                    animation = 5;
                }
            }
        }
    }
    FUN_02040c0c(owner, 0, animation, 4096, 0);
    state[18] = 1;
}
