// flags: -O4,s
extern int FUN_02037b78(void *);
extern int FUN_02033860(void *, void *, unsigned short, unsigned int);
extern int FUN_0201d774(void *);
extern void FUN_02037ac0(void *, unsigned short);
typedef struct {
    unsigned int f0, f4;
    void *resource;
    unsigned int fc, f10;
    unsigned short f14;
    unsigned char refcnt, kind;
    unsigned int f18;
} Entry;
typedef struct {
    unsigned int f0;
    Entry *entries;
    unsigned int f8, fc;
    unsigned short count;
} Mgr;

unsigned short FUN_02037adc(Mgr *s, void *resource, unsigned int kind) {
    unsigned int i = 0;
    unsigned int count = s->count;
    for (; i < count; i++) {
        Entry *p = &s->entries[i];
        unsigned int hit = (p->resource == resource && p->kind == kind);
        if (hit == 1) {
            p->refcnt++;
            return (unsigned short)i;
        }
    }
    for (i = 0; i < s->count; i++) {
        if (!FUN_02037b78(&s->entries[i])) {
            if (FUN_02033860(&s->entries[i], resource, (unsigned short)i, kind) == 1) {
                if (FUN_0201d774(resource)) {
                    FUN_02037ac0(s, (unsigned short)i);
                }
                return (unsigned short)i;
            }
            return 0xffff;
        }
    }
    return 0xffff;
}
