// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Item;

typedef struct {
    unsigned char *data;
    unsigned char kinds[4];
} Row8;

typedef struct {
    unsigned char *data;
    unsigned char kinds[8];
} Row12;

typedef struct {
    void *alloc;
    int pad[6];
    Item *items1;
    Item *items2;
    int pad24;
    int counts[5];
} Shop;

extern void FUN_02099498(void *, void *);
extern void FUN_02045848(Item *);
extern void FUN_02045990(Item *, Item *);
extern void FUN_020c13ec(void *, void *);
extern void FUN_020c3d58(void *, int, void *);
extern void *FUN_020c13c8(void *, int, int);
extern void *FUN_020ba440(void *);
extern int FUN_020c3d34(void *, int);

void FUN_02099620(Shop *s, void *archive, int level) {
    Item a;
    Item b;
    int tier;
    int size;
    int i, j;

    if (level < 1 || level > 100) {
        return;
    }
    FUN_02099498(s, s->items1);
    FUN_02099498(s, s->items2);
    tier = (level - 1) / 5;
    s->items1 = (Item *)FUN_020c13c8(s->alloc, 0x3c, 0x10);
    size = FUN_020c3d34(archive, 2);
    if (size > 0) {
        void *buffer = FUN_020c13c8(s->alloc, size, 0x10);
        Row8 *rows8;
        FUN_020c3d58(archive, 2, buffer);
        rows8 = (Row8 *)FUN_020ba440(buffer);
        for (i = 0; i < 5; i++) {
            s->counts[i] = 1;
            if (rows8[i].data) {
                unsigned char *values = rows8[i].data + tier * 8;
                for (j = 0; j < 3; j++) {
                    FUN_02045848(&a);
                    a.b[0] = 0;
                    a.b[3] = values[j * 2];
                    a.b[1] = rows8[i].kinds[j];
                    a.b[2] = values[j * 2 + 1];
                    FUN_02045990(&s->items1[j + i * 3], &a);
                }
                s->counts[i] = *(short *)(values + 6);
            }
        }
        FUN_020c13ec(s->alloc, buffer);
    }
    s->items2 = (Item *)FUN_020c13c8(s->alloc, 0x64, 0x10);
    size = FUN_020c3d34(archive, 1);
    if (size > 0) {
        void *buffer = FUN_020c13c8(s->alloc, size, 0x10);
        Row12 *rows12;
        FUN_020c3d58(archive, 1, buffer);
        rows12 = (Row12 *)FUN_020ba440(buffer);
        for (i = 0; i < 5; i++) {
            if (rows12[i].data) {
                unsigned char *values = rows12[i].data + tier * 10;
                for (j = 0; j < 5; j++) {
                    FUN_02045848(&b);
                    if (j == 0) b.b[0] = 1; else b.b[0] = 2;
                    b.b[3] = values[j * 2];
                    b.b[1] = rows12[i].kinds[j];
                    b.b[2] = values[j * 2 + 1];
                    FUN_02045990(&s->items2[j + i * 5], &b);
                }
            }
        }
        FUN_020c13ec(s->alloc, buffer);
    }
}
