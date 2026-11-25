// flags: -O4,p
typedef struct { unsigned char count[5]; } Counts;
typedef struct {
    void *row[3][4];
    void *keys[47];
    void *mid[4];
    void *last[2];
    void *extra[4];
} KbdState;
extern struct { unsigned char prefix[12]; Counts last, first, middle; } data_02139e24;
extern KbdState *data_0213e7dc;
extern const unsigned short data_02139e68[][2], data_02139e48[][2], data_02139e40[][2];
extern int FUN_overlay_15__02136304(void *, int, int, void *, unsigned int);
extern unsigned int FUN_0205c73c(unsigned int, unsigned int);
extern void FUN_overlay_15__02135888(void *, int, unsigned int, unsigned int);
extern void FUN_overlay_15__0213596c(void *, int, unsigned int, unsigned int);

void FUN_overlay_15__02126314(int layout, int group, int y) {
    Counts first = data_02139e24.first;
    Counts middle = data_02139e24.middle;
    Counts last = data_02139e24.last;
    int start = group * 12;
    int i, idx;
    unsigned int special;
    for (i = 0, idx = start; i < first.count[group]; i++, idx++) {
        unsigned int x;
        unsigned int *record;
        *(unsigned int *)data_0213e7dc->keys[idx] &= 0xc1fffcffU;
        x = data_02139e68[idx][0];
        record = (unsigned int *)data_0213e7dc->keys[idx];
        *record = (*record & 0xfe00ff00U) | (y & 0xffU) | ((x & 0x1ffU) << 16);
    }
    if (group < 4) {
        FUN_overlay_15__02136304(data_0213e7dc->row[layout][group], data_02139e68[start][0], y,
            data_0213e7dc->extra[group], 2);
    }
    special = FUN_0205c73c(group + 3, 4);
    for (i = 0; i < middle.count[group]; i++) {
        unsigned int x;
        unsigned int *record;
        *(unsigned int *)data_0213e7dc->mid[special] &= 0xc1fffcffU;
        x = data_02139e48[special][0];
        record = (unsigned int *)data_0213e7dc->mid[special];
        *record = (*record & 0xfe00ff00U) | (y & 0xffU) | ((x & 0x1ffU) << 16);
    }
    for (i = 0; i < last.count[group]; i++) {
        FUN_overlay_15__02135888(data_0213e7dc->last[i], -1, 0, 0);
        FUN_overlay_15__0213596c(data_0213e7dc->last[i], -1, data_02139e40[i][0], y);
    }
}
