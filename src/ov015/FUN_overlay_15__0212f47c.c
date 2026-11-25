// flags: -O4,p
typedef struct { unsigned short x, y; } Coord_15;
typedef struct { int pad; void *a[3]; void *b[3]; } State_15_f47c;
typedef struct { int pad; State_15_f47c *state; } Global_15_f47c;
extern Global_15_f47c DAT_0213e88c;
extern const Coord_15 DAT_0213a4e6[];
extern const unsigned char DAT_0213a4c4[];
extern int FUN_overlay_15__02131ba0(int);
extern void *FUN_overlay_15__02135b14(int, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);

void FUN_overlay_15__0212f47c(void) {
    int i;
    const Coord_15 *c = DAT_0213a4e6;
    for (i = 0; i < 3; i++, c++) {
        int st = FUN_overlay_15__02131ba0(i);
        if (st == 0xff) {
            st = 3;
        } else {
            int j = i + 3;
            DAT_0213e88c.state->b[i] = FUN_overlay_15__02135b14(0, 17, 1);
            FUN_overlay_15__0213596c(DAT_0213e88c.state->b[i], -1, DAT_0213a4e6[j].x, DAT_0213a4e6[j].y);
            FUN_overlay_15__02135a10(DAT_0213e88c.state->b[i], -1, 3);
        }
        DAT_0213e88c.state->a[i] = FUN_overlay_15__02135b14(0, DAT_0213a4c4[st], 1);
        FUN_overlay_15__0213596c(DAT_0213e88c.state->a[i], -1, c->x, c->y);
        FUN_overlay_15__02135a10(DAT_0213e88c.state->a[i], -1, 3);
    }
}
