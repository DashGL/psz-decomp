// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { unsigned char b[4]; } Key;
typedef struct {
    int pad0[9];
    int counts[8];
    int offsets[6];
    int tab;
    int pad60[3];
    void *win;
    int ready;
} Self;
extern char DAT_021934e8[];
extern const int DAT_0212d764[];
extern void FUN_overlay_4__02121f6c(void *);
extern void FUN_overlay_4__02122fb4(void *);
extern int FUN_0209ca8c(char *, void *, int);
extern void FUN_020c3788(void *, const char *, int, int, int);
extern void *FUN_02088c7c(void);
extern void FUN_0208b55c(void *, void *, int, Pair *);
extern int FUN_02084900(void *);
extern void *FUN_02077f3c(void);
extern int FUN_02078038(void *);
extern void FUN_020c331c(int, int, int, int);
extern void *FUN_02079114(void);
extern int FUN_020849d4(void *);
extern void FUN_02079160(void *, Pair *, int, unsigned short, int, int, int, int, int);

void FUN_overlay_4__02122cf4(Self *self) {
    char text[28];
    Pair iconpos;
    Pair numpos;
    Key key;
    Pair iconbase;
    Pair numBase;
    int i, y, y2, yfx;

    if (self->ready == 0) {
        FUN_overlay_4__02121f6c(self);
        for (y = 0, i = 0; i < 5; i++, y += 13) {
            int idx = i + self->offsets[self->tab];
            if (idx < self->counts[self->tab]) {
                text[0] = 0;
                if (FUN_0209ca8c(text, DAT_021934e8 + self->tab * 1920 + idx * 24, 0) == 1) {
                    FUN_020c3788(self->win, text, 15, y, 2);
                    self->ready = 1;
                }
            }
        }
    }

    y2 = 0;
    i = 0;
    iconbase = *(const Pair *)&DAT_0212d764[11];
    numBase = *(const Pair *)&DAT_0212d764[5];
    for (; i < 5; i++, y2 += 13) {
        int idx = i + self->offsets[self->tab];
        if (idx < self->counts[self->tab]) {
            char *row;
            void *mgr;
            iconpos = iconbase;
            yfx = (y2 + 252) << 12;
            iconpos.y = yfx;
            row = (char *)(volatile int)(DAT_021934e8 + self->tab * 1920);
            idx *= 24;
            idx = (int)(volatile int)idx;
            mgr = FUN_02088c7c();
            FUN_0208b55c(mgr, row + idx, *(int *)(row + idx + 16), &iconpos);
            key = *(Key *)(DAT_021934e8 + self->tab * 1920 + idx);
            if (FUN_02084900(&key) == 1) {
                FUN_020c331c(48, 0x86000, yfx, FUN_02078038(FUN_02077f3c()));
                numpos = numBase;
                numpos.y = yfx;
                FUN_02079160(FUN_02079114(), &numpos, 2, 2, FUN_020849d4(DAT_021934e8 + self->tab * 1920 + idx), -1, -1, 8, 0);
            }
        }
    }
    FUN_overlay_4__02122fb4(self);
}
