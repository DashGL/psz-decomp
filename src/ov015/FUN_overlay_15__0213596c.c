// flags: -O4,p
typedef struct {
    unsigned int a;
    unsigned int b;
} Rec;

typedef struct {
    unsigned int pad0;
    unsigned int pad4;
    Rec *records;
    unsigned char count;
} Obj;

static inline void G2_SetOBJPosition(Rec *oam, int x, int y) {
    oam->a = (oam->a & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

static inline void G2_GetOBJPosition(const Rec *oam, unsigned int *x, unsigned int *y) {
    *x = (oam->a & 0x01ff0000) >> 16;
    *y = oam->a & 0xff;
}

void FUN_overlay_15__0213596c(Obj *p, int index, int x, int y) {
    Rec *records = p->records;
    if (index >= 0) {
        G2_SetOBJPosition(&records[index], x, y);
    } else {
        int x0, y0;
        int dx, dy;
        int i;
        G2_GetOBJPosition(&records[0], (unsigned int *)&x0, (unsigned int *)&y0);
        G2_SetOBJPosition(&records[0], x, y);
        dx = x - x0;
        dy = y - y0;
        for (i = 1; i < p->count; i++) {
            int cx, cy;
            G2_GetOBJPosition(&records[i], (unsigned int *)&cx, (unsigned int *)&cy);
            G2_SetOBJPosition(&records[i], cx + dx, cy + dy);
        }
    }
}
