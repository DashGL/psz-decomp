// flags: -O4,s
struct Tbl { unsigned char pad[14]; unsigned short c[4]; };
extern const struct Tbl DAT_0213a344;
extern unsigned char *DAT_0213e864;
extern const unsigned char DAT_0213a384[];
extern void FUN_overlay_15__021362f8(void *, unsigned int);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, const unsigned short *);
extern void FUN_overlay_15__02136368(void *);
void FUN_overlay_15__0212c55c(void) {
    unsigned short cell[6];
    int i;
    const unsigned char *p;
    cell[2] = DAT_0213a344.c[0];
    cell[3] = DAT_0213a344.c[1];
    cell[4] = DAT_0213a344.c[2];
    cell[5] = DAT_0213a344.c[3];
    cell[4] = 11; cell[5] = 16;
    FUN_overlay_15__021362f8(*(void **)DAT_0213e864, 0);
    cell[1] = 0;
    p = DAT_0213a384;
    for (i = 0; i < 12; i++, p++) {
        unsigned char *owner = DAT_0213e864;
        int x;
        cell[0] = owner[i + 8];
        x = *p;
        cell[2] = x;
        FUN_overlay_15__0213627c(*(void **)owner, x, cell[3], cell[4], cell[5], 2, 1152, cell);
    }
    FUN_overlay_15__02136368(*(void **)DAT_0213e864);
}