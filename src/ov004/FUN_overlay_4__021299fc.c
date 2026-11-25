// flags: -O4,s
typedef struct {
    int xy[6][2];
} Points;

typedef struct {
    unsigned short h[4];
    int xy[2];
} Draw;

extern const Points DAT_0212e298;
extern int FUN_overlay_4__02129b6c(void *, int);
extern int FUN_overlay_4__02129a90(void *, int, int *);
extern int FUN_overlay_4__02129b18(void *, int);
extern int FUN_overlay_4__02129b2c(void *, int, int, int);
extern void FUN_02071d0c(void *);
extern void FUN_0208971c(void *, const void *);
extern void FUN_020c32b4(void *, unsigned int);
extern void *FUN_02077f3c(void);
extern unsigned int FUN_02077fec(void *);

void FUN_overlay_4__021299fc(int *self, int pos, int *values)
{
    Points points;
    Draw draw;
    int choice;
    int sign;

    if (!FUN_overlay_4__02129b6c(self, pos)) {
        int *slots = self + 12;
        slots[pos] = FUN_overlay_4__02129a90(self, pos, values);
        if (slots[pos] != -1) {
            points = DAT_0212e298;
            choice = *(int *)((char *)self + pos * 4 + 0x30);
            sign = FUN_overlay_4__02129b18(self, values[choice]);
            if (choice > -1) {
                FUN_02071d0c(&draw);
                draw.h[0] = FUN_overlay_4__02129b2c(self, pos, choice, sign);
                FUN_0208971c(draw.xy, points.xy[pos]);
                FUN_020c32b4(&draw, FUN_02077fec(FUN_02077f3c()));
            }
        }
    }
}
