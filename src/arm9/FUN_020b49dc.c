// flags: -O4,s
typedef struct { unsigned char b[4]; } Item_020b49dc;
typedef struct { Item_020b49dc item; int w[3]; } Record_020b49dc;
typedef struct { int x, y, z; } Vec_020b49dc;
extern const Vec_020b49dc UNK_020f5884;
extern int UNK_0211b274;
extern char *FUN_0204daa8(int);
extern void *FUN_0204f3b8(void);
extern void FUN_020b4b30(void *, Record_020b49dc *), FUN_020b5a50(void *, int, void *), FUN_02046724(Vec_020b49dc *, int, Record_020b49dc *, int), FUN_0208092c(int), FUN_020b5200(void *, int, Record_020b49dc *, int, Vec_020b49dc *), FUN_020b4d28(void *, int, int, int, int, Record_020b49dc *, Vec_020b49dc *);
extern int FUN_020b5a24(void *, int, Record_020b49dc *), FUN_0203a1a8(Item_020b49dc *, int), FUN_0204dab0(int), FUN_0204dac4(int);
void FUN_020b49dc(int id, int mode, int arg2, int arg3) {
    Record_020b49dc record;
    Vec_020b49dc vec;
    Item_020b49dc a, b, c;
    char *actor = FUN_0204daa8(id);
    void *component = 0;
    int kind, special, first, second;
    if (actor) component = *(void **)(actor + 432);
    if (!actor || !component) return;
    FUN_020b4b30(component, &record);
    kind = FUN_020b5a24(FUN_0204f3b8(), id, &record);
    if (kind != 3) FUN_020b5a50(FUN_0204f3b8(), kind, component);
    vec = UNK_020f5884;
    special = 0;
    a = record.item;
    if (FUN_0203a1a8(&a, 10) && (mode == 3 || mode == 8)) special = 1;
    FUN_02046724(&vec, id, &record, special);
    if (mode == 4) {
        if (FUN_0204dab0(id)) UNK_0211b274 = 0;
        FUN_0208092c(id);
        first = 0;
        b = record.item;
        if (FUN_0203a1a8(&b, 11) && (record.w[0] & 15) == 2) first = 1;
        second = 0;
        c = record.item;
        if (FUN_0203a1a8(&c, 13) && (record.w[0] & 15) == 1) second = 1;
        if (FUN_0204dab0(id) || FUN_0204dac4(id) || first || second) {
            FUN_020b5200(FUN_0204f3b8(), id, &record, arg2, &vec);
        }
    }
    FUN_020b4d28(FUN_0204f3b8(), id, mode, arg2, arg3, &record, &vec);
}
