//cpp
// flags: -O4,s
struct Vec {
    unsigned int x, y, z;
};

struct GridCfg {
    int scaleRow;
    int scaleCol;
    unsigned int offX;
    unsigned int offY;
    unsigned int offZ;
};

extern int DAT_0219ce14[];
extern int DAT_0219ce10[];

extern "C" {
extern void FUN_overlay_31__0219a944(void *, const signed char *, signed char *, signed char *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_0208e78c(Vec *, const int *, const int *, const int *);
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);

#define TO_FX(v) ((int)((v) > 0 ? 0.5f + (float)((v) << 12) : (float)((v) << 12) - 0.5f))

void FUN_overlay_31__0219a844(void *output, void *manager, const signed char *record) {
    signed char coords[2];
    Vec pos;
    int scaledCol;
    int colFx;
    int zero;
    int scaledRow;
    int rowFx;
    const int *pZero;
    const int *pRow;
    GridCfg *cfg;
    coords[1] = -1;
    coords[0] = -1;
    FUN_overlay_31__0219a944(manager, record, &coords[1], &coords[0]);
    rowFx = TO_FX(coords[0]);
    zero = 0;
    pRow = &rowFx;
    pZero = &zero;
    colFx = TO_FX(coords[1]);
    FUN_020bc5cc(&scaledCol, &DAT_0219ce14[0], &colFx);
    FUN_020bc5cc(&scaledRow, &DAT_0219ce10[0], pRow);
    FUN_0208e78c(&pos, &scaledCol, pZero, &scaledRow);
    cfg = (GridCfg *)(DAT_0219ce14 - 1);
    FUN_02035408(output, pos.x + cfg->offX, pos.y + cfg->offY, pos.z + cfg->offZ);
}
}
