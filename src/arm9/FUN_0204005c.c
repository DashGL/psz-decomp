// flags: -O3,s
#pragma thumb off
extern int FUN_020038ec(void *, unsigned int, const char *, ...);
extern void *FUN_0200c938(void *, int);
#pragma thumb on
extern void *FUN_020ba8bc(unsigned int, int);
extern void *FUN_020ba374(const char *, int *, int);
extern void *FUN_020ba440(void *);
extern void FUN_020ba8c4(void *);
extern int FUN_02032bd4(void *);
extern void FUN_02032c10(void *, void *, int);
extern int FUN_0206d2e4(const int *, void *);
extern void FUN_02041a50(void *);

extern void *DAT_02108c64;
extern const char DAT_020f8b68[];
extern const char DAT_020f8b78[];
extern const char DAT_020f8b80[];
extern const char DAT_020f8b88[];
extern const char DAT_020f8b8c[];
extern const char DAT_020f8b90[];
extern const char DAT_020f8b9c[];
extern const char DAT_020f8ba4[];
extern const char DAT_020f8bac[];

typedef struct {
    void *a;
    void *b;
} Entry;

typedef struct {
    int count;
    unsigned int *items;
    Entry entries[2];
} Table;

void FUN_0204005c(char *self) {
    int record[5];
    char key[12];
    char path1[64];
    char path2[64];
    char locale[4];
    int size1;
    const char *names[2];
    char common[4];
    int size2;
    Table *table;
    int count;
    int i;

    table = (Table *)FUN_020ba8bc(sizeof(Table), -16);
    *(Table **)(self + 0x20) = table;
    table->count = 0;
    table->items = 0;
    for (i = 0; i < 2u; i++) {
        table->entries[i].a = 0;
        table->entries[i].b = 0;
    }

    count = FUN_02032bd4(DAT_02108c64);
    (*(Table **)(self + 0x20))->count = count;
    table = *(Table **)(self + 0x20);
    table->items = (unsigned int *)FUN_020ba8bc((unsigned int)count * 4, -16);
    for (i = 0; i < count; i++) {
        void *handle;
        table->items[i] = 0;
        FUN_02032c10(record, DAT_02108c64, (signed char)i);
        FUN_0206d2e4(record, key);
        FUN_02041a50(locale);
        FUN_020038ec(path1, 64, DAT_020f8b68, DAT_020f8b78, DAT_020f8b80, locale, key, DAT_020f8b88);
        handle = FUN_020ba374(path1, &size1, 16);
        if (handle) {
            table->items[i] = ((unsigned int *)FUN_020ba440(handle))[1];
            FUN_020ba8c4(handle);
        }
    }

    FUN_0200c938(names, 8);
    FUN_02041a50(common);
    names[0] = common;
    names[1] = DAT_020f8b8c;
    for (i = 0; i < 2; i++) {
        Entry *entries;
        int off = i << 3;
        table = *(Table **)(self + 0x20);
        entries = table->entries;
        FUN_020038ec(path2, 64, DAT_020f8b90, DAT_020f8b9c, DAT_020f8ba4, names[i], DAT_020f8bac);
        *(void **)((char *)entries + off) = FUN_020ba374(path2, &size2, -16);
        *(void **)((char *)((char *)table + off) + 0xc) = FUN_020ba440(*(void **)((char *)entries + off));
    }
}
