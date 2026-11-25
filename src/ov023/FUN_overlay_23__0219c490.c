// flags: -O4,s
typedef struct Item { int *values; int count; } Item;
typedef struct Tail { int a; volatile int b; } Tail;
typedef struct Self {
    unsigned char pad0[0x30];
    int f30, f34, f38, f3c, f40, f44, f48, f4c, f50, f54, f58, f5c, f60;
    unsigned char pad1[0xe4 - 0x64];
    Item *items;
    int count;
    Tail tail;
} Self;
extern void *FUN_020ba8a0(unsigned);
void FUN_overlay_23__0219c490(Self *self) {
    int a = self->f30;
    int b = self->f34;
    int c = self->f3c;
    int d = self->f40;
    int e = self->f44;
    int f = self->f48;
    int g = self->f4c;
    int h = self->f50;
    int j = self->f58;
    int k = self->f5c;
    int l = self->f60;
    Item items[11] = {
        { &a, 1 }, { &b, 1 }, { &c, 1 }, { &d, 1 },
        { &e, 1 }, { &f, 1 }, { &g, 1 }, { &h, 1 },
        { &j, 1 }, { &k, 1 }, { &l, 1 },
    };
    int i;
    
    Tail *sub;
    self->items = (Item *)FUN_020ba8a0(sizeof(items));
    self->count = 11;
    for (i = 0; i < 11; i++) {

        Item *src = &items[i];
        Item *base = self->items;
        Item *entry = &base[i];
        int count = src->count;
        int t;
        entry->count = count;
        entry->values = (int *)FUN_020ba8a0((unsigned)count * 4);
        for (t = 0; t < count; t++) entry->values[t] = src->values[t];
    }
    sub = &self->tail;
    sub->a = -1;
    sub->b = -1;
    sub->a = 0;
}
