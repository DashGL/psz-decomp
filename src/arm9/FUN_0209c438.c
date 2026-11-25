//cpp
// flags: -O3,s
typedef struct {
    short a[4]; short b[4]; short c[4]; unsigned char flag; unsigned char pad[3];
} Slot;
typedef struct {
    Slot *ptr; int f04, f08, f0c; short f10; unsigned char f12, f13, f14, f15, f16, f17;
} Rec;
typedef struct {
    void *arr[4]; Rec recs[4]; Slot slots[4];
} Obj;
#ifdef __cplusplus
extern "C"
#endif
void *FUN_0209c438(Obj *s) {
    for (int i = 0; i < 4; i++) {
        s->arr[i] = 0;
        Rec *rec = &s->recs[i];
        Slot *slot = &s->slots[i];
        rec->f04 = 0; rec->f08 = 0; rec->f0c = 0; rec->f10 = 0; rec->f12 = 0; rec->f13 = 0;
        rec->f14 = 19; rec->f15 = 28; rec->f16 = 0xff;
        rec->ptr = slot;
        for (int j = 0; j < 4; j++) { slot->b[j] = -1; slot->c[j] = -1; slot->a[j] = -1; }
        slot->flag = 1;
    }
    return s;
}
