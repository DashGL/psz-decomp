// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Item;

typedef struct {
    unsigned short f0 : 11;
    unsigned short limit : 5;
} ItemInfo;

extern ItemInfo *FUN_02084638(Item *);
extern int FUN_020b0244(Item *);
extern int FUN_020458f8(Item *, Item *);
extern int FUN_02084944(Item *);
extern int FUN_020849d4(void *);

enum { E0 = 0, E1 = 1 };

int FUN_020b00e8(char *s, char *item, int unlimited, int *newSlot) {
    Item a, b, d, c, e, f;
    ItemInfo *info;
    int limit, i, valid, room;
    a = *(Item *)item;
    info = FUN_02084638(&a);
    if (newSlot)
        *newSlot = 0;
    if (!info)
        return -1;
    limit = info->limit;
    if (!limit)
        limit = 99;
    if (!((limit > 1) ? E1 : E0))
        return -1;
    for (i = 0; i < *(short *)(s + 8); ++i) {
        b = *(Item *)(*(char **)(s + 4) + 16 * i);
        valid = !FUN_020b0244(&b);
        if (valid) {
            c = *(Item *)(*(char **)(s + 4) + 16 * i);
            d = *(Item *)item;
            valid = FUN_020458f8(&c, &d) != 0;
        }
        if (valid) {
            if (unlimited)
                room = 999;
            else {
                e = *(Item *)item;
                room = FUN_02084944(&e);
            }
            room -= FUN_020849d4(*(char **)(s + 4) + 16 * i);
            if (room - FUN_020849d4(item) >= 0)
                return FUN_020849d4(item);
            return room;
        }
    }
    if (newSlot)
        *newSlot = 1;
    if (unlimited)
        room = 999;
    else {
        f = *(Item *)item;
        room = FUN_02084944(&f);
    }
    if (room - FUN_020849d4(item) >= 0)
        return FUN_020849d4(item);
    return room;
}
