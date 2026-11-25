//cpp
// flags: -O4,s
struct Record {
    unsigned char f00;
    unsigned char f01;
    unsigned short specialRate;
    unsigned int specialItem;
    unsigned int directItems[3];
    unsigned short directRates[3];
    unsigned short table1Rate;
    unsigned short table2Rate;
    unsigned short fallbackA;
    unsigned short fallbackB;
};

struct Row {
    unsigned int items[5];
    unsigned short rates[5];
    unsigned short pad1e;
};

struct Table1 {
    unsigned short f00;
    unsigned short count;
    unsigned int f04;
    Row *rows;
};

struct Table2 {
    unsigned int *items;
    unsigned short *thresholds;
    unsigned char offsets[8];
};

extern "C" {
extern void *FUN_02031a74(void);
extern int FUN_020322c0(void *);
extern unsigned int FUN_0209ad1c(unsigned int);
extern void FUN_02045990(void *, void *);
extern void FUN_0209ae8c(void *, int, int);
}

static inline int roll_mul(unsigned int rate, unsigned int mul) {
    return (FUN_0209ad1c(5000000) < rate * mul) ? 1 : 0;
}

static inline int roll_50k(unsigned int rate) {
    return (FUN_0209ad1c(50000) < rate) ? 1 : 0;
}

extern "C" int FUN_0209aba8(char *s, Record *record, int special, void *out) {
    if (!((record->f00 == 0) ? 1 : 0)) {
        int multiplier = FUN_020322c0(FUN_02031a74());
        if (special) {
            unsigned int rate = record->specialRate;
            if (roll_mul(rate, multiplier)) {
                FUN_02045990(out, &record->specialItem);
                return 1;
            }
        }
        for (int i = 0; i < 3; i++) {
            unsigned int rate = record->directRates[i];
            if (roll_mul(rate, multiplier)) {
                FUN_02045990(out, &record->directItems[i]);
                return 1;
            }
        }
        if (roll_50k(record->table1Rate)) {
            Table1 *t1 = *(Table1 **)(s + 0xa4);
            if (t1->count <= record->f01) {
                return 0;
            }
            Row *row = &t1->rows[record->f01];
            for (int i = 0; i < 5; i++) {
                if (roll_50k(row->rates[i])) {
                    FUN_02045990(out, &row->items[i]);
                    return 1;
                }
            }
        } else if (roll_50k(record->table2Rate)) {
            if (*(int *)(s + 0x18) < 8) {
                int limit = (record->table2Rate > 50000) ? 9 : 255;
                unsigned int roll = FUN_0209ad1c(50000);
                Table2 *t2 = *(Table2 **)(s + 0xa8);
                unsigned short *base = t2->thresholds;
                unsigned short *entry = base + t2->offsets[*(int *)(s + 0x18)];
                for (int i = 0; i < limit; i++, entry++) {
                    if (roll < *entry) {
                        FUN_02045990(out, &t2->items[((unsigned int)((char *)entry - (char *)base)) >> 1]);
                        return 1;
                    }
                }
            }
        }
        FUN_0209ae8c(out, record->fallbackA, record->fallbackB);
        return 1;
    }
    return 0;
}
