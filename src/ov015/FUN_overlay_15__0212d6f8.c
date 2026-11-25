// flags: -O4,s
extern int FUN_0205c700(int, int);
extern void FUN_overlay_15__021362f8(void *, unsigned int);
extern void FUN_overlay_15__02136368(void *);
extern void FUN_overlay_15__0212d770(int, int);
extern void FUN_overlay_15__0212d87c(int, int);
extern void FUN_overlay_15__02130ff4(const void *, int, int, int);
extern void FUN_overlay_15__02130fe0(void);
extern void FUN_overlay_15__0212db94(void);
extern const unsigned short DAT_0213a3fa[];
extern struct {
    int pad;
    unsigned short pos;
    unsigned short pad2;
    char *owner;
} DAT_0213e86c;
void FUN_overlay_15__0212d6f8(void) {
    int i, idx, first;
    first = FUN_0205c700(DAT_0213e86c.pos, 29);
    FUN_overlay_15__021362f8(*(void **)(DAT_0213e86c.owner + 20), 0);
    for (i = 0, idx = first; i < 5; i++, idx++) FUN_overlay_15__0212d770(idx, i);
    FUN_overlay_15__02130ff4(*(unsigned short **)(DAT_0213e86c.owner + 8) + DAT_0213a3fa[first], 0, 30, 19);
    for (i = 0; i < 5; i++, first++) FUN_overlay_15__0212d87c(first, i);
    FUN_overlay_15__02130fe0();
    FUN_overlay_15__02136368(*(void **)(DAT_0213e86c.owner + 20));
    FUN_overlay_15__0212db94();
}
