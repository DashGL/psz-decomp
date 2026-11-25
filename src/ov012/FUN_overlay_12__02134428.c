// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char id[4]; unsigned data[3]; unsigned price; } Item;
typedef struct { unsigned char id[4]; unsigned short price; } Price;
extern void FUN_0209bf08(Item *, int);
extern unsigned FUN_02098d84(const void *);
extern void *FUN_overlay_12__02134550(void *, const void *);
extern int *FUN_overlay_12__021345c4(void *, const void *);
extern int FUN_overlay_12__021345f8(Item *, int);

void FUN_overlay_12__02134428(unsigned *self, Item *item, const unsigned char *id) {
    item->price = 0;
    item->id[0] = id[0]; item->id[1] = id[1]; item->id[2] = id[2]; item->id[3] = id[3];
    FUN_0209bf08(item, 0);
    if ((self[1] == 4) ? E1 : E0) {
        unsigned *catalog = (unsigned *)self[6];
        Price *prices = (Price *)catalog[40];
        if (prices) {
            int count = (int)catalog[41];
            unsigned key = FUN_02098d84(id);
            int i;
            for (i = 0; i < count; i++) {
                if (key == FUN_02098d84(prices + i)) {
                    item->price = prices[i].price;
                    break;
                }
            }
        }
    } else {
        void *group = FUN_overlay_12__02134550(self, id);
        int *entry = FUN_overlay_12__021345c4(group, id);
        item->price = FUN_overlay_12__021345f8(item, *entry);
    }
}
