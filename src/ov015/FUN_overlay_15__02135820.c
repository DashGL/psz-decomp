// flags: -O4,p
extern void FUN_overlay_15__02136d24(void *);
extern void FUN_overlay_15__02135b98(void *, void *);
typedef struct {
    char pad[548];
    void *pool;
} Bank;
extern Bank *DAT_0213e8f0;
typedef struct {
    int pad[2];
    unsigned *p;
    unsigned char count;
} Obj;
void FUN_overlay_15__02135820(Obj *s) {
    unsigned *p = s->p;
    int screen = 0;
    int i;
    for (i = 0; i < s->count; i++) {
        *p = (*p & 0xc1fffcff) | 0x200;
        p += 2;
    }
    FUN_overlay_15__02136d24(s);
    if ((unsigned)s >= (unsigned)(DAT_0213e8f0 + 1)) screen = 1;
    FUN_overlay_15__02135b98(DAT_0213e8f0[screen].pool, s);
}
