// flags: -O4,p -noThumb
typedef struct {
    unsigned char revision;
    unsigned char numEntry;
    unsigned short sizeUnit;
    unsigned short ofsEntry;
    unsigned short ofsData;
} ResDict;

static inline void *GetResDataByIdx(const ResDict *dict, unsigned int idx) {
    if (dict && idx < dict->numEntry) {
        const unsigned char *base = (const unsigned char *)dict + dict->ofsData;
        unsigned short sizeUnit = *(const unsigned short *)base;
        return (void *)(base + 4 + sizeUnit * idx);
    }
    return 0;
}

void *FUN_0201d7b4(const unsigned char *resFile, unsigned int idx) {
    if (resFile) {
        unsigned short ofs = *(const unsigned short *)(resFile + 0xc);
        const unsigned char *blk = resFile + *(const unsigned int *)(resFile + ofs);
        const unsigned int *entry = (const unsigned int *)GetResDataByIdx((const ResDict *)(blk + 8), idx);
        if (entry) {
            return (void *)(blk + *entry);
        }
    }
    return 0;
}
