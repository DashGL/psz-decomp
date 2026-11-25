// flags: -O4,p
typedef struct {
    unsigned int a;
    unsigned int b;
} GXOamAttr;

typedef struct {
    unsigned int pad0[6];
    GXOamAttr *rows[5];
    GXOamAttr *top;
    GXOamAttr *bottom;
    GXOamAttr *cursor;
    unsigned int pad38[3];
    unsigned char dirty;
} Mgr;

typedef struct {
    unsigned int f0;
    unsigned short scroll;
    unsigned short pad6;
    Mgr *mgr;
} Global;

extern Global DAT_0213e86c;

#pragma thumb off
extern int FUN_0205c700(int, int);
extern int FUN_0205c73c(int, int);
#pragma thumb on

static inline void G2_GetOBJPosition(const GXOamAttr *oam, unsigned int *x, unsigned int *y) {
    *x = (oam->a & 0x01ff0000u) >> 16;
    *y = oam->a & 0x000000ffu;
}

static inline void G2_SetOBJPosition(GXOamAttr *oam, int x, int y) {
    oam->a = (oam->a & 0xfe00ff00u) | (y & 0xff) | ((x & 0x1ff) << 16);
}

void FUN_overlay_15__0212db94(void) {
    int q;
    int y;
    int objX;
    int objY;
    int i;
    int curY;

    q = FUN_0205c700(DAT_0213e86c.scroll, 29);
    y = 52 - FUN_0205c73c(DAT_0213e86c.scroll, 29);

    if (DAT_0213e86c.mgr->cursor != 0) {
        if (q == 0) {
            objX = 38;
        } else {
            objX = 256;
        }
        G2_SetOBJPosition(DAT_0213e86c.mgr->cursor, objX, y);
    }

    curY = y;
    for (i = 0; i < 5; i++) {
        G2_GetOBJPosition(DAT_0213e86c.mgr->rows[i], (unsigned int *)&objX, (unsigned int *)&objY);
        G2_SetOBJPosition(DAT_0213e86c.mgr->rows[i], objX, curY);
        curY += 29;
    }

    if (q <= 2) {
        G2_GetOBJPosition(DAT_0213e86c.mgr->top, (unsigned int *)&objX, (unsigned int *)&objY);
        G2_SetOBJPosition(DAT_0213e86c.mgr->top, objX, y + (2 - q) * 29);
    } else {
        G2_SetOBJPosition(DAT_0213e86c.mgr->top, 256, 0);
    }

    if (q >= 2 && q <= 6) {
        G2_GetOBJPosition(DAT_0213e86c.mgr->bottom, (unsigned int *)&objX, (unsigned int *)&objY);
        G2_SetOBJPosition(DAT_0213e86c.mgr->bottom, objX, y + (6 - q) * 29);
    } else {
        G2_SetOBJPosition(DAT_0213e86c.mgr->bottom, 256, 0);
    }

    DAT_0213e86c.mgr->dirty = 1;
}
