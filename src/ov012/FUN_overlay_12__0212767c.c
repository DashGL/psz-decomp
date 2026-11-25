// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table { void *unused[3]; char *(*text)(Resource *, int); } Table;
struct Resource { Table *table; };
extern char DAT_0213f098[];
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void *FUN_overlay_12__0212764c(void *), *FUN_overlay_12__021275fc(void *);
extern char *FUN_overlay_12__02127828(void *);
char *FUN_overlay_12__0212767c(char *self) {
    void *first = FUN_overlay_12__0212764c(self);
    void *second = FUN_overlay_12__021275fc(self);
    if (first && second) {
        Resource *r = *(Resource **)(self + 12);
        char *format = r->table->text(r, 17);
        char *third = FUN_overlay_12__02127828(self);
        FUN_020c3f90(DAT_0213f098, 256, format, first, second, third);
        return DAT_0213f098;
    }
    return 0;
}
