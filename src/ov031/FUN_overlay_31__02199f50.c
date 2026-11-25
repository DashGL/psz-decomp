// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    signed char x;
    signed char y;
} OffsetPair;

typedef struct {
    const OffsetPair *offsets;
    int count;
    int value;
} PatternTable;

extern const PatternTable DAT_0219c5d8;
extern const PatternTable DAT_0219c5cc;
extern void *FUN_overlay_31__021995ec(void);
extern void FUN_overlay_31__0219a944(void *, const signed char *, signed char *, signed char *);
extern int FUN_overlay_31__0219a914(void *, const signed char *, const signed char *);
extern int FUN_overlay_31__0219a798(void *, const signed char *);
extern void FUN_overlay_31__0219a844(Vec3 *, void *, const signed char *);
extern void FUN_overlay_31__0219a0ac(void *, Vec3 *, int);

void FUN_overlay_31__02199f50(unsigned char *self)
{
    const PatternTable *table;
    void *mgr;
    signed char col;
    signed char row;
    signed char cur_key;
    signed char target_key;
    OffsetPair delta;
    int swap;
    int neg;
    unsigned short angle;
    int count;
    int i;
    Vec3 pos;

    if (((*(unsigned int *)(self + 0xd4) & 1) ? 1 : 0) == 1) {
        table = &DAT_0219c5d8;
    } else {
        table = &DAT_0219c5cc;
    }

    if (table != 0) {
        mgr = FUN_overlay_31__021995ec();
        col = -1;
        row = -1;
        cur_key = *(signed char *)(self + 0xdc);
        FUN_overlay_31__0219a944(mgr, &cur_key, &col, &row);

        angle = (unsigned short)(*(unsigned short *)(self + 0x44) + 0x2000);
        swap = 0;
        neg = 0;

        if (angle < 0x4000) {
            neg = 1;
        } else if (angle < 0x8000) {
            swap = 1;
            neg = 1;
        } else if (angle >= 0xc000) {
            swap = 1;
        }

        count = table->count;
        for (i = 0; i < count; i++) {
            delta = table->offsets[i];
            if (swap == 1) {
                signed char tmp = delta.x;
                delta.x = delta.y;
                delta.y = tmp;
            }
            if (neg == 1) {
                delta.x = -delta.x;
                delta.y = -delta.y;
            }
            delta.x = (signed char)(col + delta.x);
            delta.y = (signed char)(row + delta.y);
            target_key = (signed char)FUN_overlay_31__0219a914(mgr, &delta.x, &delta.y);
            if (FUN_overlay_31__0219a798(mgr, &target_key) == 1) {
                FUN_overlay_31__0219a844(&pos, mgr, &target_key);
                FUN_overlay_31__0219a0ac(self, &pos, table->value);
            }
        }
    }
}
