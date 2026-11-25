// flags: -O4,s
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

typedef struct { s8 b[5]; s8 pad[11]; s32 rate; } Record;
typedef struct { Record *records; s32 count; } Owner;
typedef struct { Owner *owner; s32 pad0; s32 index; s32 sub; s8 pad1[0x104 - 0x10]; s32 scale; s8 pad2[0x114 - 0x108]; u32 flags; } Entry;
typedef struct { void *object; s8 pad0[0x46 - 4]; s16 flags; s8 pad1[0x70 - 0x48]; } Table;
typedef struct { s8 pad0[0x98]; Table *tables; s8 pad1[0xb8 - 0x9c]; Entry *entries; s32 count; } System;

extern s32 FUN_02036c34(System *);
extern s32 FUN_02036c64(System *);
extern void FUN_020424fc(void *, s32, s32);

static inline s32 fx_mul(s32 a, s32 b) {
    return (s32)(((long long)a * b + 0x800) >> 12);
}

static inline int has_flag2(const Table *t) {
    return !!(t->flags & 2);
    
}

void FUN_02036b30(System *s) {
    s32 i;
    for (i = 0; i < s->count; i++) {
        Entry *entry = &s->entries[i];
        s32 index = entry->index;
        if (index >= 0) {
            Owner *owner = entry->owner;
            if (owner != 0) {
                s32 sub = entry->sub;
                if (sub >= 0 && owner->count > sub) {
                    Table *table = &s->tables[index];
                    void *object = table->object;
                    Record *record = &owner->records[sub];
                    s32 value;
                    s32 enabled[5];
                    s32 j;
                    if (has_flag2(table) != 0) {
                        value = fx_mul(FUN_02036c34(s), record->rate);
                    } else {
                        value = fx_mul(FUN_02036c64(s), record->rate);
                    }
                    value = fx_mul(value, entry->scale);
                    if (entry->flags & 1) {
                        value = 0x1000;
                    }
                    enabled[0] = record->b[0];
                    enabled[1] = record->b[1];
                    enabled[2] = record->b[2];
                    enabled[3] = record->b[3];
                    enabled[4] = record->b[4];
                    for (j = 0; j < 5; j++) {
                        if (enabled[j] >= 0) {
                            FUN_020424fc(object, j, value);
                        }
                    }
                }
            }
        }
    }
}
