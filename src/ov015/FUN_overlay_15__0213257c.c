// flags: -O4,p
struct G_257c {
    void *unk;
    void **sprites;
};
struct Pos_257c {
    unsigned short x;
    unsigned short y;
};
extern struct G_257c DAT_0213e8cc;
extern const unsigned char DAT_0213a6b0[][5];
extern const unsigned char DAT_0213a6bf[][5];
extern const struct Pos_257c DAT_0213a6ce[];
extern void *FUN_overlay_15__0213587c(void *, unsigned int);
extern void FUN_overlay_15__02135aac(unsigned int, unsigned int, void *);
extern void FUN_overlay_15__02135a10(void *, int, unsigned int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__0213590c(void *, int, unsigned int, unsigned int);
extern void FUN_overlay_15__021328b0(unsigned int);

void FUN_overlay_15__0213257c(unsigned int mode) {
    int i;
    for (i = 0; i < 5; i += 2) {
        void *slot = FUN_overlay_15__0213587c(DAT_0213e8cc.sprites[i], 0);
        FUN_overlay_15__02135aac(1, DAT_0213a6b0[mode][i], slot);
        FUN_overlay_15__02135a10(DAT_0213e8cc.sprites[i], -1, 0);
        FUN_overlay_15__0213596c(DAT_0213e8cc.sprites[i], -1, DAT_0213a6ce[i].x, DAT_0213a6ce[i].y);
        FUN_overlay_15__0213590c(DAT_0213e8cc.sprites[i], -1, 0, DAT_0213a6bf[mode][i]);
    }
    FUN_overlay_15__021328b0(mode);
}
