// flags: -O4,s
typedef struct Resource Resource;
typedef struct Table {
    void *unused[3];
    char *(*text)(Resource *, int);
} Table;
struct Resource {
    Table *table;
};

#pragma thumb off
extern void *FUN_02001540(void *, int, unsigned);
#pragma thumb reset

extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern char *FUN_overlay_12__021275fc(void *);
extern const char DAT_0213de20[];
extern const char DAT_0213de24[];
extern char DAT_0213ef98[];

char *FUN_overlay_12__021276cc(char *self)
{
    char *name = FUN_overlay_12__021275fc(self);
    char first[10], second[10], *format;
    int a, b;
    Resource *r;

    if (name) {
        a = *(int *)(self + 28);
        b = *(int *)(self + 32);
        FUN_02001540(first, 0, 10);
        FUN_02001540(second, 0, 10);
        FUN_020c3f90(first, 10, DAT_0213de20, a);
        FUN_020c3f90(second, 10, DAT_0213de24, b);
        r = *(Resource **)(self + 12);
        format = r->table->text(r, 16);
        FUN_020c3f90(DAT_0213ef98, 256, format, name, first, second);
        return DAT_0213ef98;
    }
    return 0;
}
