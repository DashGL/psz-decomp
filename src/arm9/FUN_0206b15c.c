// flags: -O4,p -noThumb
typedef struct {
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
} TPData;

typedef struct {
    int x0;
    int xDotSize;
    int xDotSizeInv;
    int y0;
    int yDotSize;
    int yDotSizeInv;
} TPCalibrate;

typedef struct {
    char pad[0x34];
    unsigned short calibrate_flg;
} TPWork;

extern TPWork DAT_0211a144;
extern TPCalibrate DAT_0211a160;

void FUN_0206b15c(TPData *disp, const TPData *raw) {
    TPCalibrate *cal;
    if (!DAT_0211a144.calibrate_flg) {
        *disp = *raw;
        return;
    }
    cal = &DAT_0211a160;
    disp->touch = raw->touch;
    disp->validity = raw->validity;
    if (raw->touch == 0) {
        disp->x = 0;
        disp->y = 0;
        return;
    }
    disp->x = (unsigned short)(((long long)cal->xDotSizeInv * ((long long)(raw->x << 2) - cal->x0)) >> 22);
    if ((short)disp->x < 0) {
        disp->x = 0;
    } else if ((short)disp->x > 255) {
        disp->x = 255;
    }
    disp->y = (unsigned short)(((long long)cal->yDotSizeInv * ((long long)(raw->y << 2) - cal->y0)) >> 22);
    if ((short)disp->y < 0) {
        disp->y = 0;
    } else if ((short)disp->y > 191) {
        disp->y = 191;
    }
}
