// flags: -O4,p
typedef struct { unsigned char count[5]; } Counts;
typedef struct {
    unsigned int *f00[4];
    unsigned int *f10[10];
    unsigned int *f38[2];
    void *f40[2];
    void *f48[4];
} OamMgr;

extern struct { unsigned char prefix[16]; Counts last, first, middle; } DAT_0213a0ec;
extern OamMgr *DAT_0213e7e0;
extern const unsigned short DAT_0213a13e[][2];
extern const unsigned short DAT_0213a114[][2];
extern const unsigned short DAT_0213a11c[][2];
extern int FUN_overlay_15__02136304(void *, int, int, void *, unsigned int);
extern void FUN_overlay_15__02135888(void *, int, unsigned int, unsigned int);
extern void FUN_overlay_15__0213596c(void *, int, unsigned int, unsigned int);

static inline void ClearBits(unsigned int *p) {
    *p &= 0xc1fffcffU;
}

static inline void SetXY(unsigned int *p, int x, int y) {
    *p = (*p & 0xfe00ff00U) | (y & 0xffU) | ((x & 0x1ffU) << 16);
}

void FUN_overlay_15__02127468(int group, int y) {
    Counts first = DAT_0213a0ec.first;
    Counts middle = DAT_0213a0ec.middle;
    Counts last = DAT_0213a0ec.last;
    int start = group * 3;
    int i, j;

    for (i = 0, j = start; i < first.count[group]; i++, j++) {
        ClearBits(DAT_0213e7e0->f10[j]);
        SetXY(DAT_0213e7e0->f10[j], DAT_0213a13e[j][0], y);
    }
    if (group < 4) {
        FUN_overlay_15__02136304(DAT_0213e7e0->f00[group], DAT_0213a13e[start][0], y, DAT_0213e7e0->f48[group], 2);
    }
    for (i = 0; i < middle.count[group]; i++) {
        ClearBits(DAT_0213e7e0->f38[i]);
        SetXY(DAT_0213e7e0->f38[i], DAT_0213a114[i][0], y);
    }
    for (i = 0; i < last.count[group]; i++) {
        FUN_overlay_15__02135888(DAT_0213e7e0->f40[i], -1, 0, 0);
        FUN_overlay_15__0213596c(DAT_0213e7e0->f40[i], -1, DAT_0213a11c[i][0], y);
    }
}
