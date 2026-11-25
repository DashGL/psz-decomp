// flags: -O4,p
extern unsigned char * volatile DAT_overlay_15__0213e8d8;
extern const unsigned short DAT_overlay_15__0213a798[][2];
extern const unsigned char DAT_overlay_15__0213a7f8[];
extern const unsigned short DAT_overlay_15__0213a7c8[][2][2];
extern const unsigned char DAT_overlay_15__0213a74e[][2];
extern const unsigned short DAT_overlay_15__0213a7b2[][2];
extern const unsigned short DAT_overlay_15__0213a7b0[][2];
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02133344(void *, int);
extern void FUN_overlay_15__02136394(int, int, int, int, void *);
extern void FUN_overlay_15__02136460(int, int, const void *);
void FUN_overlay_15__0213322c(int y) {
    unsigned char *state;
    int mode, i, top, bottom;
    unsigned short rect[4];
    state = DAT_overlay_15__0213e8d8;
    FUN_overlay_15__0213596c(*(void **)state, -1, DAT_overlay_15__0213a798[state[28]][0], y);
    state = DAT_overlay_15__0213e8d8;
    FUN_overlay_15__0213596c(*(void **)(state + 4), -1, DAT_overlay_15__0213a798[state[28]][0] + 8, y + 8);
    state = DAT_overlay_15__0213e8d8;
    FUN_overlay_15__02133344(*(void **)state, y);
    state = DAT_overlay_15__0213e8d8;
    FUN_overlay_15__02133344(*(void **)(state + 4), y);
    state = DAT_overlay_15__0213e8d8;
    mode = state[28];
    for (i = 0; i < DAT_overlay_15__0213a7f8[mode]; i++) {
        int entry = DAT_overlay_15__0213a74e[mode][i];
        state = DAT_overlay_15__0213e8d8;
        {
        const unsigned short *position = DAT_overlay_15__0213a7c8[mode][entry];
        FUN_overlay_15__0213596c(*(void **)(state + 8 + 4 * i), -1, position[0], y + position[1] - DAT_overlay_15__0213a798[mode][1]);
        }
        state = DAT_overlay_15__0213e8d8;
        FUN_overlay_15__02133344(*(void **)(state + 8 + 4 * i), y);
        state = DAT_overlay_15__0213e8d8;
        mode = state[28];
    }
    top = (unsigned char)y;
    if (top >= 192) {
        bottom = 0;
        top = 0;
    } else {
        bottom = top + DAT_overlay_15__0213a7b2[mode][0];
    }
    if (bottom > 192) bottom = 192;
    FUN_overlay_15__02136394(DAT_overlay_15__0213a798[mode][0], top, DAT_overlay_15__0213a798[mode][0] + DAT_overlay_15__0213a7b0[mode][0], bottom, rect);
    FUN_overlay_15__02136460(0, 0, rect);
}
