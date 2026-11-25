// flags: -O4,s
#pragma opt_propagation off
typedef struct {
    int id;
    int slot;
} Entry;

typedef struct {
    int f0;
    int count;
    Entry entries[3];
    char *obj;
    unsigned short mask24;
    unsigned short mask26;
    short vals[3];
    unsigned char b2e;
    unsigned char b2f;
} State;

extern void FUN_0208652c(void *, int);
extern void FUN_02084e9c(int);
extern void FUN_02097b58(void *);
extern void FUN_0209941c(void);

static inline int test_bit(unsigned short *m, int bit) {
    return (*m & (1 << bit)) ? 1 : 0;
}

void FUN_020964f4(State *s) {
    short d[4];
    int i;
    if (s->obj != 0) {
        s->b2e = *(int *)(s->obj + 0x64);
        s->b2f = *(int *)(s->obj + 0x68);
    }
    for (i = 0; i < s->count; i++) {
        if (test_bit(&s->mask26, s->entries[i].slot) != 0) {
            State *s2 = (State *)((char *)s + (unsigned int)i * 8);
            s->mask24 |= (1 << *(volatile int *)&s2->entries[0].slot);
            FUN_0208652c(d, s2->entries[0].id);
            s->vals[i] = d[3];
        }
        FUN_02084e9c(s->entries[i].id);
    }
    FUN_02097b58(&s->obj);
    FUN_0209941c();
    s->count = 0;
    s->f0 = 0;
}
