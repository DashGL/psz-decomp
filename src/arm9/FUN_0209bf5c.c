// flags: -O4,p
struct Item9BF5C {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    union {
        unsigned int raw;
        struct {
            unsigned int lo : 4;
            unsigned int a3 : 7;
            unsigned int a2 : 7;
            unsigned int a1 : 7;
            unsigned int hi : 7;
        } bf;
    } f4;
    union {
        unsigned int raw;
        struct {
            unsigned int lo : 2;
            unsigned int elem : 3;
            unsigned int mid : 19;
            unsigned int a4 : 7;
            unsigned int top : 1;
        } bf;
    } f8;
};

extern int FUN_020a7800(struct Item9BF5C *, int, int);
extern int FUN_0209beac(int);

void FUN_0209bf5c(void *self, struct Item9BF5C *item) {
    int a1 = item->f3;
    int kind = *(volatile unsigned char *)&item->f3;
    if (FUN_020a7800(item, a1, -1) != 0) {
        item->f4.bf.a1 = 0;
        item->f4.bf.a2 = 0;
        item->f4.bf.a3 = 0;
        item->f8.bf.a4 = 0;
        item->f4.bf.hi = 0;
        item->f8.bf.elem = 0;
        if (kind < 1) {
            item->f4.bf.hi = 20;
            return;
        }
        if (kind < 5) {
            int v = FUN_0209beac(0xb) + 0xf;
            switch (kind) {
            case 1:
                item->f4.raw = (item->f4.raw & 0xfe03ffffU) | ((unsigned int)v << 18);
                break;
            case 2:
                item->f4.raw = (item->f4.raw & 0xfffc07ffU) | ((unsigned int)v << 11);
                break;
            case 3:
                item->f4.raw = (item->f4.raw & 0xfffff80fU) | ((unsigned int)v << 4);
                break;
            case 4:
                item->f8.raw = (item->f8.raw & 0x80ffffffU) | ((unsigned int)v << 24);
                break;
            }
            {
                int e = FUN_0209beac(4) + 1;
                item->f8.raw = (item->f8.raw & ~0x1cU) | ((unsigned int)e << 2);
            }
        }
    }
}
