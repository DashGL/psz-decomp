// flags: -O4,s
typedef struct { int x, y, z; } Vec310;
typedef struct { unsigned char b[6]; } Part6;

extern int UNK_020f2a84[], UNK_020f2b74[];
extern short UNK_020ed83c[];
extern void FUN_0207a514(void *, void *, int, int, int);
extern void FUN_0207a1ec(void *, void *, int);
extern void FUN_0207a3f4(void *, int, int, int);
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern int FUN_0207a3ac(int, int);
extern int FUN_0207a3d0(int, int);
extern int FUN_0204e8bc(void *, int, int);
extern void FUN_02036348(void *, void *, void *);
extern int FUN_0205c86c(void *);
extern int FUN_0205c9e4(int, int);
extern int FUN_0204dab0(int);
extern int FUN_0204dac4(int);
extern void FUN_0205b16c(void *);
extern void FUN_0205b1c8(void *, void *, int, int, int);
extern void FUN_0205b2c8(void *, int, int);
extern void FUN_0205b68c(void *, void *, void *);
extern void FUN_02047ae8(void *);
extern void *FUN_0204fc0c(int, void *, void *, int);

void FUN_0207aa84(char *s, char *d, int level, int supplied) {
    Vec310 position;
    Vec310 difference;
    int translate[12];
    int rotate[12];
    Vec310 destination;
    int descriptor[13];
    Vec310 shifted;
    Part6 copy;
    Part6 part;
    int index, radius, handle, sub, ok;

    FUN_0207a514(s, d, level, 0, 1);
    index = *(int *)(s + 280);
    if (index >= 0 && index < 3) {
        *(int *)(s + 400) = UNK_020f2a84[index];
    }
    FUN_0207a1ec(&shifted, s + 92, *(unsigned short *)(s + 106));
    *(Vec310 *)(s + 92) = shifted;
    *(Vec310 *)(s + 384) = *(Vec310 *)(s + 92);

    FUN_0207a3f4(&part, 0, *(int *)(s + 276), 1);
    copy = part;
    radius = ((int)copy.b[2] << 12) / 2;

    if (FUN_02078188(*(int *)(s + 232))) {
        handle = FUN_0207a3ac(*(int *)(s + 232), 0);
        sub = FUN_0207a3d0(*(int *)(s + 232), 0);
        position.x = 0;
        position.y = 0;
        position.z = 0;
        ok = 0;
        if (handle != -1) {
            ok = FUN_0204e8bc(&position, handle, sub);
        }
        if (ok) {
            FUN_02036348(&difference, s + 92, &position);
            difference.y = 0;
            radius = FUN_0205c86c(&difference) / 2;
        }
    } else if (supplied) {
        radius = supplied / 2;
    }

    *(int *)(s + 416) = radius;
    *(int *)(s + 404) = *(int *)(s + 416) / ((int)copy.b[3] << 7);
    *(int *)(s + 72) = (*(int *)(s + 404) + 20) * *(int *)(s + 76) + (*(int *)(s + 68) << 1);
    *(unsigned short *)(s + 380) = (unsigned short)(0x18000 - FUN_0205c9e4(-*(int *)(s + 416), *(int *)(s + 416))) / *(int *)(s + 404);

    if (FUN_0204dab0(*(int *)(s + 232)) || FUN_0204dac4(*(int *)(s + 232)) || FUN_02078198(*(int *)(s + 232))) {
        if (FUN_02078198(*(int *)(s + 232))) {
            *(int *)(s + 256) = *(int *)(d + 96);
        } else {
            *(int *)(s + 256) = 20;
        }
        FUN_0205b16c(translate);
        FUN_0205b1c8(translate, translate, 0, 0, *(int *)(s + 416) << 1);
        FUN_0205b16c(rotate);
        index = ((int)*(unsigned short *)(s + 106) >> 4) * 2;
        FUN_0205b2c8(rotate, UNK_020ed83c[index], UNK_020ed83c[index + 1]);
        FUN_0205b68c(translate, rotate, translate);
        { int dz = translate[11] + *(int *)(s + 392); destination.x = translate[9] + *(int *)(s + 384); destination.y = 0; destination.z = dz; }
        index = *(int *)(s + 280);
        if (index >= 0 && index < 3) {
            FUN_02047ae8(descriptor);
            descriptor[0] = *(int *)(s + 232);
            descriptor[3] = *(int *)(s + 256);
            descriptor[5] = 3;
            descriptor[6] = 9;
            FUN_0204fc0c(*(int *)(s + 68) / *(int *)(s + 76) + *(int *)(s + 404), descriptor, &destination, UNK_020f2b74[index]);
        }
    }
}
