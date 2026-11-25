// flags: -O4,s
typedef struct {
    int x, y;
} Pair;

typedef struct {
    unsigned char b[4];
    int w[3];
} Item;

typedef struct {
    unsigned char b[7];
} Kinds;

typedef struct {
    unsigned char b[4];
} Key4;

typedef struct {
    unsigned char data[0x10];
    int kind;
    int unk14;
    int valid;
} Entry;

typedef struct {
    int unk0;
    Entry entries[7];
    void *textBox;
    int dirty;
    int padD0[6];
    int scroll;
    int prevScroll;
    int unkF0;
    int count;
} Menu;

extern const Kinds DAT_0212d858;
extern const int DAT_0212d840[];
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern void *FUN_02088c7c(void);
extern int FUN_02077d98(void *);
extern int FUN_0203a1fc(void *);
extern int FUN_0209ca8c(char *, void *, int);
extern int FUN_overlay_4__02124a88(void *, int);
extern int FUN_020b0244(void *);
extern const signed char *FUN_0208efa8(void *, int, int, int);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3788(void *, const void *, int, int, int);
extern void FUN_02039534(Item *, const void *);
extern void FUN_0208b52c(void *, void *, int, Pair *);
extern void FUN_overlay_4__02124990(void *, int);

void FUN_overlay_4__0212452c(Menu *self)
{
    void *base;
    int y2;
    int table;

    base = FUN_0208f068();
    if (!base) {
        return;
    }
    table = FUN_02077d98(FUN_02077930());
    if (self->dirty) {
        int y;
        int i;
        FUN_020c38f0(self->textBox, 0);
        y = 0;
        for (i = 0; i < 5; i++) {
            int index = i + self->scroll;
            if (index < self->count) {
                if (self->entries[index].valid == 1) {
                    if (FUN_0203a1fc(&self->entries[index])) {
                        FUN_020c3788(self->textBox, FUN_0208efa8(base, table, 2, 0), 26, y, 2);
                    } else {
                        char text[28];
                        text[0] = 0;
                        if (FUN_0209ca8c(text, &self->entries[index], 0) == 1) {
                            if (FUN_overlay_4__02124a88(self, self->entries[index].kind)) {
                                FUN_020c3788(self->textBox, text, 26, y, 2);
                            } else {
                                FUN_020c3788(self->textBox, text, 15, y, 2);
                            }
                        }
                    }
                    y += 13;
                }
            }
        }
    }
    {
        Item item;
        Kinds kinds = DAT_0212d858;
        Pair pos;
        Key4 key;
        Pair origin;
        int i;

        i = 0;
        y2 = 0;
        origin.x = DAT_0212d840[8];
        origin.y = DAT_0212d840[9];
        for (; i < 5; i++) {
            int index = i + self->scroll;
            if (index < self->count) {
                if (self->entries[index].valid == 1) {
                    FUN_02039534(&item, &self->entries[index]);
                    key = *(Key4 *)&item;
                    if (FUN_020b0244(&key)) {
                        item.b[0] = kinds.b[self->entries[index].kind];
                        if (self->entries[index].kind == 6) {
                            item.b[1] = 17;
                        }
                    }
                    pos = origin;
                    if (FUN_overlay_4__02124a88(self, self->entries[index].kind) == 1) {
                        pos.x += 0xa000;
                    }
                    pos.y += y2 << 12;
                    FUN_0208b52c(FUN_02088c7c(), &item, self->entries[index].unk14, &pos);
                    y2 += 13;
                }
            }
        }
    }
    self->dirty = (self->scroll != self->prevScroll);
    if (self->count > 5) {
        FUN_overlay_4__02124990(self, 0);
    }
}
