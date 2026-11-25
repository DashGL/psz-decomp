// flags: -O4,s
//cpp
struct Key {
    unsigned char bytes[4];
};

struct Record {
    Key key;
    unsigned int w[3];
};

extern "C" {
extern void *FUN_0203955c(Record *);
extern Record FUN_0204e994(int, int);
extern void FUN_0204ed4c(int, Record *);
extern void FUN_0204eff0(int, Record *);
extern void FUN_0204ede0(int, Record *);
extern void FUN_0204ecbc(int, Record *);

int FUN_0204ead0(int actor, int type, int value) {
    Record record;
    Key k;
    int result = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    int i;
    unsigned int sum;
    FUN_0203955c(&record);
    switch (type) {
    case 0:
    case 1:
    case 2:
        record = FUN_0204e994(type, value);
        break;
    case 3:
    case 4:
    case 5:
        record = FUN_0204e994(type, value);
        break;
    case 6:
    case 7:
    case 8:
        record = FUN_0204e994(type, value);
        first = 1;
        break;
    case 10:
        record = FUN_0204e994(type, value);
        second = 1;
        break;
    case 9:
        record = FUN_0204e994(type, value);
        third = 1;
        break;
    }
    sum = 0;
    for (i = 0; i < 3; i++) {
        sum += record.w[i];
    }
    k = record.key;
    {
        unsigned int kv = ((unsigned int)k.bytes[0] << 24) |
                          ((unsigned int)k.bytes[1] << 16) |
                          ((unsigned int)k.bytes[2] << 8) |
                          (unsigned int)k.bytes[3];
        int is_ff = !!(kv == 0xFFFFFFFFu);
        int is_empty = !!(is_ff && sum == 0);
        if (is_empty == 0) {
            if (first) {
                FUN_0204ed4c(actor, &record);
            } else if (second) {
                FUN_0204eff0(actor, &record);
            } else if (third) {
                FUN_0204ede0(actor, &record);
            } else {
                FUN_0204ecbc(actor, &record);
            }
            result = 1;
        }
    }
    return result;
}
}
