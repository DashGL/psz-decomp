//cpp
// flags: -O2,p
extern "C" {
extern void *FUN_020ba894(unsigned int);
}

struct Item {
    unsigned int a, b, c;
    Item() { a = 0; b = 0; c = 0; }
};

struct Block {
    Block *next;
    Item items[64];
    int count;
    Block() { count = 0; next = 0; }
    static inline void *operator new(unsigned long sz) {
        return FUN_020ba894((unsigned int)sz);
    }
};

extern "C" {
extern Block *DAT_0210e244;
}

enum { E0 = 0, E1 = 1 };

extern "C" void *FUN_02050cfc(void) {
    Block *p = DAT_0210e244;
    Block *last = 0;
    while (p) {
        if (((p->count >= 64) ? E1 : E0) == 0) {
            return p;
        }
        last = p;
        p = p->next;
    }
    p = new Block();
    if (last) {
        last->next = p;
    } else {
        DAT_0210e244 = p;
    }
    return p;
}
