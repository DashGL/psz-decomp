// flags: -O4,p
struct Pair { unsigned short x, y; };
extern void *DAT_0213e818;
extern const struct Pair DAT_02139dd8[];
extern void *FUN_overlay_15__02135f98(unsigned, unsigned);
extern void *FUN_overlay_15__02127f30(void *, unsigned);
extern unsigned FUN_overlay_15__02125430(void);
extern unsigned FUN_overlay_15__02127e40(void);
extern void FUN_overlay_15__0213627c(void *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, void *);
extern void FUN_overlay_15__02136168(void *, unsigned short, unsigned short, unsigned, unsigned, const char *);
extern void FUN_overlay_15__02136368(void *);

void FUN_overlay_15__021253b4(const char *label, unsigned message) {
    void *renderer = FUN_overlay_15__02135f98(0, 0);
    void *text = FUN_overlay_15__02127f30(DAT_0213e818, message);
    unsigned style = FUN_overlay_15__02125430();
    unsigned x, y;
    FUN_overlay_15__0213627c(renderer, 13, 60, 230, 94, 2, style, text);
    x = FUN_overlay_15__02127e40();
    y = FUN_overlay_15__02127e40();
    FUN_overlay_15__02136168(renderer, DAT_02139dd8[x].x, DAT_02139dd8[y].y, 2, 521, label);
    FUN_overlay_15__02136368(renderer);
}
