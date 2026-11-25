// flags: -O4,s
extern int FUN_overlay_17__02124254(void *, char *);
#pragma thumb off
extern void *FUN_02003d54(void *, const void *, unsigned);
extern int FUN_02003f38(const void *, const void *, unsigned);
#pragma thumb on
typedef struct { char name[32]; int pad[2]; } Entry;
typedef struct { int pad; Entry entries[1000]; } Table;

void *FUN_overlay_17__02124194(Table *self, char *key) {
    int start = FUN_overlay_17__02124254(self, key);
    int i = 0;
    Entry *entries = self->entries;
    for (; i < 1000; i++) {
        int idx = (start + i) % 1000;
        if (!self->entries[idx].name[0]) {
            FUN_02003d54(self->entries[idx].name, key, 32);
            self->entries[idx].name[31] = 0;
            return &self->entries[idx];
        }
        if (FUN_02003f38(entries[idx].name, key, 32) == 0) {
            return &self->entries[idx];
        }
    }
    return 0;
}
