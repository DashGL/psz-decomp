// flags: -O4,p -noThumb -ipa off
struct Entry {
    unsigned int base;
    unsigned int size;
    char *ptr;
    unsigned int state;
};
struct Cache {
    int f0;
    char pad[0x2c];
    struct Entry entries[4];
};
extern int FUN_020683d4(void);
extern void FUN_02065774(void *, void *, unsigned int);
extern void FUN_020683e8(int);

int FUN_02064610(struct Cache *c, unsigned int param_2, void *param_3, unsigned int param_4) {
    int r4 = 0;
    int s = FUN_020683d4();
    struct Entry *p = c->entries;
    for (; p < &c->entries[4]; p++) {
        if (p->state >= 2) {
            int off = param_2 - p->base;
            if (off >= 0 && (unsigned int)(off + param_4) <= p->size) {
                FUN_02065774(p->ptr + off, param_3, param_4);
                c->f0 = 0;
                r4 = 1;
                break;
            }
        }
    }
    FUN_020683e8(s);
    return r4;
}