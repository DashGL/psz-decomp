// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table { void *unused[3]; char *(*text)(Resource *, int); } Table;
struct Resource { Table *table; };
extern const char DAT_0213de04[];
extern char DAT_0213ee6c[];
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void *FUN_overlay_12__02126b88(void *), *FUN_020b00ac(void *, int);
extern char *FUN_02086e3c(void);
extern int FUN_0203a1fc(void *);
char *FUN_overlay_12__02126b20(char *self) {
    void *first = FUN_overlay_12__02126b88(self);
    char *player = FUN_02086e3c();
    int *item = FUN_020b00ac(player + 16, *(int *)(self + 16));
    char value[3], *format;
    Resource *r;
    if (first && !FUN_0203a1fc(item)) {
        FUN_020c3f90(value, 3, DAT_0213de04, (item[2] & 0xe00) >> 9);
        r = *(Resource **)(self + 12);
        format = r->table->text(r, 5);
        FUN_020c3f90(DAT_0213ee6c, 256, format, first, value);
        return DAT_0213ee6c;
    }
    return 0;
}
