// flags: -O4,p -noThumb
typedef struct {
    unsigned char revision;
    unsigned char numEntry;
    unsigned short sizeDictBlk;
    unsigned short dummy;
    unsigned short ofsEntry;
} ResDict;

typedef struct {
    unsigned short ofs;
    unsigned char count;
    unsigned char flag;
} Desc;

typedef struct {
    unsigned int pad0[5];
    unsigned int f14;
    unsigned int pad1[3];
    unsigned int f24;
    unsigned int f28;
} MatData;

static inline void *get_dict_data(const ResDict *dict, unsigned int idx) {
    if (dict && idx < dict->numEntry) {
        unsigned char *p = (unsigned char *)dict + dict->ofsEntry;
        unsigned short sizeUnit = *(unsigned short *)p;
        return p + 4 + sizeUnit * idx;
    }
    return 0;
}

static inline MatData *get_mat(unsigned char *base, unsigned int idx) {
    if (base) {
        unsigned int *p = (unsigned int *)get_dict_data((const ResDict *)(base + 4), idx);
        if (p) {
            return (MatData *)(base + *p);
        }
    }
    return 0;
}

void FUN_0201903c(unsigned char *base, Desc *desc) {
    unsigned char *indices = base + desc->ofs;
    unsigned int i;
    for (i = 0; i < desc->count; i++) {
        MatData *m = get_mat(base, indices[i]);
        m->f14 &= 0xc00f0000;
        m->f24 = 0x1000;
        m->f28 = 0x1000;
    }
    desc->flag &= ~1;
}
