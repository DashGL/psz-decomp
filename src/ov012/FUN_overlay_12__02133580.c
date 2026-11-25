// flags: -O4,s
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Marker_02133580;
extern int DAT_0213f2e0[];
extern int DAT_0213e8d4[];
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
void FUN_overlay_12__02133580(int *p) {
    Marker_02133580 d;
    int top, bottom, flags;
    if (p[26] != 0) {
        if (p[26] != 1) {
            return;
        }
        top = 16;
        bottom = 17;
    } else {
        top = 17;
        bottom = 18;
    }
    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    flags = DAT_0213f2e0[2];
    if (!(flags & 1)) {
        flags |= 1;
        DAT_0213f2e0[3] = DAT_0213e8d4[2] - 4;
        DAT_0213f2e0[2] = flags;
    }
    flags = DAT_0213f2e0[4];
    if (!(flags & 1)) {
        flags |= 1;
        DAT_0213f2e0[1] = DAT_0213e8d4[1] + 4;
        DAT_0213f2e0[4] = flags;
    }
    d.x = (p[16] + DAT_0213e8d4[0] + p[25] * 4 - p[24] * 8) << 12;
    if (p[28] > 0) {
        p[28]--;
        d.y = (p[17] + DAT_0213f2e0[3]) << 12;
    } else {
        d.y = (p[17] + DAT_0213e8d4[2] - p[30] / 2) << 12;
    }
    d.a = top;
    FUN_020c32b4(&d, p[27]);
    if (p[29] > 0) {
        p[29]--;
        d.y = (p[17] + DAT_0213f2e0[1]) << 12;
    } else {
        int sum = p[17] + DAT_0213e8d4[1];
        d.y = (sum + p[30] / 2) << 12;
    }
    d.a = bottom;
    FUN_020c32b4(&d, p[27]);
}
