// flags: -O4,p
typedef struct {
    unsigned short x, y, w, h;
} Rect;

typedef struct {
    void *f00[4];
    unsigned char *f10[10];
    unsigned char *f38[2];
    void *f40[2];
    void *f48[4];
    void *f58;
    void *f5c;
    unsigned char f60;
    unsigned char f61;
    unsigned char f62;
    unsigned char f63;
    unsigned char f64;
    unsigned char f65;
    unsigned char f66;
    unsigned char f67;
    unsigned char f68;
} OamMgr;

extern const struct {
    unsigned char pad[0x20];
    Rect rect;
} DAT_0213a0ec;
extern OamMgr *DAT_0213e7e0;
extern const unsigned short DAT_0213a124[];
extern const unsigned char DAT_0213a0d8[], DAT_0213a0dc[];
extern OamMgr *FUN_overlay_15__021366c4(int, int);
extern unsigned char *FUN_overlay_15__02135af8(int, int);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__02135888(void *, int, unsigned int, unsigned int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void *FUN_overlay_15__02135ee8(int, int, int, int, unsigned int *, int);
extern void *FUN_overlay_15__02135718(int, unsigned int, int);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, const void *);
extern void FUN_overlay_15__02126dc8(void *);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *), void *, int);
extern void FUN_overlay_15__02127468(int, int);

void FUN_overlay_15__02126b38(void) {
    Rect rect = DAT_0213a0ec.rect;
    unsigned int size;
    unsigned short text[2];
    int i, j;

    rect.w = 28;
    rect.h = 20;
    DAT_0213e7e0 = FUN_overlay_15__021366c4(108, 4);
    DAT_0213e7e0->f60 = 31;
    DAT_0213e7e0->f63 = 0;
    DAT_0213e7e0->f66 = 1;
    DAT_0213e7e0->f67 = 1;
    DAT_0213e7e0->f68 = 1;
    for (i = 0; i < 10; i++) {
        DAT_0213e7e0->f10[i] = FUN_overlay_15__02135af8(0, 54);
        *(unsigned int *)DAT_0213e7e0->f10[i] = (*(unsigned int *)DAT_0213e7e0->f10[i] & 0xc1fffcff) | 0x200;
        *(unsigned short *)(DAT_0213e7e0->f10[i] + 4) = (*(unsigned short *)(DAT_0213e7e0->f10[i] + 4) & 0xfffff3ff) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        DAT_0213e7e0->f38[i] = FUN_overlay_15__02135af8(0, DAT_0213a0d8[i]);
        *(unsigned int *)DAT_0213e7e0->f38[i] = (*(unsigned int *)DAT_0213e7e0->f38[i] & 0xc1fffcff) | 0x200;
        *(unsigned short *)(DAT_0213e7e0->f38[i] + 4) = (*(unsigned short *)(DAT_0213e7e0->f38[i] + 4) & 0xfffff3ff) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        DAT_0213e7e0->f40[i] = FUN_overlay_15__02135b14(0, DAT_0213a0dc[i], 1);
        FUN_overlay_15__02135888(DAT_0213e7e0->f40[i], -1, 0x200, 0);
        FUN_overlay_15__02135a10(DAT_0213e7e0->f40[i], -1, 3);
    }
    text[1] = 0;
    for (i = 0; i < 4; i++) {
        DAT_0213e7e0->f00[i] = FUN_overlay_15__02135ee8(0, 12, 4, 0, &size, 0);
        for (j = 0, rect.x = 0; j < 3; j++, rect.x += 32) {
            text[0] = DAT_0213a124[i * 3 + j];
            FUN_overlay_15__0213627c(DAT_0213e7e0->f00[i], rect.x, rect.y, rect.w, rect.h, 2, 0x480, text);
        }
        DAT_0213e7e0->f48[i] = FUN_overlay_15__02135718(0, size, 0);
    }
    DAT_0213e7e0->f58 = FUN_overlay_15__02135b14(0, 68, 1);
    FUN_overlay_15__02135888(DAT_0213e7e0->f58, -1, 0x200, 0);
    FUN_overlay_15__02135a10(DAT_0213e7e0->f58, -1, 2);
    DAT_0213e7e0->f5c = FUN_overlay_15__021373d8(0, FUN_overlay_15__02126dc8, 0, 120);
    FUN_overlay_15__02127468(0, 192);
}
