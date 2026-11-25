// flags: -O4,s
typedef struct { int x, y; } Point;
typedef struct { unsigned char bytes[4]; } Key;

extern void FUN_overlay_12__02133ac4(int);
extern void FUN_overlay_12__0213323c(void *, void *);
extern void FUN_overlay_12__02132f94(void *);
extern void FUN_overlay_12__021321f4(void *);
extern int FUN_0209ca8c(char *, const void *, int);
extern int FUN_overlay_12__02131ad0(int);
extern int FUN_overlay_12__0213221c(const void *);
extern int FUN_02084900(const void *);
extern int FUN_020849d4(const void *);
extern void *FUN_02086e3c(void);
extern void *FUN_02079114(void);
extern char *FUN_020870c4(void *);
extern void FUN_overlay_12__02132130(void *, int, void *);
extern void FUN_02079160(void *, const void *, unsigned short, unsigned short, int, int, int, int, int);
extern void FUN_020c331c(unsigned, int, int, int);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);
extern void FUN_overlay_12__02132d0c(void *, const void *);
extern void FUN_overlay_12__02132b50(void *);
extern void FUN_overlay_12__02132c80(void *);
extern void FUN_overlay_12__02132aa4(void *);
extern void FUN_overlay_12__02132ba0(void *);
extern void FUN_overlay_12__02133ec4(void *);

struct Entry {
    Key key;
    int pad[4];
    int f14;
    int pad2[3];
    int price;
};

struct Page {
    struct Entry entries[100];
    int count;
    int pad[2];
};

struct Self {
    int f00;
    int flags;
    int pad08[14];
    int f40;
    int pad44[3];
    int f50;
    int f54;
    int mode;
    int ready;
    int pageIdx;
    int f64;
    int f68;
    int sel;
    int top;
    int dirtyPage;
    int dirtyNames;
    int pad7c[2];
    int f84;
    int f88;
    int pad8c[2];
    int f94;
    int f98;
    int pad9c[2];
    int baseX;
    int baseY;
    int padac[6];
    struct Page pages[1];
};

void FUN_overlay_12__02132838(struct Self *self)
{
    char name[28];
    Point icon;
    Point pos1;
    Point pos2;
    Key key;
    Key currency_key;
    int flag;
    int flag2;
    struct Page *page;
    int count;
    int mode;
    int row;
    struct Entry *entry;
    int money;
    int currency;
    int handle;
    int x;
    int style;
    int yOff;
    int i;

    flag = self->ready ? 1 : 0;
    if (flag == 0) {
        return;
    }
    flag2 = 1;
    if ((self->flags & 1) == 0) {
        flag2 = 0;
    }
    if (flag2 != 0) {
        FUN_overlay_12__02133ac4(1);
        return;
    }

    page = &self->pages[self->pageIdx];
    if (self->dirtyPage) {
        FUN_overlay_12__0213323c(page, &self->f64);
        self->dirtyPage = 0;
    }

    count = page->count;
    if (self->dirtyNames) {
        int y;
        self->dirtyNames = 0;
        FUN_overlay_12__02132f94(self);
        y = self->f98;
        for (i = 0; i < 5; i++, y += 16) {
            int index = i + self->top;
            if (index < count) {
                if (FUN_0209ca8c(name, &page->entries[index], 1)) {
                    FUN_overlay_12__0212c8f8(name, self->f94, y, 2);
                }
            }
        }
    }

    handle = FUN_overlay_12__02131ad0(1);
    mode = self->mode;
    money = *(int *)(FUN_020870c4(FUN_02086e3c()) + 0x34);
    FUN_overlay_12__021321f4(&currency_key);
    currency = FUN_overlay_12__0213221c(&currency_key);

    for (row = 0, yOff = 0; row < 5; row++, yOff += 16) {
        int index = row + self->top;
        if (index < count) {
            int price;
            entry = &page->entries[index];
            icon.x = self->baseX << 12;
            icon.y = (self->baseY + yOff) << 12;
            FUN_overlay_12__02132130(entry, entry->f14, &icon);
            price = entry->price;
            if (price > 0) {
                int unaffordable;
                pos1.x = (self->baseX + 0xa9) << 12;
                pos1.y = (self->baseY + yOff) << 12;
                unaffordable = 0;
                switch (mode) {
                case 1:
                    if (money < price) {
                        unaffordable = 1;
                    }
                    break;
                case 2:
                    if (currency < price) {
                        unaffordable = 1;
                    }
                    break;
                }
                if (unaffordable) {
                    style = 4;
                } else {
                    style = 2;
                }
                FUN_02079160(FUN_02079114(), &pos1, (unsigned short)style, 8, price, handle, -1, 8, 0);
            } else if (FUN_02084900(entry)) {
                int shift = (self->f40 - 2) * 8;
                void *r;
                x = self->baseX;
                FUN_020c331c(0x30, (x + 0xad - shift) << 12, (self->baseY + yOff) << 12, handle);
                x += 0xb4;
                pos2.x = (x - shift) << 12;
                pos2.y = (self->baseY + yOff) << 12;
                r = FUN_02079114();
                FUN_02079160(r, &pos2, 2, (unsigned short)self->f40, FUN_020849d4(entry), handle, -1, 8, 0);
            }
        }
    }

    entry = &page->entries[self->sel];
    if (entry->price > 0 || self->f88) {
        key = entry->key;
        FUN_overlay_12__02132d0c(self, &key);
    }
    if (self->f50) {
        FUN_overlay_12__02132b50(self);
        FUN_overlay_12__02132c80(self);
    }
    FUN_overlay_12__02132aa4(self);
    FUN_overlay_12__02132ba0(self);
    if (self->f84) {
        FUN_overlay_12__02133ec4(&page->entries[self->sel]);
    }
}
