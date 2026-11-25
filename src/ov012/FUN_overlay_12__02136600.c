// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Id;

typedef struct {
    unsigned int w[3];
} Payload;

typedef struct {
    Id id;
    Payload payload;
} Record;

typedef struct {
    Id id;
    Payload payload;
    int full;
} Slot;

typedef struct {
    int pad0;
    Slot slots[4];
    int count;
    int meseta;
} Obj;

extern char *FUN_02078cb8(void);
extern char *FUN_02086e3c(void);
extern void *FUN_02031a74(void);
extern void *FUN_02031cb8(void *, int, int);
extern void *FUN_020942dc(void *, int);
extern void FUN_02094338(Record *, void *);
extern int FUN_020b025c(void *, void *);

void FUN_overlay_12__02136600(Obj *self)
{
    char *pending = FUN_02078cb8();
    void *mission = FUN_02031cb8(FUN_02031a74(), *(int *)(pending + 8), *(signed char *)(pending + 12));

    if (mission) {
        unsigned char *reward = (unsigned char *)FUN_020942dc(mission, *(signed char *)(pending + 13));
        int count = reward[8];
        if (count > 0) {
            char *list;
            if (count > 4) {
                count = 4;
            }
            list = *(char **)(reward + 4);
            if (list) {
                char *inv = FUN_02086e3c() + 16;
                int i;
                for (i = 0; i < count; i++) {
                    Record item, tmp;
                    Slot *dst;
                    FUN_02094338(&tmp, list + 12 * i);
                    item = tmp;
                    dst = &self->slots[i];
                    dst->id = item.id;
                    dst->payload = item.payload;
                    dst->full = (FUN_020b025c(inv, &item) == 0);
                }
                self->count = count;
            }
        }
        self->meseta = *(int *)reward;
    }
}
