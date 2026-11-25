// flags: -O4,s
typedef struct {
    short category;
    short index;
    int value;
} Entry;

typedef struct {
    Entry **storage;
    int count;
    Entry **groups[16];
    unsigned char sizes[16];
} Registry;

extern Registry *UNK_0211a210;
extern char UNK_0211a214[];
extern char UNK_0211a23c[];
extern Entry *volatile UNK_020f9b50[];
extern void FUN_02072f2c(void *);
extern void FUN_02072f74(void *);
extern void FUN_02072f94(void *);
extern void FUN_02001540(void *, int, int);
extern void *FUN_020ba894(int);
extern void *FUN_020ba8a0(int);

void FUN_02072e10(void) {
    int tables;
    Registry *s;
    int j1, i1, i2, i3, j4, i4;
    Entry **cursor;

    UNK_0211a210 = 0;
    FUN_02072f2c(UNK_0211a214);
    FUN_02072f74(UNK_0211a23c);
    s = FUN_020ba894(88);
    if (s) {
        s->storage = 0;
        s->count = 0;
        FUN_02072f94(s);
    }
    UNK_0211a210 = s;
    if (!s) {
        return;
    }
    FUN_02072f94(s);
    tables = 0;
    for (;;) {
        if (!UNK_020f9b50[tables]) {
            break;
        }
        tables++;
    }
    if (!tables) {
        return;
    }
    for (i1 = 0; i1 < tables; i1++) {
        Entry *volatile *row = &UNK_020f9b50[i1];
        for (j1 = 0; ; j1++) {
            Entry *entry = &(*row)[j1];
            if (entry->category < 0) {
                break;
            }
            if (entry->index + 1 > s->sizes[entry->category]) {
                s->sizes[entry->category] = entry->index + 1;
            }
        }
    }
    s->count = 0;
    for (i2 = 0; i2 < 16; i2++) {
        s->count += s->sizes[i2];
    }
    if (!s->count) {
        return;
    }
    s->storage = FUN_020ba8a0(s->count * 4);
    FUN_02001540(s->storage, 0, s->count * 4);
    cursor = s->storage;
    for (i3 = 0; i3 < 16; i3++) {
        if (s->sizes[i3]) {
            s->groups[i3] = cursor;
            cursor += s->sizes[i3];
        } else {
            s->groups[i3] = 0;
        }
    }
    for (i4 = 0; i4 < tables; i4++) {
        Entry *volatile *row = &UNK_020f9b50[i4];
        for (j4 = 0; ; j4++) {
            Entry *entry = &(*row)[j4];
            if (entry->category < 0) {
                break;
            }
            s->groups[entry->category][entry->index] = entry;
        }
    }
}
