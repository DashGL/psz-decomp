typedef struct {
    void *canvas[3][4];
    void *sprites1[47];
    void *sprites2[4];
    void *sprites3[2];
    void *sprites4[4];
    void *sprite5;
    void *task;
    unsigned char f11c;
    unsigned char f11d;
    unsigned char f11e;
    unsigned char f11f;
    unsigned char f120;
    unsigned char f121;
    unsigned char f122;
    unsigned char f123;
    unsigned char f124;
    unsigned char pad[3];
} State;

extern State *data_0213e7dc;
extern const unsigned short *data_0213ac04[];
extern const unsigned char data_02139e20[], data_02139e18[];
extern void *FUN_overlay_15__021366c4(int, int);
extern void *FUN_overlay_15__02135af8(int, int);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__02135888(void *, int, unsigned int, unsigned int);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void *FUN_overlay_15__02135ee8(int, int, int, int, unsigned int *, int);
extern void *FUN_overlay_15__02135718(int, unsigned int, int);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, const void *);
extern void FUN_overlay_15__02125a84(void *);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *), void *, int);
extern void FUN_overlay_15__02126314(int, int, int);

void FUN_overlay_15__021257a8(void) {
    unsigned short rect[4] = {0};
    unsigned int size;
    unsigned short text[2];
    int i, j, l;
    unsigned char *sprite;

    rect[2] = 17;
    rect[3] = 18;
    data_0213e7dc = (State *)FUN_overlay_15__021366c4(sizeof(State), 4);
    data_0213e7dc->f11c = 255;
    data_0213e7dc->f121 = 0;
    data_0213e7dc->f123 = 1;
    data_0213e7dc->f124 = 1;

    for (i = 0; i < 47; i++) {
        data_0213e7dc->sprites1[i] = FUN_overlay_15__02135af8(0, 52);
        sprite = (unsigned char *)data_0213e7dc->sprites1[i];
        *(unsigned int *)sprite = (*(unsigned int *)sprite & 0xc1fffcff) | 0x200;
        sprite = (unsigned char *)data_0213e7dc->sprites1[i];
        *(unsigned short *)(sprite + 4) = (*(unsigned short *)(sprite + 4) & 0xfffff3ff) | 0xc00;
    }
    for (i = 0; i < 4; i++) {
        data_0213e7dc->sprites2[i] = FUN_overlay_15__02135af8(0, data_02139e20[i]);
        sprite = (unsigned char *)data_0213e7dc->sprites2[i];
        *(unsigned int *)sprite = (*(unsigned int *)sprite & 0xc1fffcff) | 0x200;
        sprite = (unsigned char *)data_0213e7dc->sprites2[i];
        *(unsigned short *)(sprite + 4) = (*(unsigned short *)(sprite + 4) & 0xfffff3ff) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        data_0213e7dc->sprites3[i] = FUN_overlay_15__02135b14(0, data_02139e18[i], 1);
        FUN_overlay_15__02135888(data_0213e7dc->sprites3[i], -1, 0x200, 0);
        FUN_overlay_15__02135a10(data_0213e7dc->sprites3[i], -1, 3);
    }

    text[1] = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            data_0213e7dc->canvas[i][j] = FUN_overlay_15__02135ee8(0, 28, 2, 0, &size, 0);
            { int k = j * 12; for (l = 0, rect[0] = 0; l < 12; l++, k++) {
                text[0] = data_0213ac04[i][k];
                FUN_overlay_15__0213627c(data_0213e7dc->canvas[i][j], rect[0], rect[1], rect[2], rect[3], 2, 0x480, text);
                rect[0] += 18;
            }}
            if (i == 0) {
                data_0213e7dc->sprites4[j] = FUN_overlay_15__02135718(0, size, 1);
            }
        }
    }

    data_0213e7dc->sprite5 = FUN_overlay_15__02135b14(0, 64, 1);
    FUN_overlay_15__02135888(data_0213e7dc->sprite5, -1, 0x200, 0);
    FUN_overlay_15__02135a10(data_0213e7dc->sprite5, -1, 2);
    data_0213e7dc->task = FUN_overlay_15__021373d8(0, FUN_overlay_15__02125a84, 0, 120);
    FUN_overlay_15__02126314(data_0213e7dc->f11d, 0, 192);
}
