//cpp
// flags: -O4,s
struct Key4 {
    unsigned char b[4];
};

struct Item {
    union {
        struct {
            Key4 key;
            unsigned int v[3];
        };
        unsigned int raw[4];
    };
};

struct Entry;
extern "C" Entry *FUN_overlay_4__02125764(Entry *, const Entry *);
struct Entry {
    union {
        struct {
            Item item;
            int index;
        };
        unsigned int raw[5];
    };
    inline Entry &operator=(const Entry &o) { return *FUN_overlay_4__02125764(this, &o); }
};

struct Menu {
    int mode;
    unsigned char pad04[0x30];
    int sel0;
    int sel[4];
    unsigned char pad48[0x1c];
    int cur_group;
    unsigned char pad68[0x1c];
    short count[4];
    unsigned char pad8c[4];
    int count0;
    unsigned char pad94[0x28];
    unsigned int flags;
};

extern "C" {
extern Entry DAT_021965d0[4][80];
extern void FUN_overlay_4__02124be8(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern Item *FUN_020b00ac(void *, int);
extern int FUN_0203a1fc(const void *);
extern void *FUN_02088c7c(void);
extern int FUN_0208bb6c(void *, const void *);
extern void *FUN_02039534(void *, const void *);
extern int FUN_0203a820(const void *, int);
extern int FUN_0203a1a8(const void *, int);
extern unsigned int FUN_02098d84(const void *);
int FUN_overlay_4__02125b5c(Menu *self);
}

int FUN_overlay_4__02125b5c(Menu *self) {
    for (int group = 0; group < 4; group++) {
        self->count[group] = 0;
        for (int i = 0; i < 80; i++) {
            FUN_overlay_4__02124be8(&DAT_021965d0[group][i]);
        }
    }

    if (!FUN_02087138(FUN_02086e3c())) {
        return 0;
    }

    for (int i = 0; i < 80; i++) {
        Item item = *FUN_020b00ac((unsigned char *)FUN_02086e3c() + 0x10, i);
        if (!FUN_0203a1fc(&item)) {
            int g = FUN_0208bb6c(FUN_02088c7c(), &item);
            FUN_02039534(&DAT_021965d0[g][self->count[g]], &item);
            DAT_021965d0[g][self->count[g]].index = i;
            self->count[g]++;
        }
    }

    for (int group = 0; group < 4; group++) {
        int n = self->count[group];
        int gap = 1;
        while (gap < n / 3) {
            gap = gap * 3 + 1;
        }
        while (gap > 0) {
            for (int i = gap; i < n; i++) {
                for (int j = i - gap; j >= 0; j -= gap) {
                    Key4 a = DAT_021965d0[group][j].item.key;
                    Key4 b = DAT_021965d0[group][j + gap].item.key;
                    if (FUN_0203a820(&a, 0) && FUN_0203a1a8(&a, 17)) {
                        a.b[0] = 3;
                    }
                    if (FUN_0203a820(&b, 0) && FUN_0203a1a8(&b, 17)) {
                        b.b[0] = 3;
                    }
                    unsigned int ka = FUN_02098d84(&a);
                    unsigned int kb = FUN_02098d84(&b);
                    if (ka > kb || (ka == kb && DAT_021965d0[group][j].index > DAT_021965d0[group][j + gap].index)) {
                        Entry temp = DAT_021965d0[group][j];
                        DAT_021965d0[group][j] = DAT_021965d0[group][j + gap];
                        DAT_021965d0[group][j + gap] = temp;
                    } else {
                        break;
                    }
                }
            }
            gap /= 3;
        }
    }

    self->flags &= ~4u;
    if (self->mode == 10) {
        if (self->count0 <= self->sel0) {
            self->sel0 = self->count0 - 1;
        }
    } else {
        int g = self->cur_group;
        if (self->count[g] <= self->sel[g]) {
            self->sel[g] = self->count[g] - 1;
        }
    }
    return 1;
}
