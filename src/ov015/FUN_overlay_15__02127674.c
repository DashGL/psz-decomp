// flags: -O4,s
extern void *FUN_overlay_15__0213587c(void *, int);
extern void FUN_overlay_15__02135aac(int, int, void *);
extern void FUN_overlay_15__02135a10(void *, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
typedef struct {
    char pad0[0x58];
    void *obj;
    char pad1[7];
    signed char idx;
} State;
extern State *DAT_0213e7e0;
typedef struct { unsigned short x; unsigned short y; } Pos;
extern Pos DAT_0213a166[];
void FUN_overlay_15__02127674(void) {
    int graphic = DAT_0213e7e0->idx <= 11 ? 68 : 69;
    void *entry = FUN_overlay_15__0213587c(DAT_0213e7e0->obj, 0);
    int index;
    FUN_overlay_15__02135aac(0, graphic, entry);
    FUN_overlay_15__02135a10(DAT_0213e7e0->obj, -1, 2);
    index = DAT_0213e7e0->idx;
    FUN_overlay_15__0213596c(DAT_0213e7e0->obj, -1, DAT_0213a166[index].x, DAT_0213a166[index].y);
}
