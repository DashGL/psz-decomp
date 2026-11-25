// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table {
    void *unused[2];
    void *(*surface)(Resource *);
    char *(*text)(Resource *, int);
} Table;
struct Resource { Table *table; };
typedef struct Config { unsigned words[6]; } Config;
extern char *DAT_0213f2dc;
extern const Config DAT_021383cc;
extern void FUN_020c3900(void *, unsigned, unsigned, unsigned, unsigned);
extern void FUN_020c3788(void *, const char *, int, int, unsigned);
extern void FUN_overlay_12__02132410(void);
extern void FUN_overlay_12__02132444(void);
extern char *FUN_02086e3c(void);
extern unsigned char *FUN_020b00ac(void *, int);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__02134ae8(unsigned char *);
extern int FUN_overlay_12__021323b0(void *, Config *);
void FUN_overlay_12__02126a14(char *self) {
    Resource *r = *(Resource **)(self + 12);
    void *surface = r->table->surface(r);
    char *manager, *inventory;
    int count;
    Config current, base;
    int i;
    if (surface) {
        char *text;
        FUN_020c3900(surface, 18, 177, 210, 10);
        r = *(Resource **)(self + 12);
        text = r->table->text(r, 19);
        FUN_020c3788(surface, text, 18, 177, 2);
    }
    FUN_overlay_12__02132410();
    FUN_overlay_12__02132444();
    manager = DAT_0213f2dc;
    if (manager)
        *(int *)(manager + 144) = 1;
    inventory = FUN_02086e3c() + 16;
    count = *(short *)(inventory + 8);
    i = 0;
    base = DAT_021383cc;
    for (; i < count; i++) {
        unsigned char *item = FUN_020b00ac(inventory, i);
        if (!FUN_0203a1fc(item) && item[0] == 3 && FUN_overlay_12__02134ae8(item)) {
            current = base;
            current.words[0] = i;
            FUN_overlay_12__021323b0(item, &current);
        }
    }
}
