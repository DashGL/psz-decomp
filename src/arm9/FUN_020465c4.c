// flags: -O4,s
extern int DAT_020f8e50[];
extern unsigned char DAT_020ed5da[];
extern unsigned char DAT_020ed5c6[];
extern unsigned char DAT_020ed5a8[];
extern int FUN_02046660(void *, void *);

typedef struct {
    unsigned char b[4];
} Record;

int FUN_020465c4(void *s, int kind, Record *src) {
    int result = 0;
    unsigned char *table;
    int count;
    Record r;
    int value;
    int i;
    switch (kind) {
    case 0:
        table = DAT_020ed5da;
        count = DAT_020f8e50[0];
        break;
    case 1:
        table = DAT_020ed5c6;
        count = DAT_020f8e50[1];
        break;
    case 2:
        table = DAT_020ed5a8;
        count = DAT_020f8e50[2];
        break;
    default:
        table = 0;
        count = 0;
        break;
    }
    r = *src;
    value = FUN_02046660(s, &r);
    if (table != 0) {
        for (i = 0; i < count; i++) {
            unsigned char *p = table + 4 * i;
            if (p[0] == r.b[0] && p[1] == r.b[1] && p[3] == r.b[3] && value == p[2]) {
                result = 1;
                break;
            }
        }
    }
    return result;
}
