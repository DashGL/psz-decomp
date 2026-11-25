// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table {
    void *unused[2];
    void *(*surface)(Resource *);
    char *(*text)(Resource *, int);
} Table;
struct Resource { Table *table; };
typedef struct Config { unsigned words[6]; } Config;
typedef struct Key { unsigned char b[4]; } Key;

extern Config DAT_02138420;
extern unsigned DAT_02138438[];
extern void FUN_020c3788(void *, const char *, int, int, unsigned);
extern void FUN_overlay_12__02132410(void);
extern char *FUN_02086e3c(void);
extern unsigned char *FUN_020b00ac(void *, int);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__021323b0(void *, Config *);
extern int FUN_overlay_12__02127948(void *, void *);
extern unsigned short *FUN_02084568(void *);

void FUN_overlay_12__021274b8(char *self) {
    Resource *r;
    void *surface;
    char *player;
    char *inventory;
    int count;
    int i;
    Config current;
    Config base;
    Key key;

    FUN_overlay_12__02132410();
    r = *(Resource **)(self + 12);
    surface = r->table->surface(r);
    if (surface) {
        char *text;
        r = *(Resource **)(self + 12);
        text = r->table->text(r, 20);
        FUN_020c3788(surface, text, 18, 177, 2);
    }
    inventory = FUN_02086e3c() + 16;
    player = FUN_02086e3c();
    count = *(short *)(inventory + 8);
    i = 0;
    base = DAT_02138420;
    for (; i < count; i++) {
        unsigned char *item = FUN_020b00ac(inventory, i);
        if (!FUN_0203a1fc(item) && FUN_overlay_12__02127948(self, item)) {
            unsigned short *record;
            key = *(Key *)item;
            record = FUN_02084568(&key);
            if (record) {
                int category = record[5] >> 11;
                if ((unsigned)category < 7) {
                    current = base;
                    current.words[0] = i;
                    current.words[1] = (i >= 0 && i < *(short *)(player + 12)) ? ((*(void ***)(player + 8))[i] != 0) : 0;
                    current.words[5] = DAT_02138438[category];
                    FUN_overlay_12__021323b0(item, &current);
                }
            }
        }
    }
}
