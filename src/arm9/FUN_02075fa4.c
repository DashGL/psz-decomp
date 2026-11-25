// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[12]; } Matrix;
typedef struct { int w[9]; } Rotation;
extern Vec DAT_020f2864;
extern short DAT_020ed83c[];
extern int FUN_0204260c(void *, int, Matrix *, Rotation *);
extern void FUN_0200c938(void *, int), FUN_0205b960(Vec *, Matrix *, Vec *), FUN_0205b0f0(Vec *, Rotation *, Vec *), FUN_0205c8cc(Vec *, Vec *), FUN_0205c7e8(Vec *, Vec *, Vec *), FUN_02072760(void *, int, int, int), FUN_0207278c(void *, int, int);
extern unsigned short FUN_0205cc08(int);
#define ROUND(a,b) ((int)(((long long)(a)*(b)+2048)>>12))

void FUN_02075fa4(char *s, char *config, char *entry) {
    Matrix matrix;
    Rotation rotation;
    Vec zero, forward, direction, cross;
    int x = 0, z = 0, angle = 0;
    char *data = *(char **)(config + 12);
    int dx, dz, sine, cosine;
    switch (*(signed char *)(data + 1)) {
    case 0:
        break;
    case 1:
        x = *(int *)(s + 56);
        z = *(int *)(s + 64);
        angle = *(unsigned short *)(s + 68);
        break;
    case 2:
        FUN_0204260c(*(void **)(*(char **)(s + 152) + *(signed char *)(data + 2) * 112), *(signed char *)(data + 3), &matrix, &rotation);
        FUN_0200c938(&zero, 12);
        FUN_0205b960(&zero, &matrix, &zero);
        x = zero.x;
        z = zero.z;
        forward = DAT_020f2864;
        FUN_0205b0f0(&forward, &rotation, &direction);
        direction.y = 0;
        if (!direction.x && !direction.z) {
            direction.x = forward.x;
            direction.y = forward.y;
            direction.z = forward.z;
        }
        FUN_0205c8cc(&direction, &direction);
        angle = FUN_0205cc08(direction.z);
        FUN_0205c7e8(&forward, &direction, &cross);
        if (cross.y < 0) angle = (unsigned short)(65536 - angle);
        break;
    }
    dx = *(int *)(data + 4);
    dz = *(int *)(data + 8);
    if (angle && (dx || dz)) {
        long long ls, lc, lx, lz; sine = DAT_020ed83c[(angle >> 4) * 2]; cosine = DAT_020ed83c[(angle >> 4) * 2 + 1]; ls = sine; lz = dz; lc = cosine; lx = dx; dx = (int)((lx * lc + 2048) >> 12) + (int)((lz * ls + 2048) >> 12); dz = (int)((lz * lc + 2048) >> 12) - (int)((lx * ls + 2048) >> 12);
    }
    FUN_02072760(s, *(int *)(entry + 4), x + dx, z + dz);
    FUN_0207278c(s, *(int *)(entry + 4), angle);
}
