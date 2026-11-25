// flags: -O4,s
extern int FUN_02037d10(void *);
extern void FUN_02037974(void *, unsigned int, unsigned short, unsigned int, unsigned int);
typedef struct {
    unsigned int f0, f4, id, fc;
    unsigned char refcnt, kind;
    unsigned short f12;
} Entry;
typedef struct {
    unsigned int f0, f4;
    Entry *entries;
    unsigned int fc;
    unsigned short f10, count;
} Mgr;

unsigned short FUN_02037c88(Mgr *s, unsigned int id, unsigned int arg, unsigned int kind) {
    unsigned int i = 0;
    unsigned int count = s->count;
    for (; i < count; i++) {
        Entry *p = &s->entries[i];
        unsigned int hit = (p->id == id && p->kind == kind);
        if (hit == 1) {
            p->refcnt++;
            return (unsigned short)i;
        }
    }
    for (i = 0; i < s->count; i++) {
        if (!FUN_02037d10(&s->entries[i])) {
            FUN_02037974(&s->entries[i], id, (unsigned short)i, arg, kind);
            return (unsigned short)i;
        }
    }
    return 0xffff;
}
