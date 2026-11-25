// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} D_12;
extern int DAT_0213e20c;
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *, int);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);
extern const char *FUN_overlay_12__0212d268(unsigned int, unsigned int);

void FUN_overlay_12__0212dde4(int *self) {
    if ((DAT_0213e20c == self[2]) ? E1 : E0) {
        D_12 d;
        volatile D_12 *vd = &d;
        int i;
        vd->a = 0; vd->b = 0; vd->c = 0;
        vd->a = 0; vd->b = 0; vd->c = 0;
        vd->x = 0; vd->y = 0;
        vd->x = 0; vd->y = 20480;
        vd->a = 7;
        FUN_020c32b4(&d, FUN_overlay_12__02131ad0(4));
        d.x = 20480;
        for (i = 0; i < 7; i++) {
            d.y = (17 * i + 27) << 12;
            d.a = (i == self[17]) ? 1 : 0;
            FUN_020c32b4(&d, self[25]);
        }
        if (self[26] == 0) {
            self[26] = 1;
            for (i = 0; i < 7; i++) {
                const char *text = FUN_overlay_12__0212d268(0, i + 4);
                FUN_overlay_12__0212c8f8(text, 10, 17 * i + 31, 2);
            }
        }
    }
}
