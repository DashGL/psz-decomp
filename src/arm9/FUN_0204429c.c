// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct { int x, y, z; } V;
typedef struct { int m[12]; } M43;
typedef struct { int m[9]; } M33;

extern V data_020ed540, data_020ed54c;
extern short data_020ed83c[];
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_020c0488(void *);
extern void FUN_020c0484(void *, int);
extern void *FUN_020be450(void);
extern int FUN_020beccc(void *, void *, int, void *, void *);
extern int FUN_0204260c(void *, unsigned int, void *, void *);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_0205c8cc(void *, void *);
extern void FUN_0205c7e8(void *, void *, void *);
extern u16 FUN_0205cc08(int);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020bf6e0(void *, void *, int, int, u16);
extern void FUN_020be5d4(void *, int, int, void *);

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define RM(a, b) ((int)(((long long)(a) * (long long)(b) + 2048LL) >> 12))

void FUN_0204429c(char *self)
{
    V defaults;
    int descriptor[13];
    M43 matrix;
    M33 rotation;
    V point;
    V axis;
    V direction;
    V cross;
    int shape[9];
    int params[2];
    int center[2];
    int i;
    int base_x, base_z, angle, dx, dz, oldx, sine, cosine, flag;
    char *entry;

    {
        int flg = (*(volatile int *)(self + 148) & 2) != 0;
        if (flg == 0 || (I(self, 148) & 0x20000)) return;
    }

    for (i = 0; i < I(self, 164); i++) {
        entry = *(char **)(self + 160) + 52 * i;
        {
            int flg = (*(volatile short *)(entry + 32) & 1) == 0;
            if (flg != 0) continue;
        }
        if (I(entry, 0) == -1) {
            defaults = data_020ed540;
            {
                int flg = (*(volatile short *)(entry + 32) & 4) != 0;
                if (flg != 0) defaults.z = 0;
            }
            FUN_0200c938(params, 8);
            params[1] = I(self, 12);
            {
                int flg = (*(volatile short *)(entry + 32) & 2) != 0;
                flag = flg ? 1 : 0;
            }
            FUN_020c0488(descriptor);
            descriptor[2] = I(entry, 28);
            descriptor[1] |= flag;
            descriptor[0] = I(entry, 4);
            FUN_020c0484(descriptor, 4);
            I(entry, 0) = FUN_020beccc(FUN_020be450(), descriptor, 1, &defaults, params);
        }
        switch (I(entry, 8)) {
        case 0:
            base_x = 0; base_z = 0; angle = 0;
            break;
        case 1:
            base_x = I(self, 56);
            base_z = I(self, 64);
            angle = *(u16 *)(self + 68);
            break;
        case 2:
            FUN_0204260c(*(void **)(*(char **)(self + 152) + 112 * I(entry, 12)), I(entry, 16), &matrix, &rotation);
            FUN_0200c938(&point, 12);
            FUN_0205b960(&point, &matrix, &point);
            base_x = point.x;
            base_z = point.z;
            axis = data_020ed54c;
            FUN_0205b0f0(&axis, &rotation, &direction);
            direction.y = 0;
            if (!direction.x && !direction.z) { direction.x = axis.x; direction.y = axis.y; direction.z = axis.z; }
            FUN_0205c8cc(&direction, &direction);
            angle = FUN_0205cc08(direction.z);
            FUN_0205c7e8(&axis, &direction, &cross);
            if (cross.y < 0) angle = (u16)(65536 - angle);
            break;
        default:
            base_x = 0; base_z = 0; angle = 0;
            break;
        }
        dx = I(entry, 20);
        dz = I(entry, 24);
        if (angle && (dx || dz)) {
            long long lls = data_020ed83c[2 * (angle >> 4)];
            long long llz = dz;
            long long llc = data_020ed83c[2 * (angle >> 4) + 1];
            long long llx = dx;
            dx = (int)((llx * llc + 2048LL) >> 12) + (int)((llz * lls + 2048LL) >> 12);
            dz = (int)((llz * llc + 2048LL) >> 12) - (int)((llx * lls + 2048LL) >> 12);
        }
        center[0] = base_x + dx;
        center[1] = base_z + dz;
        switch (I(entry, 36)) {
        case 0:
            FUN_020bf680(shape, center, I(entry, 40));
            break;
        case 1:
            FUN_020bf6e0(shape, center, I(entry, 40), I(entry, 44), (u16)(*(u16 *)(entry + 48) + angle));
            break;
        }
        FUN_020be5d4(FUN_020be450(), I(entry, 0), 0, shape);
    }
}
