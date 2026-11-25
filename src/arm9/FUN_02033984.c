// flags: -O4,s
typedef struct {
    unsigned short sizeUnit;
    unsigned short ofsName;
    unsigned char data[4];
} DictEntry;
typedef struct {
    unsigned char revision;
    unsigned char numEntry;
    unsigned short sizeDictBlk;
    unsigned short dummy;
    unsigned short ofsEntry;
} Dict;
typedef struct {
    unsigned int header[2];
    Dict dict;
} MdlSet;

extern MdlSet *FUN_0201d764(void *);
extern void *FUN_0201d774(void *);
extern unsigned int FUN_02018984(void *, void *);

int FUN_02033984(char *s, void *resource, unsigned int index) {
    MdlSet *base;
    void *res;
    unsigned int best, n;
    unsigned char tag;
    if (resource && index < 255) {
        *(unsigned short *)(s + 24) &= ~1;
        *(void **)(s + 8) = resource;
        s[23] = (char)index;
        base = FUN_0201d764(resource);
        if (base) {
            Dict *dict = &base->dict;
            void *entry;
            if (dict && index < base->dict.numEntry) {
                DictEntry *p = (DictEntry *)((unsigned char *)dict + base->dict.ofsEntry);
                entry = &p->data[0] + p->sizeUnit * index;
            } else {
                entry = 0;
            }
            if (entry) {
                res = (unsigned char *)base + *(unsigned int *)entry;
                goto got_res;
            }
        }
        res = 0;
    got_res:
        *(void **)(s + 12) = res;
        *(void **)(s + 16) = FUN_0201d774(resource);
        tag = 'M';
        best = FUN_02018984(&tag, *(void **)(s + 12));
        tag = 'J';
        n = FUN_02018984(&tag, *(void **)(s + 12));
        if (n > best) best = n;
        tag = 'V';
        n = FUN_02018984(&tag, *(void **)(s + 12));
        if (n > best) best = n;
        *(unsigned short *)(s + 20) = (unsigned short)best;
        return 1;
    }
    return 0;
}
