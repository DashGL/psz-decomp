// flags: -O4,s
extern void FUN_020a4c9c(void *, void *, void *);
extern void FUN_020a4c80(void *, void *, void *);

typedef struct {
    unsigned char pad0[14];
    signed char group;
    unsigned char pad1[5];
} Rec_a5330;

typedef struct {
    unsigned char pad0[0x4c];
    Rec_a5330 *records;
    int count;
    unsigned short items[64];
    int active;
} S_a5330;

void FUN_020a5330(S_a5330 *s, int index) {
    Rec_a5330 *record = &s->records[index];
    int i;
    if (record->group >= 0) {
        for (i = 0; i < s->count; i++) {
            if (i != index) {
                signed char pg = s->records[i].group;
                if (pg == record->group) {
                    FUN_020a4c9c(s, record, &s->items[i]);
                }
            }
        }
    }
    s->active = (short)index;
    FUN_020a4c80(s, record, &s->items[index]);
}
