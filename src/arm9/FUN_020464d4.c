// flags: -O4,p
extern char *DAT_02108c84;
extern void *FUN_0203fd88(void *);
extern void FUN_020456bc(unsigned short *, int);
extern char *FUN_02033c9c(void *, unsigned int);
extern int FUN_0201d5fc(void *, void *);
extern unsigned int *FUN_020465a8(void *, int);

static inline int get_idx(char *record, void *key) {
    return record ? FUN_0201d5fc(record + 0x3c, key) : -1;
}

static inline unsigned int *get_entry1(char *record, int idx) {
    return record ? FUN_020465a8(record + 0x3c, idx) : 0;
}

static inline unsigned short *get_entry2(char *record, int idx) {
    if (record && *(unsigned short *)(record + 0x34)) {
        return (unsigned short *)FUN_020465a8(record + *(unsigned short *)(record + 0x34), idx);
    }
    return 0;
}

int FUN_020464d4(unsigned int *out, unsigned int *other, int index, void *key, int alternate) {
    int found = -1;
    char *record = 0;
    unsigned short descriptor[8];
    char *m;
    FUN_0203fd88(descriptor);
    FUN_020456bc(descriptor, index);
    m = DAT_02108c84;
    if (m) {
        char *p = FUN_02033c9c(m, descriptor[1]);
        if (p) {
            record = *(char **)(p + 8);
        }
    }
    if (record) {
        unsigned int *entry;
        found = get_idx(record, key);
        entry = get_entry1(record, found);
        if (entry) {
            if (alternate || ((*entry & 0x80000000) >> 31)) {
                *out = *(unsigned int *)(record + 0x18);
            } else {
                *out = *(unsigned int *)(record + 8);
            }
            *out = ((unsigned short)(*out) & 0x1fffffff) + *entry;
        }
        if (*(unsigned short *)(record + 0x32) & 1) {
            unsigned short *entry2;
            *other = *(unsigned int *)(record + 0x2c);
            entry2 = get_entry2(record, found);
            if (entry2) {
                *other = ((unsigned short)(*other) & 0x1fffffff) + *entry2;
            }
        }
    }
    return found;
}
