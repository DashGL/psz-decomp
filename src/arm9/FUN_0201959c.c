// flags: -O4,p -noThumb
typedef struct {
    unsigned char revision;
    unsigned char numEntry;
    unsigned short sizeDictBlk;
    unsigned short dummy_;
    unsigned short ofsEntry;
} Dict;

typedef struct {
    unsigned int f00;
    unsigned int f04;
    Dict dict;
} ResMdlSet;

extern void FUN_020191f4(void *);
extern void FUN_02019468(void *);

static inline void *get_dict_data(const Dict *dict, unsigned int idx) {
    if (dict != 0 && idx < dict->numEntry) {
        unsigned short entrySize = *(unsigned short *)((const unsigned char *)dict + dict->ofsEntry);
        return (void *)((const unsigned char *)dict + dict->ofsEntry + 4 + entrySize * idx);
    }
    return 0;
}

static inline void *get_mdl(const ResMdlSet *mdlSet, unsigned int idx) {
    if (mdlSet != 0) {
        unsigned int *p = (unsigned int *)get_dict_data(&mdlSet->dict, idx);
        if (p != 0) {
            return (void *)((const unsigned char *)mdlSet + *p);
        }
    }
    return 0;
}

void FUN_0201959c(ResMdlSet *self) {
    unsigned int i;
    for (i = 0; i < self->dict.numEntry; i++) {
        void *p = get_mdl(self, i);
        FUN_020191f4(p);
        FUN_02019468(p);
    }
}
