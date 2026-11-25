// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table { void *unused[3]; char *(*text)(Resource *, int); } Table;
struct Resource { Table *table; };
extern char DAT_0213ed6c[];
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void *FUN_overlay_12__02126b88(void *), *FUN_overlay_12__02126bc8(void *);
extern char *FUN_overlay_12__02126d30(void *);
char *FUN_overlay_12__02126ad0(char *self) {
    void *first = FUN_overlay_12__02126b88(self);
    void *second = FUN_overlay_12__02126bc8(self);
    if (first && second) {
        Resource *r = *(Resource **)(self + 12);
        char *format = r->table->text(r, 6);
        char *third = FUN_overlay_12__02126d30(self);
        FUN_020c3f90(DAT_0213ed6c, 256, format, first, second, third);
        return DAT_0213ed6c;
    }
    return 0;
}
