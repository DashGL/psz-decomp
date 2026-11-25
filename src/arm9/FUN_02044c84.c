// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int x, y; } Vec;
extern void FUN_020bf680(void *, Vec *, int);
extern void FUN_020bf6b0(void *, Vec *, int, int);
extern void FUN_020bf6e0(void *, Vec *, int, int, int);

int FUN_02044c84(void *out, int *shape, unsigned int *position, int angle) {
    Vec center;
    int width, height;
    center.x = position[0];
    center.y = position[2];
    if ((shape[0] == 0) ? E1 : E0) {
        if (shape[1] >= 0) {
            FUN_020bf680(out, &center, shape[1]);
            return 1;
        }
        return 0;
    }
    if ((shape[0] == 1) ? E1 : E0) {
        width = shape[1];
        height = shape[2];
        if (width > 0 && height > 0) {
            if (angle == 16383) angle = 16384;
            else if (angle == 32767) angle = 32768;
            else if (angle == 49151) angle = 49152;
            else if (angle == 65535) angle = 0;
            if (angle % 16384 == 0) {
                if (angle == 0 || angle == 32768) {
                    center.x -= (unsigned int)(width >> 1);
                    center.y -= (unsigned int)(height >> 1);
                    FUN_020bf6b0(out, &center, width, height);
                } else {
                    center.x -= (unsigned int)(height >> 1);
                    center.y -= (unsigned int)(width >> 1);
                    FUN_020bf6b0(out, &center, height, width);
                }
            } else {
                FUN_020bf6e0(out, &center, width, height, angle);
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
