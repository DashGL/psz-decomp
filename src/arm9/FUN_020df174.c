// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -O4,p

struct EntryDF174 {
    char *key;
    char *val;
};

struct TableDF174 {
    struct EntryDF174 *entries;
    int max_idx;
    int count;
};

struct AllocDF174 {
    unsigned char pad[0x1010];
    char *(*alloc_fn)(const char *, int);
    void (*free_fn)(const char *, char *, int);
};

extern const char DAT_02100600[];
extern const char DAT_02100620[];
extern const char DAT_02100640[];
extern const char DAT_0210065c[];
extern int FUN_02003c70(const char *);
extern void FUN_02003c8c(char *, const char *);

int FUN_020df174(struct AllocDF174 *ctx, struct TableDF174 *tbl, const char *key, const char *val) {
    char *(*alloc_fn)(const char *, int) = ctx->alloc_fn;
    void (*free_fn)(const char *, char *, int) = ctx->free_fn;

    if (tbl->count > tbl->max_idx) {
        return 0;
    }
    tbl->entries[tbl->count].key = alloc_fn(DAT_02100600, FUN_02003c70(key) + 1);
    if (tbl->entries[tbl->count].key != 0) {
        tbl->entries[tbl->count].val = alloc_fn(DAT_02100620, FUN_02003c70(val) + 1);
        if (tbl->entries[tbl->count].val != 0) {
            FUN_02003c8c(tbl->entries[tbl->count].key, key);
            FUN_02003c8c(tbl->entries[tbl->count].val, val);
            tbl->count++;
            return 1;
        }
    }
    if (tbl->entries[tbl->count].key != 0) {
        free_fn(DAT_02100640, tbl->entries[tbl->count].key, 0);
        tbl->entries[tbl->count].key = 0;
    }
    if (tbl->entries[tbl->count].val != 0) {
        free_fn(DAT_0210065c, tbl->entries[tbl->count].val, 0);
        tbl->entries[tbl->count].val = 0;
    }
    return 0;
}
