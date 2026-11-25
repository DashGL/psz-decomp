// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
typedef struct {
    unsigned int pad0;
    unsigned int id;
    unsigned int pad1[14];
    Pair pairs[2];
    unsigned int vals[2];
    unsigned int pad2[2];
    int zero;
} State;
extern char *DAT_02108d04;
extern char *FUN_020ac3b4(void *, int);
extern int FUN_020525b8(void *, unsigned char, void *);
extern int FUN_0205256c(void *, unsigned char, void *);
void FUN_0204d204(State *s, int index) {
    char *m = DAT_02108d04, *p = 0;
    unsigned int large[17], small[3];
    int count, i;
    if (m && s->id == *(unsigned int *)(m + 252))
        p = FUN_020ac3b4(m, index);
    if (p) {
        count = *(unsigned char *)(p + 272);
        if (count > 2) count = 2;
        s->zero = 0;
        for (i = 0; i < count; i++) {
            if (FUN_020525b8(p, i, large) && FUN_0205256c(p, i, small)) {
                s->pairs[i].a = small[0];
                s->pairs[i].b = small[1];
                s->vals[i] = large[14];
            }
        }
    }
}