// flags: -O4,p
typedef struct {
    unsigned char lo4 : 4;
    unsigned char hi4 : 4;
    unsigned char id;
    unsigned char f2;
    unsigned char len;
    unsigned char data[0x20];
} Item;

typedef struct {
    unsigned char pad0[0xa];
    unsigned short len;
    unsigned char data[0xb4];
} Entry;

typedef struct {
    unsigned char pad0[0x300];
    Item items[10];
    unsigned char pad468[0x470 - 0x300 - 10 * 0x24];
    Entry entries[11];
    unsigned char pad_cb0[0xd0c - 0x470 - 11 * 0xc0];
    unsigned char lo6 : 6;
    unsigned char flag6 : 2;
    unsigned char pad_d0d[3];
    unsigned char count;
    unsigned char pad_d11[2];
    unsigned char cur_idx;
} State;

extern int FUN_020daf6c(void *);
extern int FUN_020db9d4(void *);
extern int FUN_02003f38(const void *, const void *, unsigned int);

unsigned char FUN_020db4e0(State *p0) {
    Entry *entry = &p0->entries[p0->cur_idx];
    int res = 0;
    int i;
    int found;

    if (p0->flag6 == 0) {
        found = 0;
        if (entry->len == 0x20) {
            res = FUN_020daf6c(entry);
            if (res > 0) {
                found++;
            } else {
                res = 0;
            }
        } else if (entry->len == 8) {
            res = FUN_020db9d4(entry);
            if (res != 0) {
                found++;
            } else {
                res = 0;
            }
        }
        {
            for (i = 0; i < p0->count; i++) {
                if (entry->len == p0->items[i].len &&
                    FUN_02003f38(entry->data, p0->items[i].data, entry->len) == 0) {
                    if (found == 0) {
                        res = p0->items[i].id;
                    } else {
                        p0->items[i].hi4 = 1;
                        p0->flag6 = 1;
                    }
                    found++;
                }
            }
        }
    } else {
        i = 0;
        found = 0;
        for (; i < p0->count; i++) {
            if (p0->items[i].hi4 == 1) {
                if (found == 0) {
                    p0->items[i].hi4 = 0;
                    res = p0->items[i].id;
                }
                found++;
            }
        }
        if (found == 1) {
            p0->flag6 = 0;
        }
    }
    return (unsigned char)res;
}
