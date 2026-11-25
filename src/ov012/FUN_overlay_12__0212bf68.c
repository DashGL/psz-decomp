// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[4]; } Id;
typedef struct { unsigned a, b, c; } Data;
typedef struct { Id id; Data data; } Item;
typedef struct { Id id; Data data; unsigned other; } Slot;
extern int FUN_overlay_12__02129fe4(const Item *);
extern int FUN_0203a820(const Id *, unsigned char);

int FUN_overlay_12__0212bf68(Slot *self, int index, const Item *item) {
    Id first, second;
    if (index >= 0 && index <= 7 && FUN_overlay_12__02129fe4(item)) {
        self[index].id = item->id;
        self[index].data = item->data;
        first = item->id;
        if (FUN_0203a820(&first, 0)) {
            second = item->id;
            if ((second.b[1] == 17) ? E1 : E0) {
                self[index].data.a &= 0x01ffffff;
            }
        }
        return 1;
    }
    return 0;
}
