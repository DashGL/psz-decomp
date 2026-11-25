// flags: -O4,p
extern int FUN_020b6200(void *, void *);
extern int FUN_020b737c(void *, void *, int);
extern int FUN_02084758(int, int, int);

typedef struct {
    unsigned char pad0[0x24];
    signed char f24;
    unsigned char pad1;
    signed char f26;
    unsigned char pad2[0x5b - 0x27];
    unsigned char stats[11];
} Obj;

int FUN_020b7030(Obj *s, int index) {
    int items[20];
    int value = 0;
    if (index >= 0 && index < 11) {
        value = s->stats[index];
        if (value > 0) {
            int limit;
            FUN_020b6200(s, items);
            value += FUN_020b737c(s, items, 29);
            limit = FUN_02084758(index, s->f24, s->f26);
            if (value > limit) value = limit;
        }
    }
    return value;
}
