// flags: -O4,s
#pragma opt_common_subs off
typedef struct { unsigned char v[8]; } Bytes;
typedef struct { int v[14]; } Tail;
typedef struct { short v[4]; } Health;
typedef struct { int a[4], b[4]; signed char tags[4]; Bytes bytes; Tail tail; } Stats;
extern char *UNK_02108d04;
extern void FUN_020c4450(void *, void *);
int FUN_020a93a8(void) {
    Health h;
    Stats d;
    char *actor = UNK_02108d04;
    int result = 0;
    if (actor) {
        Stats *s = (Stats *)(actor + 36);
        FUN_020c4450(d.a, s->a);
        FUN_020c4450(d.b, s->b);
        d.tags[0] = s->tags[0];
        d.tags[1] = s->tags[1];
        d.tags[2] = s->tags[2];
        d.tags[3] = s->tags[3];
        d.bytes = s->bytes;
        d.tail = s->tail;
        h = *(Health *)(actor + 334);
        if ((100 * (int)(unsigned short)h.v[0]) / (*(unsigned short *)((char *)&d + 56)) < 33)
            result = 1;
    }
    return result;
}
