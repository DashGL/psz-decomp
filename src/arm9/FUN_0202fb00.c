// flags: -O4,p -noThumb
#pragma opt_strength_reduction off
extern char *FUN_0202e424(void);

typedef struct EntryFB00 {
    unsigned char f0;
    unsigned char pad[3];
    int f4;
    struct EntryFB00 *f8;
    struct EntryFB00 *fc;
    unsigned char rest[0xd0 - 0x10];
} EntryFB00;

typedef struct PoolFB00 {
    unsigned int count;
    EntryFB00 *tail;
    EntryFB00 *head;
    EntryFB00 entries[1];
} PoolFB00;

void *FUN_0202fb00(void) {
    char *base = FUN_0202e424();
    PoolFB00 *pool = *(PoolFB00 **)(base + 0x2270);
    EntryFB00 *entry = 0;
    unsigned int size;
    unsigned int max_n;
    unsigned int i;
    EntryFB00 *entries;

    if (pool == 0) {
        return entry;
    }
    size = *(unsigned int *)(base + 0x2274);
    if (size <= 0xc) {
        return entry;
    }
    max_n = (size - 0xc) / 0xd0u;
    if (max_n == 0) {
        return entry;
    }
    if (max_n <= pool->count) {
        return entry;
    }
    i = 0;
    if (i < max_n) {
        entries = pool->entries;
        do {
            entry = &entries[i];
            if (entry->f0 == 0) {
                break;
            }
            i++;
        } while (i < max_n);
    }
    if (i < max_n) {
        entry->f0 = 1;
        entry->f4 = pool->count;
        entry->fc = 0;
        entry->f8 = pool->head;
        pool->head = entry;
        if (entry->f8 != 0) {
            entry->f8->fc = entry;
        } else {
            pool->tail = entry;
        }
        pool->count++;
    }
    return entry;
}
