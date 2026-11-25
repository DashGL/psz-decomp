// flags: -O4,s
typedef struct { int w[12]; } Matrix;
typedef struct { int w[9]; } Rotation;
typedef struct { int x, z; } Pair;
typedef struct {
    int f00;
    int owner_id;
    int f08, f0c, f10;
    int mode;
    int x, y, z;
    int f24, f28, f2c;
    int steps;
    int step;
    int flip;
    unsigned short heading;
    unsigned short f3e;
    Pair pts[2];
    int flags[4];
    int idx;
    unsigned char pad64[0x68];
    int kind;
} State;

extern short DAT_020ed83c[];
extern int FUN_0204d480(int *);
extern char *FUN_0204daa8(int);
extern int FUN_0204260c(void *, int, Matrix *, Rotation *);
extern void FUN_0205b2c8(Matrix *, int, int);
extern void FUN_0205b2e4(Matrix *, int, int);
#pragma thumb off
extern int FUN_0205c9e4(int, int);
extern void FUN_0205b16c(Matrix *);
extern void FUN_0205b1c8(Matrix *, Matrix *, int, int, int);
extern void FUN_0205b68c(Matrix *, Matrix *, Matrix *);
#pragma thumb reset

#define P(p, o) (*(void **)((char *)(p) + (o)))
#define ROT(fn, mat, ang) fn(&(mat), DAT_020ed83c[((ang) >> 4) * 2], DAT_020ed83c[((ang) >> 4) * 2 + 1])

void FUN_0204d280(State *s, int *out) {
    Matrix joint;
    Rotation jointrot;
    Matrix rotate, travel, tilt, shift;
    int plane1[2], plane2[2];
    int heading;
    int idx;
    int offset, half;
    int distance, base;
    unsigned short phase;
    *(volatile int *)&heading = s->heading;
    idx = *(volatile int *)&s->idx;
    if (s->flags[idx] >= 0 && s->mode != 0) {
        plane1[0] = -(s->pts[idx].x - s->x);
        plane1[1] = s->pts[s->idx].z - s->z;
        distance = FUN_0204d480(plane1);
        heading = FUN_0205c9e4(-plane1[0], plane1[1]);
    } else if (s->mode == 0) {
        char *owner;
        plane2[0] = 0;
        plane2[1] = 0;
        owner = FUN_0204daa8(s->owner_id);
        if (owner && P(owner, 0x8c)) {
            FUN_0204260c(P(owner, 0x8c), 8, &joint, &jointrot);
            plane2[0] = -(joint.w[9] - s->x);
            plane2[1] = joint.w[11] - s->z;
        }
        distance = FUN_0204d480(plane2);
        heading = FUN_0205c9e4(-plane2[0], plane2[1]);
    } else {
        distance = 0xa000;
    }

    if (s->steps < 0) {
        s->steps = distance / 2048;
    }
    base = 0x4e38;
    if (!s->mode) {
        base = 0x4000;
    }
    phase = 0;
    if (s->steps != 0) {
        phase = (base / s->steps) * s->step;
    }
    half = (-distance) / 2;
    offset = half;
    if ((!s->flip && s->mode) || (s->flip && !s->mode)) {
        offset = distance / 2;
        phase = 0x10000 - phase;
    }

    FUN_0205b16c(&rotate);
    ROT(FUN_0205b2c8, rotate, phase);
    FUN_0205b16c(&travel);
    FUN_0205b1c8(&travel, &travel, offset, 0, half);
    FUN_0205b68c(&travel, &rotate, &travel);

    FUN_0205b16c(&rotate);
    ROT(FUN_0205b2c8, rotate, heading);
    if (s->kind == 2) {
        int turn = 0x4000;
        if ((!s->flip && s->mode) || (s->flip && !s->mode)) {
            turn = 0xc000;
        }
        FUN_0205b16c(&tilt);
        ROT(FUN_0205b2e4, tilt, turn);
        FUN_0205b68c(&tilt, &rotate, &rotate);
    }
    FUN_0205b16c(&shift);
    FUN_0205b1c8(&shift, &shift, travel.w[9] - offset, travel.w[10], travel.w[11] - half);
    FUN_0205b68c(&shift, &rotate, &travel);
    out[0] = s->x + travel.w[9];
    out[1] = s->y + travel.w[10];
    out[2] = s->z + travel.w[11];
}
