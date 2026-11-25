// FUN_0200f430 @ 0x0200f430 (0x104, arm) - ported from FUN_02029ac0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

struct Item_02029ac0 {
    u8 type;
    u8 sub;
    u8 pad[2];
    u32 val;
};

struct List_02029ac0 {
    u32 count;
    struct Item_02029ac0 items[1];
};

extern struct List_02029ac0 *FUN_0200ee44(u32);
extern int FUN_0200f534(u32, u8, u32, int, int);
extern int FUN_0200f5b8(u32, u8, u32, int, int);
extern int FUN_0200f618(u32, u8, u32, int, int);
extern int FUN_0200f758(u32, u8, u32, int, int);

int FUN_0200f430(u32 a0, u32 a1) {
    struct List_02029ac0 *list = FUN_0200ee44(a0);
    u32 i;
    if (list == 0) {
        return 1;
    }
    for (i = 0; i < list->count; i++) {
        struct Item_02029ac0 *it = &list->items[i];
        switch (it->type) {
        case 0:
            {
                int r = FUN_0200f534(it->val, it->sub, a1, 1, 0);
                if (r != 0) {
                    return r;
                }
            }
            break;
        case 3:
            {
                int r = FUN_0200f5b8(it->val, it->sub, a1, 1, 0);
                if (r != 0) {
                    return r;
                }
            }
            break;
        case 1:
            {
                int r = FUN_0200f618(it->val, it->sub, a1, 1, 0);
                if (r != 0) {
                    return r;
                }
            }
            break;
        case 2:
            {
                int r = FUN_0200f758(it->val, it->sub, a1, 1, 0);
                if (r != 0) {
                    return r;
                }
            }
            break;
        }
    }
    return 0;
}
