// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[9]; } Rotation;
typedef struct { int w[12]; } Matrix;

extern Vec DAT_020fc958;
extern short DAT_020ed83c[];
extern void FUN_0205aa80(Rotation *);
extern void FUN_0205abac(Rotation *, int, int);
extern void FUN_0205abc8(Rotation *, int, int);
extern void FUN_0205ab90(Rotation *, int, int);
extern void FUN_0205aed0(Rotation *, Rotation *, Rotation *);
extern void FUN_0205b0f0(Vec *, Rotation *, Vec *);
extern void FUN_0205b960(Vec *, Matrix *, Vec *);
extern void FUN_0200c938(void *, int);
extern void FUN_02035408(Vec *, int, int, int);
extern int FUN_0204260c(void *, int, Matrix *, Rotation *);

void FUN_02076164(char *s, char *config, Vec *out, Rotation *outRotation) {
    Vec position;
    Rotation rotation;
    Matrix matrix;
    Vec zero;
    Vec offset;
    Rotation rz;
    Rotation rx;
    Rotation ry;
    Vec copy;
    int angle, index, has;

    position = DAT_020fc958;
    FUN_0205aa80(&rotation);
    switch (*(signed char *)(config + 2)) {
    case 0:
        break;
    case 1:
        position = *(Vec *)(s + 0x38);
        angle = *(unsigned short *)(s + 0x44);
        index = (angle >> 4) * 2;
        FUN_0205abac(&rotation, DAT_020ed83c[index], DAT_020ed83c[index + 1]);
        break;
    case 2:
        if (FUN_0204260c(*(void **)(*(char **)(s + 0x98) + (*(signed char *)(config + 3)) * 0x70), *(signed char *)(config + 4), &matrix, &rotation)) {
            FUN_0200c938(&zero, 12);
            FUN_0205b960(&zero, &matrix, &zero);
            copy.x = zero.x;
            copy.y = zero.y;
            copy.z = zero.z;
            position = copy;
        }
        break;
    }
    FUN_02035408(&offset, *(int *)(config + 0xc), *(int *)(config + 0x10), *(int *)(config + 0x14));
    angle = *(unsigned short *)(config + 0xa);
    has = !!angle;
    if (has != 0) {
        index = (angle >> 4) * 2;
        FUN_0205abc8(&rz, DAT_020ed83c[index], DAT_020ed83c[index + 1]);
        FUN_0205aed0(&rotation, &rz, &rotation);
    }
    angle = *(unsigned short *)(config + 6);
    has = !!angle;
    if (has != 0) {
        index = (angle >> 4) * 2;
        FUN_0205ab90(&rx, DAT_020ed83c[index], DAT_020ed83c[index + 1]);
        FUN_0205aed0(&rotation, &rx, &rotation);
    }
    angle = *(unsigned short *)(config + 8);
    has = !!angle;
    if (has != 0) {
        index = (angle >> 4) * 2;
        FUN_0205abac(&ry, DAT_020ed83c[index], DAT_020ed83c[index + 1]);
        FUN_0205aed0(&rotation, &ry, &rotation);
    }
    FUN_0205b0f0(&offset, &rotation, &offset);
    position.x += offset.x;
    position.y += offset.y;
    position.z += offset.z;
    *out = position;
    *outRotation = rotation;
}
