// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { int v[7]; } Seven;
typedef struct { int v[3]; } Three;
typedef struct {
    char pad0[0x10];
    char text[0x110];
} Item;
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    char pad18[0x2a4];
    int map[3];
    Item items[8];
} Self;
extern const Seven DAT_02137c5c;
extern const Three DAT_02137bf8;
extern const char DAT_0213d2fc[];
extern const char *FUN_overlay_12__02121fc8(int, int);
extern void FUN_overlay_12__0211f7fc(void *, int, const char *, int, Pair, int);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);

void FUN_overlay_12__0211f9f8(Self *self, int count)
{
    int added = 0;
    Seven labels = DAT_02137c5c;
    Three difficulties = DAT_02137bf8;
    int row;
    int index;
    for (row = 0; row < self->f10; row++) {
        Pair pos;
        pos.x = row * (20 << 12) + (7 << 12);
        pos.y = row * (17 << 12) + (29 << 12);
        FUN_overlay_12__0211f7fc(&self->items[row], 0, DAT_0213d2fc, row, pos, 0);
        FUN_overlay_12__0212c8f8(FUN_overlay_12__02121fc8(0, labels.v[self->f14]), 20 * row + 11, 17 * row + 32, 2);
    }
    for (index = self->f10; index < count + self->f10; index++) {
        Pair pos;
        const char *text;
        pos.x = self->f10 * (20 << 12) + (7 << 12);
        pos.y = index * (17 << 12) + (29 << 12);
        text = FUN_overlay_12__02121fc8(0, difficulties.v[index - self->f10]);
        FUN_overlay_12__0211f7fc(&self->items[index], 0, text, index, pos, 1);
        added++;
    }
    index = added - 1 + self->f10;
    for (row = self->f10; row < count + self->f10; row++) {
        FUN_overlay_12__0212c8f8(self->items[index].text, 20 * self->f10 + 11, 17 * row + 32, 2);
        self->map[row - self->f10] = index - self->f10;
        index--;
    }
    self->f4 = count + self->f10;
}
