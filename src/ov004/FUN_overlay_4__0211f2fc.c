// flags: -O4,s
typedef struct { int xy[3][2]; } Positions;
typedef struct { unsigned short h[4]; int xy[2]; } Draw;
typedef struct {
    int f0;
    int f4;
    unsigned int pad : 5;
    unsigned int mode : 2;
    unsigned int rest : 25;
    int f0c;
} Entry;
extern const Positions data_0212d4ac, data_0212d47c;
extern const unsigned short data_0212d444[];
extern void FUN_02071d0c(Draw *), FUN_0208971c(void *, const void *), FUN_020c32b4(Draw *, int);
extern void *FUN_overlay_4__0211ef18(void), *FUN_02077930(void), *FUN_02077f3c(void);
extern int FUN_02077b00(void *, int), FUN_02077fec(void *), FUN_02078038(void *);

void FUN_overlay_4__0211f2fc(int *self, Entry *entry, int row) {
    Positions a = data_0212d4ac, b = data_0212d47c;
    Draw d;
    unsigned short icons[3];
    int handles[3];
    char *other;
    FUN_02071d0c(&d);
    if (entry->mode == 0) {
        other = FUN_overlay_4__0211ef18();
        if (other) {
            if (FUN_02077b00(FUN_02077930(), entry->f0c) && *(int *)(other + 148))
                d.h[0] = 31;
            else
                d.h[0] = entry->f0c;
        } else {
            d.h[0] = entry->f0c;
        }
        FUN_0208971c(d.xy, b.xy[row]);
        FUN_020c32b4(&d, FUN_02077fec(FUN_02077f3c()));
    }
    icons[0] = data_0212d444[6];
    icons[1] = data_0212d444[7];
    icons[2] = data_0212d444[8];
    handles[0] = self[9];
    handles[1] = FUN_02078038(FUN_02077f3c());
    handles[2] = FUN_02078038(FUN_02077f3c());
    FUN_0208971c(d.xy, a.xy[row]);
    if (entry->mode != 0) {
        d.h[0] = 33;
        FUN_020c32b4(&d, self[9]);
    } else {
        d.h[0] = icons[self[8]];
        FUN_020c32b4(&d, handles[self[8]]);
    }
}
