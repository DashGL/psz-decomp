//cpp
// flags: -O4,s
extern "C" {
struct Entry { unsigned int id, weight; signed char mode; char pad[3]; };
struct Table { unsigned int other; Entry *entries; int count; };
extern void *DAT_02108d5c;
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_020ba8b4(void *);
extern void *FUN_020780f4(void);
extern unsigned int FUN_0207816c(void *, unsigned int);
extern void *FUN_02040204(void *, unsigned int, unsigned int);

void *FUN_0206da1c(void *unused, Table *table, unsigned int bank, unsigned int mode) {
    Entry **selected = (Entry **)FUN_020ba8a0((unsigned int)table->count * 4);
    int count = 0;
    unsigned int total = 0;
    for (int i = 0; i < table->count; i++) {
        Entry *entry = &table->entries[i];
        bool ok = (entry->mode == 0 || (entry->mode == 1 && !mode) || (entry->mode == 2 && mode));
        if (ok) {
            selected[count++] = entry;
            total += entry->weight;
        }
    }
    void *result = 0;
    unsigned int draw = FUN_0207816c(FUN_020780f4(), total);
    int j;
    unsigned int cumulative = 0;
    for (j = 0; j < count; j++) {
        Entry *entry = selected[j];
        cumulative += entry->weight;
        if (draw < cumulative) {
            result = FUN_02040204(DAT_02108d5c, entry->id, bank);
            break;
        }
    }
    if (selected) FUN_020ba8b4(selected);
    return result;
}
}
