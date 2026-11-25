// flags: -O4,s
extern void FUN_0200c938(void *, unsigned);
extern void FUN_overlay_18__02120f0c(void *, int, int, unsigned);
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_18__02120eb8(void *, int, int, void *);

typedef struct {
    unsigned *p[6];
} TableSet;

extern TableSet DAT_overlay_18__0212389c;
extern int DAT_overlay_18__02123884[6];
extern unsigned short DAT_overlay_18__021238d4[6][5];

typedef struct {
    void *maps[6];
    void *subs[6][4];
} Obj;

Obj *FUN_overlay_18__02120ccc(Obj *self) {
    TableSet tables;
    int page, x, y, i;
    FUN_0200c938(self->maps, 24);
    FUN_0200c938(self->subs, 96);
    tables = DAT_overlay_18__0212389c;
    for (page = 0; page < 6; page++) {
        void *map = FUN_020ba894(12);
        if (map) {
            map = FUN_overlay_18__02120eb8(map, 11, 5, 0);
        }
        self->maps[page] = map;
        for (x = 0; x < 11; x++) {
            for (y = 0; y < 5; y++) {
                if (x < 10) {
                    unsigned key = (unsigned short)(10 * y + x);
                    if ((int)key >= DAT_overlay_18__02123884[page]) {
                        key = 0xFFFF;
                    }
                    FUN_overlay_18__02120f0c(self->maps[page], x, y, key);
                } else {
                    FUN_overlay_18__02120f0c(self->maps[page], x, y, DAT_overlay_18__021238d4[page][y]);
                }
            }
        }
        for (i = 0; i < 4; i++) {
            unsigned *item = (unsigned *)FUN_020ba894(8);
            if (item) {
                item[0] = tables.p[page][i];
                item[1] = DAT_overlay_18__02123884[page];
            }
            self->subs[page][i] = item;
        }
    }
    return self;
}
